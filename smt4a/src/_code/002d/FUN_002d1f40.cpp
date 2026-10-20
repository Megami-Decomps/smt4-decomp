/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1f40` (_code @ 0x2d1f40, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern unsigned char DAT_005806a0; /* 0x5806a0 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void FUN_002d1f40(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = (*(int *)((unsigned char *)&DAT_005806a0 + 0x4));
  if (param_2 == 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a8) = 0;
    *(unsigned int *)(temp_v2 + 0x2ac) = 0;
    return;
  }
  temp_v4 = *(int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a8) != 0;
  temp_v0 = 0;
  temp_v3 = 0;
  if (temp_v4) {
    temp_v3 = *(int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2ac);
    temp_v0 = temp_v3 - param_3;
  }
  if ((!temp_v4 || temp_v3 == param_3) || temp_v0 < 0 != (temp_v4 && SBORROW4(temp_v3,param_3))) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2a8) = 1;
    temp_v0 = (*(int *)((unsigned char *)&DAT_005806a0 + 0x4));
    if (param_1 == 0) {
      param_1 = -1;
    }
    *(short *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2b0) = (short)param_1;
    *(int *)(temp_v2 + 0x2ac) = param_3;
    *(short *)(temp_v0 + 0x2b4) = (short)(param_2 * 10);
    temp_v1 = (unsigned short)((((param_2 * 10) & 0xffffU) << 2) / 10);
    *(unsigned short *)(temp_v0 + 0x2b2) = temp_v1;
    *(unsigned short *)(temp_v0 + 0x2b6) = temp_v1;
  }
  return;
}

} /* extern "C" */
