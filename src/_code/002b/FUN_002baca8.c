/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002baca8` (_code @ 0x2baca8, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002baca8_arg0 fn_002baca8_arg0;
struct fn_002baca8_arg0 {
    unsigned char pad_0x0[0x754];
    uint field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    undefined4 field_0x75c; /* +0x75c */
    undefined4 field_0x760; /* +0x760 */
    undefined4 field_0x764; /* +0x764 */
    undefined4 field_0x768; /* +0x768 */
    unsigned char pad_0x76c[0x5e4];
    char field_0xd50; /* +0xd50 */
    unsigned char pad_0xd51[0x3];
    undefined4 field_0xd54; /* +0xd54 */
    undefined4 field_0xd58; /* +0xd58 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;


void FUN_002baca8(fn_002baca8_arg0 *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if ((param_1->field_0x754 & 1) == 0) {
    param_1->field_0x754 = param_1->field_0x754 | 5;
    if (param_4 != 0) {
      param_1->field_0xd50 = (char)param_4;
    }
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    temp_v3 = param_2[3];
    temp_v4 = param_2[4];
    param_1->field_0xd54 = param_3;
    param_1->field_0xd58 = 0;
    param_1->field_0x758 = temp_v0;
    param_1->field_0x75c = temp_v1;
    param_1->field_0x760 = temp_v2;
    param_1->field_0x764 = temp_v3;
    param_1->field_0x768 = temp_v4;
  }
  return;
}
