/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296284` (_code @ 0x296284, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b1ad4(...);
int FUN_002b1c44(...);
int FUN_002b1e08(...);

typedef struct fn_00296284_arg0 fn_00296284_arg0;
struct fn_00296284_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x3e];
    short field_0x52; /* +0x52 */
    unsigned char pad_0x54[0x31];
    undefined1 field_0x85; /* +0x85 */
    byte field_0x86; /* +0x86 */
    byte field_0x87; /* +0x87 */
    byte field_0x88; /* +0x88 */
    byte field_0x89; /* +0x89 */
    char field_0x8a; /* +0x8a */
};

extern unsigned char LAB_00140000; /* 0x140000 */

/* Supplied declaration required: FUN_002b1ad4. */
/* Supplied declaration required: FUN_002b1c44. */
/* Supplied declaration required: FUN_002b1e08. */


int FUN_00296284(fn_00296284_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = (int)param_1->field_0x52;
  if (temp_v2 == 0) {
    if (param_3 == 0) {
      param_1->field_0xc = (undefined4)&LAB_00140000;
      param_1->field_0x10 = 0;
    }
    else {
      param_1->field_0x10 = (undefined4)&LAB_00140000;
      param_1->field_0xc = 0;
    }
    if (param_2 != 0) {
      param_1->field_0xc = -param_1->field_0xc;
      param_1->field_0x10 = -param_1->field_0x10;
    }
  }
  temp_v1 = 0x4b;
  if ((0 < temp_v2) && (temp_v1 = temp_v2 * -5 + 0x4b, temp_v1 < 0)) {
    temp_v1 = 0;
  }
  if (param_2 != 0) {
    temp_v1 = -temp_v1;
  }
  if (param_3 != 0) {
    temp_v2 = param_1->field_0x10 + temp_v1 * -0x1000;
    param_1->field_0x10 = temp_v2;
    temp_v2 = temp_v2 >> 0xc;
    if (param_2 != 0) {
      if (temp_v2 >= 0) {
        param_1->field_0x10 = 0;
        param_1->field_0x86 = 1;
      }
      else {
        param_1->field_0x8a = '\0';
      }
    }
    else if (0 >= temp_v2) {
      param_1->field_0x10 = 0;
LAB_00296374:
      param_1->field_0x86 = 1;
    }
    else {
      param_1->field_0x8a = '\0';
    }
  }
  else {
    temp_v2 = param_1->field_0xc + temp_v1 * -0x1000;
    param_1->field_0xc = temp_v2;
    temp_v2 = temp_v2 >> 0xc;
    if (param_2 != 0) {
      if (-1 < temp_v2) {
LAB_00296370:
        param_1->field_0xc = 0;
        goto LAB_00296374;
      }
    }
    else if (temp_v2 < 1) goto LAB_00296370;
    param_1->field_0x8a = '\0';
  }
  param_1->field_0x52 = param_1->field_0x52 + 1;
  FUN_002b1e08(param_1);
  FUN_002b1c44(param_1);
  FUN_002b1ad4(param_1);
  temp_v3 = param_1->field_0x86 != 0;
  temp_v0 = 0;
  if (temp_v3) {
    temp_v0 = param_1->field_0x87;
  }
  if (temp_v3 && temp_v0 != 0) {
    temp_v3 = param_1->field_0x88 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x89;
    }
    if (temp_v3 && temp_v0 != 0) {
      param_1->field_0x8a = '\x01';
      param_1->field_0x85 = 1;
      return (int)param_1->field_0x8a;
    }
  }
  param_1->field_0x8a = '\0';
  param_1->field_0x85 = 1;
  return (int)param_1->field_0x8a;
}

} /* extern "C" */
