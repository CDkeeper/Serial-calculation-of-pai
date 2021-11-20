#include<stdio.h>
#include<time.h>
using namespace std;
const int N = 1e8; //���廮�������� 
double pai = 0; //�洢����pai�Ľ�� 
int main() {
    clock_t startTime, endTime; //����ʱ��������ڼ�¼���̺ķ�ʱ�� 
    double tmp = 0; //������ʾ��ʽ�е�( i + 0.5 ) / N
    startTime = clock(); //����ʼ 
    for (int i = 0; i < N; ++i) {  //���i��0��ʼ��ô�͵�N-1������������׼ȷ 
        tmp = (i + 0.5) / N;
        pai += 4 / (1 + tmp * tmp); //����ÿһ���������� 
    }
    pai /= N; //����N,����pai����Ϊdouble���ͣ���������Է�ĸת��Ϊdouble���ͣ��Զ���߾��ȶ��� 
    endTime = clock(); //��¼�������ʱ�� 
    printf("Calculation time:%ld ms\n pai is approximately:%.12f", endTime - startTime, pai);
    //��ӡ��ʱ�ͽ�� 
    return 0;
}
