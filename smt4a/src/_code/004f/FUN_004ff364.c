/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff364` (_code @ 0x4ff364, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004ff364_arg0 fn_004ff364_arg0;
struct fn_004ff364_arg0 {
    unsigned char pad_0x0[0x10];
    void *field_0x10; /* +0x10 */
    unsigned char pad_0x14[0xc];
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
};

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_004ff364(fn_004ff364_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  
  temp_v2 = param_1->field_0x10 != (void *)0x0;
  temp_v0 = 0;
  temp_v1 = 0;
  if (temp_v2) {
    temp_v1 = (unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 0xe);
    temp_v0 = temp_v1 - param_2;
  }
  if ((temp_v2 && temp_v1 != param_2) && temp_v0 < 0 == (temp_v2 && SBORROW4(temp_v1,param_2))) {
    param_1 = *(fn_004ff364_arg0 **)
               (param_1->field_0x20 +
               (((unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4 + 2) +
                (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4)) - 1) * 0x18 + 4);
    VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return (int)param_1;
}
