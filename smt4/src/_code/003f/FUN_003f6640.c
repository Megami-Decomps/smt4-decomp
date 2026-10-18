/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6640` (_code @ 0x3f6640, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4674; /* 0x4d4674 */

extern unsigned int FUN_001df78c(int, unsigned int, unsigned int);
extern unsigned int FUN_002dad58(int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_003f6640(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter(&DAT_004d4674);
  if (*(unsigned int *)(param_1 + 0x38) < *(unsigned int *)(param_1 + 8)) {
    temp_v1 = *(int *)(param_1 + 0x30);
    nn_os_CriticalSection_Leave(&DAT_004d4674);
    temp_v0 = FUN_001df78c(param_1,param_2,0);
    *(unsigned int *)(*(int *)(param_1 + 0x28) + temp_v1 * 4) = temp_v0;
    temp_v0 = FUN_002dad58(param_1);
    *(unsigned int *)(*(int *)(param_1 + 0x2c) + temp_v1 * 4) = temp_v0;
    nn_os_CriticalSection_Enter(&DAT_004d4674);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 8)) {
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    nn_os_CriticalSection_Leave(&DAT_004d4674);
    return 1;
  }
  nn_os_CriticalSection_Leave(&DAT_004d4674);
  return 0;
}
