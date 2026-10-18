/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184758` (_code @ 0x184758, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00184758_arg0 fn_00184758_arg0;
struct fn_00184758_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x38];
    int field_0x4c; /* +0x4c */
    short field_0x50; /* +0x50 */
    undefined2 field_0x52; /* +0x52 */
    char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x31];
    undefined1 field_0x86; /* +0x86 */
    unsigned char pad_0x87[0x3];
    undefined1 field_0x8a; /* +0x8a */
};


void FUN_00184758(fn_00184758_arg0 *param_1,int param_2,int param_3)

{
  short *psVar1;
  
  if (param_1->field_0x4c != 0) {
    param_1->field_0x50 = (short)param_2;
    param_1->field_0x52 = 0;
    param_1->field_0x86 = 0;
    param_1->field_0x8a = 0;
    psVar1 = (short *)(param_1->field_0x4c + param_2 * 0xc);
    param_1->field_0x54 = (char)param_3;
    if (param_3 == 0) {
      param_1->field_0xc = (int)*psVar1 << 0xc;
      param_1->field_0x10 = (int)psVar1[1] << 0xc;
      return;
    }
    param_1->field_0xc = (int)psVar1[2] << 0xc;
    param_1->field_0x10 = (int)psVar1[3] << 0xc;
  }
  return;
}
