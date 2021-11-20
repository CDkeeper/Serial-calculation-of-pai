#include<stdio.h>
#include<time.h>
using namespace std;
const int N = 1e8; //定义划分区间数 
double pai = 0; //存储运算pai的结果 
int main() {
    clock_t startTime, endTime; //定义时间变量用于记录进程耗费时间 
    double tmp = 0; //用来表示公式中的( i + 0.5 ) / N
    startTime = clock(); //程序开始 
    for (int i = 0; i < N; ++i) {  //如果i从0开始那么就到N-1结束否则结果不准确 
        tmp = (i + 0.5) / N;
        pai += 4 / (1 + tmp * tmp); //加上每一区间运算结果 
    }
    pai /= N; //除以N,由于pai定义为double类型，所以无需对分母转换为double类型，自动向高精度对齐 
    endTime = clock(); //记录程序结束时间 
    printf("Calculation time:%ld ms\n pai is approximately:%.12f", endTime - startTime, pai);
    //打印耗时和结果 
    return 0;
}
