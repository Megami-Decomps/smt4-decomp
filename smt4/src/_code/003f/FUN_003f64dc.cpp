#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004d4674; /* 0x4d4674 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_003f64dc(int param_1,unsigned int *param_2)

{
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004d4674);
  *param_2 = *(unsigned int *)(param_1 + 0x38);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4674);
  return 1;
}

} /* extern "C" */
