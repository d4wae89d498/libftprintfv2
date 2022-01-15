#include "../libftprintf.h"

int 					ft_snprintf_llong_base(t_printf_ctx *ctx, char **str, size_t *size, long long n, const char *b, int bl)
{
	int 				r;

	r = 0;
	if (n < 0)
	{
		ft_nstr_append(&r, str, size, '-');
		return (r + ft_snprintf_ullong_base(ctx, str, size, -n, b, bl));
	}
	return (r + ft_snprintf_ullong_base(ctx, str, size, n, b, bl));
}
