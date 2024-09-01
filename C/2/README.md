## 변수
변수 : 지정된 값을 필요에 의해 반복적으로 바꿔서 사용하는 값
상수 : 항상 같은 값, 고정적으로 사용
수, 값(data, 자료) : 선 저장 후 처리
- 저장을 하기 위해서는 공간(변수)이 필요

= (대입연산자) : 대입연산자의 왼쪽은 공간, 오른쪽은 값으로 해석
- 오른쪽을 먼저 처리

변수 선언 : 이름 부여 + 공간을 형성
변수 초기화 : 이름 부여 + 공간을 형성 + 기본값

## 서식
서식 : 꾸며준다
서식 문자 : 특정 서식 공간에 제한된 자료를 대입해서 화면에 출력하거나 입력받기 위한 용도의 문자
- %d : 10진 정수 서식 문자
- %f : 10진 실수 서식 문자
- %c : 한 문자 서식 문자
- %s : 문자열 서식 문자
```#include <stdio.h>

int main(void)
{
    int number1, number2;
    number1 = 1;
    number2 = 2;
    int number3 = 3, number4 = 4;
    
    printf("%d %d %d %d", number1, number2, number3, number4);
    
    return 0;
}
```
```
#include <stdio.h>

int main(void)
{
	int number1 = 3;
	printf("%d\n", number1);	// \n : 엔터(줄 바꿈)
	int number2 = 5;			
	printf("%d\n", number2);

	return 0;
}
```
