/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dafd0` (_code @ 0x4dafd0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004dafd0_arg0 fn_004dafd0_arg0;
struct fn_004dafd0_arg0 {
    unsigned char pad_0x0[0x148];
    undefined1 field_0x148; /* +0x148 */
    unsigned char pad_0x149[0x1];
    undefined2 field_0x14a; /* +0x14a */
    undefined1 field_0x14c; /* +0x14c */
    unsigned char pad_0x14d[0x1];
    undefined2 field_0x14e; /* +0x14e */
    undefined1 field_0x150; /* +0x150 */
    unsigned char pad_0x151[0x3];
    undefined4 field_0x154; /* +0x154 */
    undefined1 field_0x158; /* +0x158 */
    undefined1 field_0x159; /* +0x159 */
    unsigned char field_0x15a; /* +0x15a */
    unsigned char pad_0x15b[0x3];
    unsigned char field_0x15e; /* +0x15e */
    unsigned char pad_0x15f[0x3];
    unsigned char field_0x162; /* +0x162 */
    unsigned char pad_0x163[0x3];
    unsigned char field_0x166; /* +0x166 */
    unsigned char pad_0x167[0x3];
    undefined1 field_0x16a; /* +0x16a */
    unsigned char pad_0x16b[0x1];
    ushort field_0x16c; /* +0x16c */
    undefined1 field_0x16e; /* +0x16e */
    unsigned char pad_0x16f[0x1];
    undefined2 field_0x170; /* +0x170 */
    undefined2 field_0x172; /* +0x172 */
    unsigned char pad_0x174[0x7];
    undefined1 field_0x17b; /* +0x17b */
    unsigned char pad_0x17c[0x38];
    undefined1 field_0x1b4; /* +0x1b4 */
};


void FUN_004dafd0(fn_004dafd0_arg0 *param_1)

{
  param_1->field_0x14c = 0;
  param_1->field_0x14e = 0;
  param_1->field_0x150 = 0;
  param_1->field_0x154 = 0;
  param_1->field_0x148 = 0;
  param_1->field_0x14a = 0;
  param_1->field_0x17b = 0;
  param_1->field_0x158 = 0;
  param_1->field_0x159 = 0;
  *(unsigned int *)&param_1->field_0x15a = 0;
  *(unsigned int *)&param_1->field_0x15e = 0;
  *(unsigned int *)&param_1->field_0x162 = 0;
  *(unsigned int *)&param_1->field_0x166 = 0;
  param_1->field_0x16a = 0;
  param_1->field_0x16c = param_1->field_0x16c & 0x3ff;
  param_1->field_0x16e = 0;
  param_1->field_0x170 = 0xffff;
  param_1->field_0x172 = 0xffff;
  param_1->field_0x1b4 = 0;
  return;
}

} /* extern "C" */
