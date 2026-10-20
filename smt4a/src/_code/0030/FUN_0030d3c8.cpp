/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d3c8` (_code @ 0x30d3c8, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0030d3c8_arg1 fn_0030d3c8_arg1;
struct fn_0030d3c8_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
};

extern unsigned char DAT_0055a894; /* 0x55a894 */
extern unsigned char DAT_0055ad38; /* 0x55ad38 */


void FUN_0030d3c8(unsigned int *param_1,fn_0030d3c8_arg1 *param_2)

{
  *param_1 = (unsigned int)&DAT_0055ad38;
  *(unsigned char *)(param_1 + 1) = param_2->field_0x4;
  param_1[2] = param_2->field_0x8;
  param_1[3] = param_2->field_0xc;
  param_1[4] = param_2->field_0x10;
  *(unsigned short *)(param_1 + 5) = param_2->field_0x14;
  *(unsigned short *)((int)param_1 + 0x16) = param_2->field_0x16;
  *param_1 = (unsigned int)&DAT_0055a894;
  return;
}

} /* extern "C" */
