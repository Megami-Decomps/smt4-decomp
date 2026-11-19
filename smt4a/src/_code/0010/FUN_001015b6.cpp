#include "romwright_types.h"

extern "C" {

extern int *rt_ctype_table(void);


unsigned char FUN_001015b6(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)rt_ctype_table();
  return *(unsigned char *)(*piVar1 + param_1) & 1;
}

} /* extern "C" */
