/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8f58` (_code @ 0x3c8f58, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003c8f58_arg0 fn_003c8f58_arg0;
struct fn_003c8f58_arg0 {
    unsigned char pad_0x0[0x118];
    undefined1 field_0x118; /* +0x118 */
    unsigned char pad_0x119[0x1];
    undefined2 field_0x11a; /* +0x11a */
    undefined1 field_0x11c; /* +0x11c */
    unsigned char pad_0x11d[0x1];
    undefined2 field_0x11e; /* +0x11e */
    undefined1 field_0x120; /* +0x120 */
    undefined1 field_0x121; /* +0x121 */
    unsigned char field_0x122; /* +0x122 */
    unsigned char pad_0x123[0x3];
    unsigned char field_0x126; /* +0x126 */
    unsigned char pad_0x127[0x3];
    unsigned char field_0x12a; /* +0x12a */
    unsigned char pad_0x12b[0x3];
    unsigned char field_0x12e; /* +0x12e */
    unsigned char pad_0x12f[0x3];
    undefined1 field_0x132; /* +0x132 */
    unsigned char pad_0x133[0x1];
    ushort field_0x134; /* +0x134 */
    undefined1 field_0x136; /* +0x136 */
    unsigned char pad_0x137[0x1];
    undefined2 field_0x138; /* +0x138 */
    undefined2 field_0x13a; /* +0x13a */
    unsigned char pad_0x13c[0x7];
    undefined1 field_0x143; /* +0x143 */
    unsigned char pad_0x144[0x38];
    undefined1 field_0x17c; /* +0x17c */
};


void FUN_003c8f58(fn_003c8f58_arg0 *param_1)

{
  param_1->field_0x11c = 0;
  param_1->field_0x11e = 0;
  param_1->field_0x118 = 0;
  param_1->field_0x11a = 0;
  param_1->field_0x143 = 0;
  param_1->field_0x120 = 0;
  param_1->field_0x121 = 0;
  *(unsigned int *)&param_1->field_0x122 = 0;
  *(unsigned int *)&param_1->field_0x126 = 0;
  *(unsigned int *)&param_1->field_0x12a = 0;
  *(unsigned int *)&param_1->field_0x12e = 0;
  param_1->field_0x132 = 0;
  param_1->field_0x134 = param_1->field_0x134 & 0x3ff;
  param_1->field_0x136 = 0;
  param_1->field_0x138 = 0xffff;
  param_1->field_0x13a = 0xffff;
  param_1->field_0x17c = 0;
  return;
}

} /* extern "C" */
