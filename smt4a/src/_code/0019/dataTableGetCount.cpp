#include "romwright_types.h"

extern "C" {

extern unsigned int __aeabi_uidivmod(int);


unsigned int dataTableGetCount(int *param_1)

{
  unsigned int temp_v0;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0x314c4254)) && (param_1[2] != 0)) {
    temp_v0 = __aeabi_uidivmod(param_1[1]);
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
