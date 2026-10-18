/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343810` (_code @ 0x343810, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00343810_arg0 fn_00343810_arg0;
struct fn_00343810_arg0 {
    unsigned char pad_0x0[0x52c];
    undefined4 field_0x52c; /* +0x52c */
    unsigned char pad_0x530[0xc9c];
    float field_0x11cc; /* +0x11cc */
    float field_0x11d0; /* +0x11d0 */
    float field_0x11d4; /* +0x11d4 */
    float field_0x11d8; /* +0x11d8 */
    char field_0x11dc; /* +0x11dc */
};

/* Supplied declaration required: FUN_002b634c. */


void FUN_00343810(fn_00343810_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  temp_v0 = 0;
  if (param_1->field_0x11dc == '\0') {
    temp_v0 = param_1->field_0x11cc == in_s0;
  }
  if (temp_v0) {
    temp_v0 = 0;
    if (param_1->field_0x11d0 == in_s1) {
      temp_v0 = param_1->field_0x11d4 == in_s2;
    }
    temp_v1 = 0;
    if (temp_v0) {
      temp_v1 = param_1->field_0x11d8 == in_s3;
    }
    if (temp_v1) {
      param_1->field_0x11dc = '\0';
      return;
    }
  }
  param_1->field_0x11cc = in_s0;
  param_1->field_0x11d0 = in_s1;
  param_1->field_0x11d4 = in_s2;
  param_1->field_0x11d8 = in_s3;
  FUN_002b634c(param_1->field_0x52c,&param_1->field_0x11cc);
  param_1->field_0x11dc = '\0';
  return;
}
