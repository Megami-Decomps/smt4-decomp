/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d420` (_code @ 0x30d420, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0030d420_arg1 fn_0030d420_arg1;
struct fn_0030d420_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    ushort field_0x18; /* +0x18 */
    unsigned char pad_0x1a[0x2];
    undefined4 field_0x1c; /* +0x1c */
};

extern unsigned char DAT_0055a510; /* 0x55a510 */
extern unsigned char DAT_0055ac50; /* 0x55ac50 */


void FUN_0030d420(unsigned int *param_1,fn_0030d420_arg1 *param_2)

{
  unsigned int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ac50;
  *(unsigned char *)(param_1 + 1) = param_2->field_0x4;
  temp_v0 = param_2->field_0x8;
  param_1[3] = param_2->field_0xc;
  param_1[2] = temp_v0;
  param_1[4] = param_2->field_0x10;
  param_1[5] = param_2->field_0x14;
  *(unsigned short *)(param_1 + 6) = param_2->field_0x18;
  param_1[7] = param_2->field_0x1c;
  *param_1 = (unsigned int)&DAT_0055a510;
  return;
}

} /* extern "C" */
