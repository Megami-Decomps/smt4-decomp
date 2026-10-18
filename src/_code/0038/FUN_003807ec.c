/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003807ec` (_code @ 0x3807ec, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_002b777c. */
/* Supplied declaration required: FUN_002bf774. */


void FUN_003807ec(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x194);
  temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x98) + *(int *)(param_1 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v1,7);
  UnsignedDoesSaturate(temp_v1,7);
  FUN_002b777c(temp_v2 + 8,param_1 + 0xd4);
  piVar3 = *(int **)(temp_v2 + 0xc);
  if (piVar3 != (int *)(temp_v2 + 0xc)) {
    do {
      temp_v1 = piVar3[-0x21] + (unsigned int)*(unsigned char *)(piVar3 + -0xf);
      if (temp_v1 >= 0x80) {
        temp_v1 = 0x7f;
      }
      else if (temp_v1 < 0) {
        temp_v1 = 0;
      }
    } while ((temp_v1 <= temp_v0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)(temp_v2 + 0xc)));
  }
  FUN_002bf774(temp_v2 + 8,piVar3,param_1 + 0xd4);
  return;
}
