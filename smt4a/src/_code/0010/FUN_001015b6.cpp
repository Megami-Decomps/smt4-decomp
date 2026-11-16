#include "romwright_types.h"

extern "C" {

extern int *libcLocaleGetCtypeTable(void);


unsigned char FUN_001015b6(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)libcLocaleGetCtypeTable();
  return *(unsigned char *)(*piVar1 + param_1) & 1;
}

} /* extern "C" */
