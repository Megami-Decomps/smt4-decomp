/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029538c` (_code @ 0x29538c, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0029538c_arg0 fn_0029538c_arg0;
struct fn_0029538c_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x3e];
    short field_0x52; /* +0x52 */
    unsigned char pad_0x54[0x31];
    undefined1 field_0x85; /* +0x85 */
    byte field_0x86; /* +0x86 */
    byte field_0x87; /* +0x87 */
    byte field_0x88; /* +0x88 */
    byte field_0x89; /* +0x89 */
    byte field_0x8a; /* +0x8a */
};

/* Supplied declaration required: FUN_002b1c8c. */
/* Supplied declaration required: FUN_002b1dfc. */
/* Supplied declaration required: FUN_002b1fc0. */


unsigned int FUN_0029538c(fn_0029538c_arg0 *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 1;
  temp_v2 = (int)param_1->field_0x52;
  if ((temp_v2 == 0) && (param_1->field_0x10 = 0x3c000, param_2 == 0)) {
    param_1->field_0x10 = -0x3c000;
    temp_v1 = -0xb;
  }
  else {
    temp_v1 = 0xb;
    if (param_2 == 0) {
      temp_v1 = -0xb;
    }
  }
  if (0 < temp_v2) {
    if (param_2 != 0) {
      temp_v1 = temp_v1 - temp_v2;
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
    }
    else {
      temp_v1 = temp_v1 + temp_v2;
      if (0 < temp_v1) {
        temp_v1 = 0;
      }
    }
  }
  temp_v2 = param_1->field_0x10 + temp_v1 * -0x1000;
  param_1->field_0x10 = temp_v2;
  temp_v2 = temp_v2 >> 0xc;
  if (param_2 != 0) {
    if (0 >= temp_v2) {
      param_1->field_0x10 = 0;
      param_1->field_0x86 = 1;
    }
    else {
      temp_v3 = 0;
      param_1->field_0x8a = 0;
    }
  }
  else if (-1 < temp_v2) {
    param_1->field_0x10 = 0;
    param_1->field_0x86 = 1;
  }
  else {
    temp_v3 = 0;
    param_1->field_0x8a = 0;
  }
  param_1->field_0x52 = param_1->field_0x52 + 1;
  FUN_002b1fc0(param_1);
  FUN_002b1dfc(param_1);
  FUN_002b1c8c(param_1);
  temp_v4 = param_1->field_0x86 != 0;
  temp_v0 = 0;
  if (temp_v4) {
    temp_v0 = param_1->field_0x87;
  }
  if (temp_v4 && temp_v0 != 0) {
    temp_v4 = param_1->field_0x88 != 0;
    temp_v0 = 0;
    if (temp_v4) {
      temp_v0 = param_1->field_0x89;
    }
    if (temp_v4 && temp_v0 != 0) {
      param_1->field_0x8a = 1;
      param_1->field_0x85 = 1;
      if (param_1->field_0x8a == 0) {
        temp_v3 = 0;
      }
      return temp_v3;
    }
  }
  param_1->field_0x8a = 0;
  param_1->field_0x85 = 1;
  if (param_1->field_0x8a == 0) {
    temp_v3 = 0;
  }
  return temp_v3;
}
