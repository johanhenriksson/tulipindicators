#include "../indicators.h"

int ti_scale_start(TI_REAL const *options) {
    (void)options;
    return 0;
}

/* Scale every element of a vector by a constant factor */
int ti_scale(int size, TI_REAL const * const *inputs, TI_REAL const *options, TI_REAL * const *outputs) {
    const TI_REAL *input = inputs[0];
	const TI_REAL factor = options[0];
    TI_REAL *output = outputs[0];
	int i;

    for(i = 0; i < size; i++) {
        *output++ = input[i] * factor;
    }
    
    return TI_OKAY;
}
