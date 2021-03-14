/*
 * How it works:
 * void func_ptr(void_function_pointer)(void)
 * void (*void_function_pointer)(void)
 */
#define func_ptr(function_name) (*function_name)
