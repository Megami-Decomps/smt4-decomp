#include "romwright_types.h"

extern "C" {

extern int *rt_ctype_table(void);


int libc_toupper(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)rt_ctype_table();
  if (((int)((unsigned int)*(unsigned char *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    return param_1 - 0x20;
  }
  return param_1;
}

} /* extern "C" */
