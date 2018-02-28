#include "../indicators.h"

int ti_translate_start(TI_REAL const *options) {
    (void)options;
    return 0;
}

/* Translate every element of a vector by a constant amount */
int ti_translate(int size, TI_REAL const * const *inputs, TI_REAL const *options, TI_REAL * const *outputs) {
    const TI_REAL *input = inputs[0];
	const TI_REAL amount = options[0];
    TI_REAL *output = outputs[0];
	int i;

    for(i = 0; i < size; i++) {
        *output++ = input[i] + amount;
    }
    
    return TI_OKAY;
}
