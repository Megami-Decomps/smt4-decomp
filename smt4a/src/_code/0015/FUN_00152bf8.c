/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152bf8` (_code @ 0x152bf8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0063f4e4; /* 0x63f4e4 */
extern int DAT_0063f4e8; /* 0x63f4e8 */
extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001afdc4. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00152bf8(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  nn_os_CriticalSection_Enter(&DAT_0063f4f0);
  for (temp_v0 = DAT_0063f4e4; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0xd8)) {
    if (temp_v0 == param_1) {
      temp_v0 = DAT_0063f4e4;
      if (DAT_0063f4e4 != 0) goto LAB_00152c40;
      break;
    }
  }
  goto LAB_00152c74;
  while (temp_v0 = *(int *)(temp_v0 + 0xd8), temp_v0 != 0) {
LAB_00152c40:
    if (temp_v0 == param_1) {
      temp_v0 = *(int *)(param_1 + 0xdc);
      if (temp_v0 != 0) {
        temp_v1 = *(int *)(param_1 + 0xd8);
        *(int *)(temp_v0 + 0xd8) = temp_v1;
        if (*(int *)(param_1 + 0xd8) != 0) {
          *(int *)(temp_v1 + 0xdc) = temp_v0;
        }
      }
      else {
        DAT_0063f4e4 = *(int *)(param_1 + 0xd8);
        if (DAT_0063f4e4 != 0) {
          *(unsigned int *)(DAT_0063f4e4 + 0xdc) = 0;
        }
        else {
          DAT_0063f4e4 = 0;
        }
      }
      break;
    }
  }
  DAT_0063f4e8 = DAT_0063f4e8 - 1;
LAB_00152c74:
  temp_v0 = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    do {
      if (*(int *)(param_1 + temp_v0 * 4 + 0x68) != 0) {
        FUN_001afdc4();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0xec));
  }
  FUN_0019a5a0(param_1);
  nn_os_CriticalSection_Leave(&DAT_0063f4f0);
  return;
}
