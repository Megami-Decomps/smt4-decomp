/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249824` (_code @ 0x249824, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00249824_arg0 fn_00249824_arg0;
struct fn_00249824_arg0 {
    unsigned char pad_0x0[0x40];
    float field_0x40; /* +0x40 */
    float field_0x44; /* +0x44 */
    float field_0x48; /* +0x48 */
    float field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x18];
    uint field_0x68; /* +0x68 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int *DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_004d8c10; /* 0x4d8c10 */
extern unsigned int DAT_004d8c14; /* 0x4d8c14 */
extern unsigned int DAT_004d8c18; /* 0x4d8c18 */
extern unsigned int DAT_004d8c1c; /* 0x4d8c1c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_002497d0. */


void FUN_00249824(fn_00249824_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((param_1->field_0x68 & 0x18) != 0) {
    DAT_004ea91c = (float)DAT_004d8c10;
    DAT_004ea920 = (float)DAT_004d8c14;
    DAT_004ea924 = (float)DAT_004d8c18;
    DAT_004ea928 = (float)DAT_004d8c1c;
    DAT_004ea92c = *DAT_0044ea94;
    DAT_004ea930 = DAT_0044ea94[1];
    DAT_004ea934 = DAT_0044ea94[2];
    DAT_004ea938 = DAT_0044ea94[3];
    FUN_002497d0();
  }
  else {
    temp_v0 = param_1->field_0x40;
    fStack_34 = param_1->field_0x44;
    fStack_30 = param_1->field_0x48;
    fStack_2c = param_1->field_0x4c;
  }
  DAT_004ea91c = temp_v0;
  DAT_004ea920 = fStack_34;
  DAT_004ea924 = fStack_30;
  DAT_004ea928 = fStack_2c;
  if ((param_1->field_0x68 & 0x80) != 0) {
    DAT_004ea928 = (float)DAT_0044ea94[0x1d];
    DAT_004ea91c = temp_v0 * DAT_004ea928;
    DAT_004ea920 = fStack_34 * DAT_004ea928;
    DAT_004ea924 = fStack_30 * DAT_004ea928;
    DAT_004ea928 = fStack_2c * DAT_004ea928;
  }
  DAT_004ea92c = DAT_004d8c10;
  DAT_004ea930 = DAT_004d8c14;
  DAT_004ea934 = DAT_004d8c18;
  DAT_004ea938 = DAT_004d8c1c;
  FUN_002497d0();
  DAT_004ea92c = *DAT_0044ea94;
  DAT_004ea930 = DAT_0044ea94[1];
  DAT_004ea934 = DAT_0044ea94[2];
  DAT_004ea938 = DAT_0044ea94[3];
  FUN_002497d0();
  if ((param_1->field_0x68 & 4) != 0) {
    DAT_004ea920 = 5.0f;
  }
  return;
}
