#include <cstdio>
using namespace std;

int main() {
    for(int i=0;i<10;i--){
        printf("========学生成绩管理系统=======\n");
        printf("1·学生信息录入\n");
        printf("2·学生信息查询\n");
        printf("3·学生信息删除\n");
        printf("4·退出\n");
        printf("============================\n");
        printf("你的选择是：\n");
    
        int a;//全局变量：选择
        int number;
        scanf("%d",&a);
        printf("选择的功能为：%d\n",a);
        
        int score;//全局变量：成绩

        if (a == 1){
            printf("输入学生成绩：");
            scanf("%d", &score);
            if (score >= 0 && 100 <= score){
                printf("学生的成绩是：%d\n", score);
            }else{
                printf("学生的成绩是(0-100)");
                scanf("%d", &score);
                printf("学生的成绩是：%d\n", score);
            }
            
            
        }

        if (a == 2){
            printf("输入学生的学号：");
            scanf("%d", &number);

        }
        if (a == 3){
            score = 0;
            printf ("学生成绩已经删除");
        }
        if (a == 4){
            printf ("再见");
            break;
        }

        
    }
    return 0;

}