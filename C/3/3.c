#include <stdio.h>
#define LENGTH 10	// 매크로 상수

int main(void)
{
	int in1 = 3;	// 변수
	const int in2 = 5;	// 심볼릭 상수
	//NUMBER = 10; // 상수는 값을 변경할 수 없다(불가능)
  char ch1 = 66, ch2 = 'B'; // 문자(한글자)를 표현할 때는 작은 따옴표 사용
  float fl = 3.14;
  
	printf("%d\n", in1);   // 정수 형태 출력
  print("%d\n", in2);
  printf("%c\n", ch1);   // 문자 형태 출력
  printf("%c\n", ch2);
  print("%.1f\n", fl);   // 실수 형태 출력
	printf("%d\n", sizeof(100));	// int형으로 처리(4바이트)
	printf("%d\n", sizeof(3.14));	//double형으로 처리(8바이트)
  print("%d\n", LENGTH);

	return 0;
}
