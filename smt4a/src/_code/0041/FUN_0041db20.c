/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041db20` (_code @ 0x41db20, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00557bf0; /* 0x557bf0 */
extern unsigned char DAT_00557e14; /* 0x557e14 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002a1ca0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0041db20(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int unaff_r4;
  int temp_v0;
  int unaff_r8;
  
  if (param_1[6] != 0) {
    unaff_r4 = 0;
    unaff_r8 = 0x40;
  }
  *param_1 = (unsigned int)&DAT_00557e14;
  if (param_1[6] != 0) {
    do {
      temp_v0 = unaff_r8 + unaff_r4 * 0x44;
      FUN_002a1ca0(*(unsigned int *)(param_1[6] + temp_v0));
      unaff_r4 = unaff_r4 + 1;
      *(unsigned int *)(param_1[6] + temp_v0) = 0;
    } while (unaff_r4 < 2);
    FUN_0019a5a0(param_1[6]);
    param_1[6] = 0;
  }
  *param_1 = (unsigned int)&DAT_00557bf0;
  if (param_1[2] != 0) {
    FUN_002a1ca0();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_0019a5a0();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  FUN_002e3328(param_1);
  return;
}
