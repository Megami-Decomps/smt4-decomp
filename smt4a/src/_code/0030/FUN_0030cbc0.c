/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cbc0` (_code @ 0x30cbc0, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0030cbc0_arg1 fn_0030cbc0_arg1;
struct fn_0030cbc0_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    byte field_0x10; /* +0x10 */
};

extern unsigned char DAT_005590ec; /* 0x5590ec */


void FUN_0030cbc0(unsigned int *param_1,fn_0030cbc0_arg1 *param_2)

{
  *param_1 = (unsigned int)&DAT_005590ec;
  param_1[1] = param_2->field_0x4;
  *(unsigned char *)(param_1 + 2) = param_2->field_0x8;
  param_1[3] = param_2->field_0xc;
  *(unsigned char *)(param_1 + 4) = param_2->field_0x10;
  return;
}
