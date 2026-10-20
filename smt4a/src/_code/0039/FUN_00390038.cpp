/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390038` (_code @ 0x390038, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f8794(void);

typedef struct fn_00390038_arg0 fn_00390038_arg0;
struct fn_00390038_arg0 {
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

extern unsigned int *DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_00634c90; /* 0x634c90 */
extern unsigned int DAT_00634c94; /* 0x634c94 */
extern unsigned int DAT_00634c98; /* 0x634c98 */
extern unsigned int DAT_00634c9c; /* 0x634c9c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

/* Supplied declaration required: FUN_002f8794. */


void FUN_00390038(fn_00390038_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((param_1->field_0x68 & 0x18) != 0) {
    DAT_006472dc = (float)DAT_00634c90;
    DAT_006472e0 = (float)DAT_00634c94;
    DAT_006472e4 = (float)DAT_00634c98;
    DAT_006472e8 = (float)DAT_00634c9c;
    DAT_006472ec = *DAT_0059dbf4;
    DAT_006472f0 = DAT_0059dbf4[1];
    DAT_006472f4 = DAT_0059dbf4[2];
    DAT_006472f8 = DAT_0059dbf4[3];
    FUN_002f8794();
  }
  else {
    temp_v0 = param_1->field_0x40;
    fStack_34 = param_1->field_0x44;
    fStack_30 = param_1->field_0x48;
    fStack_2c = param_1->field_0x4c;
  }
  DAT_006472dc = temp_v0;
  DAT_006472e0 = fStack_34;
  DAT_006472e4 = fStack_30;
  DAT_006472e8 = fStack_2c;
  if ((param_1->field_0x68 & 0x80) != 0) {
    DAT_006472e8 = (float)DAT_0059dbf4[0x1d];
    DAT_006472dc = temp_v0 * DAT_006472e8;
    DAT_006472e0 = fStack_34 * DAT_006472e8;
    DAT_006472e4 = fStack_30 * DAT_006472e8;
    DAT_006472e8 = fStack_2c * DAT_006472e8;
  }
  DAT_006472ec = DAT_00634c90;
  DAT_006472f0 = DAT_00634c94;
  DAT_006472f4 = DAT_00634c98;
  DAT_006472f8 = DAT_00634c9c;
  FUN_002f8794();
  DAT_006472ec = *DAT_0059dbf4;
  DAT_006472f0 = DAT_0059dbf4[1];
  DAT_006472f4 = DAT_0059dbf4[2];
  DAT_006472f8 = DAT_0059dbf4[3];
  FUN_002f8794();
  if ((param_1->field_0x68 & 4) != 0) {
    DAT_006472e0 = 5.0f;
  }
  return;
}

} /* extern "C" */
