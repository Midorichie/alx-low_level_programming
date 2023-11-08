#ifndef _3_CALC_H
#define _3_CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif /* _3_CALC_H */
