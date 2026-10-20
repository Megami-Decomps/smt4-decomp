#include "romwright_types.h"

extern "C" {

extern int *FUN_002e2a98(void);


unsigned char FUN_001015b6(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002e2a98();
  return *(unsigned char *)(*piVar1 + param_1) & 1;
}

} /* extern "C" */
