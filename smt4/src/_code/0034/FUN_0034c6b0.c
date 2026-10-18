/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c6b0` (_code @ 0x34c6b0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00420798; /* 0x420798 */
extern unsigned char DAT_00420994; /* 0x420994 */

/* Supplied declaration required: FUN_0023d02c. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0034c6b0(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int unaff_r4;
  int temp_v0;
  int unaff_r8;
  
  if (param_1[6] != 0) {
    unaff_r4 = 0;
    unaff_r8 = 0x40;
  }
  *param_1 = (unsigned int)&DAT_00420994;
  if (param_1[6] != 0) {
    do {
      temp_v0 = unaff_r8 + unaff_r4 * 0x44;
      FUN_0023d02c(*(unsigned int *)(param_1[6] + temp_v0));
      unaff_r4 = unaff_r4 + 1;
      *(unsigned int *)(param_1[6] + temp_v0) = 0;
    } while (unaff_r4 < 2);
    FUN_002c415c(param_1[6]);
    param_1[6] = 0;
  }
  *param_1 = (unsigned int)&DAT_00420798;
  if (param_1[2] != 0) {
    FUN_0023d02c();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_002c415c();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  FUN_002b2368(param_1);
  return;
}
