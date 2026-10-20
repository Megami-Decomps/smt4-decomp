#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d6f8; /* 0x62d6f8 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00513b50(int param_1,unsigned int *param_2)

{
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d6f8);
  *param_2 = *(unsigned int *)(param_1 + 0x38);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6f8);
  return 1;
}

} /* extern "C" */
