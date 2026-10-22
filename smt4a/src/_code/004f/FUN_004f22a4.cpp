/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f22a4` (_code @ 0x4f22a4, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004f159c(...);
int VectorSignedToFloat(...);

typedef struct fn_004f22a4_arg0 fn_004f22a4_arg0;
struct fn_004f22a4_arg0 {
    unsigned char pad_0x0[0x608];
    undefined4 field_0x608; /* +0x608 */
    undefined4 field_0x60c; /* +0x60c */
    undefined4 field_0x610; /* +0x610 */
    unsigned char pad_0x614[0x38];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0xe8];
    undefined4 field_0x738; /* +0x738 */
    undefined4 field_0x73c; /* +0x73c */
    undefined4 field_0x740; /* +0x740 */
    unsigned char pad_0x744[0xc];
    undefined4 field_0x750; /* +0x750 */
    undefined4 field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    unsigned char pad_0x75c[0x24];
    unsigned char field_0x780; /* +0x780 */
    unsigned char pad_0x781[0x3];
    undefined4 field_0x784; /* +0x784 */
    undefined4 field_0x788; /* +0x788 */
    int field_0x78c; /* +0x78c */
    undefined4 field_0x790; /* +0x790 */
    unsigned char pad_0x794[0x54];
    undefined4 field_0x7e8; /* +0x7e8 */
    unsigned char pad_0x7ec[0x4];
    undefined4 field_0x7f0; /* +0x7f0 */
    float field_0x7f4; /* +0x7f4 */
    unsigned char pad_0x7f8[0x4];
    float field_0x7fc; /* +0x7fc */
};

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_3_stack;

extern unsigned int g_cameraAlternateProgressStart; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_004f159c. */


void FUN_004f22a4(fn_004f22a4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float temp_v1 [3];
  unsigned char temp_v2 [16];
  fn_004f22a4_arg0 *pfStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  *(unsigned int *)&param_1->field_0x780 = param_2;
  param_1->field_0x784 = 0;
  param_1->field_0x788 = param_3;
  param_1->field_0x78c = (int)in_s0;
  param_1->field_0x64c = param_1->field_0x64c | 0x10000;
  param_1->field_0x608 = param_1->field_0x738;
  param_1->field_0x60c = param_1->field_0x73c;
  param_1->field_0x610 = param_1->field_0x740;
  g_cameraAlternateProgressStart = param_1->field_0x750;
  DAT_005e1534 = param_1->field_0x754;
  DAT_005e1538 = param_1->field_0x758;
  temp_v1[1] = 0.0f;
  temp_v0 = (float)VectorSignedToFloat(param_1->field_0x78c,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1[0] = param_1->field_0x7f4 + temp_v0 * 0.5f;
  temp_v1[2] = (float)VectorSignedToFloat(param_1->field_0x790,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1[2] = param_1->field_0x7fc + temp_v1[2];
  pfStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_004f159c(param_1,temp_v2,temp_v1);
  return;
}

} /* extern "C" */
