/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001742e4` (_code @ 0x1742e4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0017fc38. */
/* Supplied declaration required: FUN_001a586c. */


void FUN_001742e4(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (((0 < param_2) && (*(char *)((int)param_1 + 0xa1) != '\x02')) &&
     (((char)param_1[0x26] != '\0' || (*(char *)((int)param_1 + 0x99) != '\0')))) {
    FUN_0017fc38(param_1 + 0x1a);
    temp_v2 = 0;
    temp_v0 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = in_s0 * temp_v0;
    temp_v1 = (int)in_s0;
    FUN_0017fc38(param_1 + 0x1a);
    param_1[0x1a] = (int)in_s0;
    param_1[0x1b] = temp_v2;
    param_1[0x1c] = temp_v1;
    param_1[0x1d] = 0;
    *(unsigned char *)((int)param_1 + 0x9d) = 0;
    if (param_1[4] != 0) {
      FUN_001a586c(param_1[4],param_1);
    }
    (**(romwright_code **)(*param_1 + 0x24))(param_1);
    *(unsigned char *)((int)param_1 + 0x9a) = 0;
    *(unsigned char *)((int)param_1 + 0xa1) = 0;
    *(unsigned char *)((int)param_1 + 0xa3) = 0;
    *(unsigned char *)((int)param_1 + 0x9b) = 1;
    *(unsigned char *)((int)param_1 + 0xa2) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001743b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  return;
}
