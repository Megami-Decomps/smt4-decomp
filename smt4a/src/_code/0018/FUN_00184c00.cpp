/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184c00` (_code @ 0x184c00, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00184c00_arg0 fn_00184c00_arg0;
struct fn_00184c00_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    int field_0x58; /* +0x58 */
    short field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};


void FUN_00184c00(fn_00184c00_arg0 *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if (param_1->field_0x58 != 0) {
    param_1->field_0x5c = (short)param_2;
    param_1->field_0x5e = 0;
    param_1->field_0x87 = 0;
    puVar1 = (unsigned int *)(param_1->field_0x58 + param_2 * 0xc);
    param_1->field_0x8a = 0;
    param_1->field_0x60 = (char)param_3;
    if (param_3 != 0) {
      temp_v0 = puVar1[1];
    }
    else {
      temp_v0 = *puVar1;
    }
    param_1->field_0x20 = temp_v0;
  }
  return;
}

} /* extern "C" */
