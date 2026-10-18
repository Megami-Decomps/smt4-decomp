/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b904` (_code @ 0x37b904, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */


int FUN_0037b904(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  piVar3 = *(int **)(param_1 + 4);
  temp_v1 = 0;
  temp_v2 = 0x80;
  while (piVar3 != (int *)(param_1 + 4)) {
    temp_v0 = UnsignedSaturate(piVar3[-0x27] + (unsigned int)*(unsigned char *)(piVar3 + -0x15),7);
    UnsignedDoesSaturate(piVar3[-0x27] + (unsigned int)*(unsigned char *)(piVar3 + -0x15),7);
    if (temp_v0 < temp_v2) {
      temp_v1 = (int)(piVar3 + -0x3b);
    }
    piVar3 = (int *)*piVar3;
    if (temp_v0 < temp_v2) {
      temp_v2 = temp_v0;
    }
  }
  return temp_v1;
}
