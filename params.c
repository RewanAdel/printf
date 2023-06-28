#include "main.h"

/**
 * init_params - init parameters
 * @params: the parameters struct
 * @ap: argument pointers
 * Return: void
 */
void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;
	params->width = 0;
	params->precision = UINT_MAX;
	params->h.modifier = 0;
	params->l.modifier = 0;
	(void)ap;
}
