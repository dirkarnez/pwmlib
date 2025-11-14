#include <stdio.h>

#define PWM_INTENSITY(on_time, period_time) ((((double)on_time) / (((double)on_time) + ((double)period_time))))
#define PWM(max_voltage, on_time, period_time) (((double)max_voltage) * (PWM_INTENSITY(((double)on_time), ((double)period_time))))

int main(void) {
    printf("PWM_INTENSITY %.2f\n", PWM_INTENSITY(2, 8));
    printf("PWM %.2f\n", PWM(5, 2, 8));
    return 0;
}
