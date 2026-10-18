/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa268` (_code @ 0x2aa268, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aa268_arg0 fn_002aa268_arg0;
struct fn_002aa268_arg0 {
    unsigned char pad_0x0[0x24];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x34];
    int field_0x64; /* +0x64 */
    short field_0x68; /* +0x68 */
    undefined2 field_0x6a; /* +0x6a */
    char field_0x6c; /* +0x6c */
    unsigned char pad_0x6d[0x1b];
    undefined1 field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x1];
    undefined1 field_0x8a; /* +0x8a */
};


void FUN_002aa268(fn_002aa268_arg0 *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if (param_1->field_0x64 != 0) {
    param_1->field_0x68 = (short)param_2;
    param_1->field_0x6a = 0;
    param_1->field_0x88 = 0;
    puVar1 = (unsigned int *)(param_1->field_0x64 + param_2 * 0xc);
    param_1->field_0x8a = 0;
    param_1->field_0x6c = (char)param_3;
    if (param_3 != 0) {
      temp_v0 = puVar1[1];
    }
    else {
      temp_v0 = *puVar1;
    }
    param_1->field_0x24 = temp_v0;
    param_1->field_0x28 = temp_v0;
    param_1->field_0x2c = temp_v0;
  }
  return;
}
