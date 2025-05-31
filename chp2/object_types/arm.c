#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool arm_detonator(int);

bool arm_detonator(int arm) {
	if (arm <= 0) {
		return false;
	}
	else {
		return true;
	}
}

void arm_missile(int arm_code) {
	bool armed = arm_detonator(arm_code);
	if (armed) puts("missile armed");
	else puts("missile disarmed");
}

int main() {
	int arm = 3;
	arm_detonator(arm);
	arm_missile(arm);
	return EXIT_SUCCESS;
}
