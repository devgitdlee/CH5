#include <stdio.h>

int main(void) {
	const double kw1 = 52.0, kw101 = 88.5, kw201 = 127.8, kw301 = 184.3, kw401 = 274.3, kw501 = 494.0;
	int pow, basic;	//사용kw 기본요금
	double electricityfee; //전기요금 세금
	


	printf("전기 사용량을 입력하세요(kw) :");
	scanf("%d", &pow);

	if (pow > 500) basic = 9330;
	else if (pow > 400) basic = 5130;
	else if (pow > 300) basic = 2710;
	else if (pow > 200) basic = 1130;
	else if (pow > 100) basic = 660;
	else basic = 370;

	if (pow <= 100) {
		electricityfee = basic + (pow * kw1);
	}
	else if (pow <= 200) {
		electricityfee = basic + ((100 * kw1) + ((pow - 100) * kw101));
	}
	else if (pow <= 300) {
		electricityfee = basic + ((100 * kw1) + (100 * kw101)) + ((pow - 200) * kw201);
	}
	else if (pow <= 400) {
		electricityfee = basic + ((100 * kw1) + (100 * kw101) + (100 * kw201)) + ((pow - 300) * kw301);
	}
	else if (pow <= 500) {
		electricityfee = basic + ((100 * kw1) + (100 * kw101) + (100 * kw201) + (100 * kw301)) + ((pow - 400) * kw401);
	}
	else {
		electricityfee = basic + ((100 * kw1) + (100 * kw101) + (100 * kw201) + (100 * kw301) + (100 * kw401)) + ((pow - 500) * kw501);
	}

	electricityfee *= 1.09;

	/*
	switch (section)
	{
	case 1:
		basemoney = 370;
		kwmoney = 52.0;
		break;
	case 2:
		basemoney = 660;
		kwmoney = 88.5;
		break;
	case 3:
		basemoney = 1130;
		kwmoney = 127.8;
		break;
	case 4:
		basemoney = 2710;
		kwmoney = 184.3;
		break;
	case 5:
		basemoney = 5130;
		kwmoney = 274.3;
		break;
	default:
		basemoney = 9330;
		kwmoney = 494.0;
		break;
	}
	*/
	//electricityfee = basemoney + ((double)pow * kwmoney);// +(basemoney + ((double)pow * kwmoney)) * 0.009;
	//printf("basemoney = %d, pow = %d, kwmoney = %.1lf, %lf\n", basemoney, pow, kwmoney, electricityfee);
	printf("이번 달 요금은 %.0lf원입니다.", electricityfee);

	return 0;
}