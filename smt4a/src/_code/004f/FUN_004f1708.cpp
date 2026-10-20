/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1708` (_code @ 0x4f1708, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4dd4(unsigned int, unsigned int, unsigned int);

typedef struct fn_004f1708_arg0 fn_004f1708_arg0;
struct fn_004f1708_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x5ff];
    float field_0x608; /* +0x608 */
    float field_0x60c; /* +0x60c */
    float field_0x610; /* +0x610 */
    unsigned char pad_0x614[0x13c];
    float field_0x750; /* +0x750 */
    float field_0x754; /* +0x754 */
    float field_0x758; /* +0x758 */
    unsigned char pad_0x75c[0xc];
    float field_0x768; /* +0x768 */
    float field_0x76c; /* +0x76c */
    float field_0x770; /* +0x770 */
    float field_0x774; /* +0x774 */
    float field_0x778; /* +0x778 */
    float field_0x77c; /* +0x77c */
};

extern float DAT_005e1530; /* 0x5e1530 */
extern float DAT_005e1534; /* 0x5e1534 */
extern float DAT_005e1538; /* 0x5e1538 */

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f1708(fn_004f1708_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  FUN_003d4dd4(*(unsigned int *)&param_1[1].field_0x8,*(unsigned int *)(param_1 + 1),
               *(unsigned int *)&param_1[1].field_0x4);
  temp_v1 = param_1->field_0x77c - DAT_005e1538;
  temp_v0 = param_1->field_0x778 - DAT_005e1534;
  param_1->field_0x750 = DAT_005e1530 + (param_1->field_0x774 - DAT_005e1530) * in_s0;
  param_1->field_0x754 = DAT_005e1534 + temp_v0 * in_s0;
  param_1->field_0x758 = DAT_005e1538 + temp_v1 * in_s0;
  param_1->field_0x750 =
       param_1->field_0x750 - (param_1->field_0x768 - param_1->field_0x608) * in_s0;
  param_1->field_0x754 =
       param_1->field_0x754 - (param_1->field_0x76c - param_1->field_0x60c) * in_s0;
  param_1->field_0x758 =
       param_1->field_0x758 - (param_1->field_0x770 - param_1->field_0x610) * in_s0;
  return;
}

} /* extern "C" */
