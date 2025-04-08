//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

/*void main()
{
	int coffee;

	printf("어떤 커피 드릴까요?(1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);

	printf("\n# 1. 뜨거운 물을 준비한다\n");
	printf("# 2. 종이컵을 준비한다\n");
	

	switch (coffee)
	{
	case 1: printf("# 3. 보통커피를 탄다.\n");
		break;
	case 2: printf("# 3. 설탕커피를 탄다.\n");
		break;
	case 3: printf("# 3. 블랙커피를 탄다.\n");
		break;
	default: printf("# 3. 아무거나 탄다.\n");
		break;
	}

	printf("# 4. 물을 붓는다.\n");
	printf("# 5. 스푼으로 저어서 녹인다.\n\n");

	printf("손님~ 커피 여기 있습니다.\n\n");

}*/

/*int coffee_machine(int button)
{

	printf("\n# 1. 뜨거운 물을 준비한다\n");
	printf("# 2. 종이컵을 준비한다\n");

	const char* coffee_name; #포인터는 원본을 통해 접근하는 방식, call by differncial. call by value는 사본을 통해 연산하는 과정임

	switch (button)
	{
	case 1: 
		coffee_name = "보통";
		printf("# 3. 보통커피를 탄다.\n");
		printf("# 3. 보통커피를 탄다.\n");
		break;
	case 2: 
		coffee_name = "설탕";
		printf("# 3. 설탕커피를 탄다.\n");
		printf("# 3. 설탕커피를 탄다.\n");
		break;
	case 3: 
		coffee_name = "블랙";
		printf("# 3. 블랙커피를 탄다.\n");
		printf("# 3. 블랙커피를 탄다.\n");
		break;
	default:
		coffee_name = "";
		printf("# 3. 아무거나 탄다.\n");
		printf("# 3. 아무거나 탄다.\n");
		break;
	}
	printf("# 4. 물을 붓는다.\n");
	printf("# 5. 스푼으로 저어서 녹인다.\n\n");
	
	printf("손님~ %s 커피 여기 있습니다.\n\n", coffee_name);

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("어떤 커피 드릴까요?(1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	

	printf("어떤 커피 드릴까요?(1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	

	printf("어떤 커피 드릴까요?(1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
}*/

/*int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
	case 1: result = v1 + v2;
		break;
	case 2: result = v1 - v2;
		break;
	case 3: result = v1 * v2;
		break;
	case 4: result = v1 / v2;
		break;
	case 5: result = v1 % v2;
		break;
	default: result = 0;
	}

	return result;
}

int main()
{
	int res;
	int oper, a, b;

	printf("계산 입력 (1:+, 2:-, 3:*, 4:/, 5:%%): ");
	scanf("%d", &oper);

	printf("계산할 두 숫자를 입력:");
	scanf("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("계산 결과는 : %d\n", res);

	return 0;

}*/

