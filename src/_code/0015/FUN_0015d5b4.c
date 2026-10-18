/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d5b4` (_code @ 0x15d5b4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015d5b4_arg0 fn_0015d5b4_arg0;
struct fn_0015d5b4_arg0 {
    unsigned char pad_0x0[0x3c];
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x8];
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x10];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x80];
    byte field_0x104; /* +0x104 */
};


void FUN_0015d5b4(fn_0015d5b4_arg0 *param_1)

{
  if (param_1->field_0x104 != 0) {
    param_1->field_0x104 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x7c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x80 = 0;
  }
  return;
}
