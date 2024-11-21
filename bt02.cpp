#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char name[101];
    char dobth[31];
    float score1, score2, score3;
    float totalScore;
} Student;

int main() {
    int n;
    printf("nhap so thi sinh tham gia: ");
    scanf("%d", &n);

    Student students[MAX];

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        getchar();
        printf("Ho va ten thi sinh tham gia:");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        fgets(students[i].dobth, sizeof(students[i].dobth), stdin);
        students[i].dobth[strcspn(students[i].dobth, "\n")] = 0;
        
        printf("Nhap diem 3 mon cua thi sinh tham gia: ");
        scanf("%f %f %f", &students[i].score1, &students[i].score2, &students[i].score3);

        students[i].totalScore = students[i].score1 + students[i].score2 + students[i].score3;
    }
    

    float maxScore = students[0].totalScore;
    for (int i = 1; i < n; i++) {
        if (students[i].totalScore > maxScore) {
            maxScore = students[i].totalScore;
        }
    }

    for (int i = 0; i < n; i++) {
        if (students[i].totalScore == maxScore) {
            printf("%d %s %s %.1f\n", students[i].id, students[i].name, students[i].dobth, students[i].totalScore);//in ra thu khoa 
        }
    }

    return 0;
}
