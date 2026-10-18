/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad5ec` (_code @ 0x1ad5ec, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ad5ec_arg0 fn_001ad5ec_arg0;
struct fn_001ad5ec_arg0 {
    unsigned char pad_0x0[0x50];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    uint field_0x68; /* +0x68 */
};

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_006472dc; /* 0x6472dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

/* Supplied declaration required: FUN_001b4abc. */
/* Supplied declaration required: FUN_001b640c. */
/* Supplied declaration required: FUN_001bbde0. */
/* Supplied declaration required: FUN_001bc2f0. */
/* Supplied declaration required: FUN_001bc3e4. */


void FUN_001ad5ec(fn_001ad5ec_arg0 *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [24];
  
  if ((param_1->field_0x68 & 0x60) != 0) {
    FUN_001b4abc(param_2,temp_v3);
    if ((param_1->field_0x68 & 0x40) == 0) {
      FUN_001bbde0();
    }
    FUN_001b640c();
    FUN_001bc2f0();
    if ((param_1->field_0x68 & 0x40) != 0) {
      DAT_006472ec = DAT_006472dc;
      DAT_006472f0 = DAT_006472e0;
      DAT_006472f4 = DAT_006472e4;
      DAT_006472f8 = DAT_006472e8;
      DAT_006472dc = param_1->field_0x50;
      DAT_006472e0 = param_1->field_0x54;
      DAT_006472e4 = param_1->field_0x58;
      DAT_006472e8 = param_1->field_0x5c;
      FUN_001bc3e4();
    }
    temp_v2 = DAT_006472e4;
    temp_v1 = DAT_006472e0;
    temp_v0 = DAT_006472dc;
    param_3[3] = DAT_006472e8;
    *param_3 = temp_v0;
    param_3[1] = temp_v1;
    param_3[2] = temp_v2;
    return;
  }
  temp_v0 = param_1->field_0x54;
  temp_v1 = param_1->field_0x58;
  temp_v2 = param_1->field_0x5c;
  *param_3 = param_1->field_0x50;
  param_3[1] = temp_v0;
  param_3[2] = temp_v1;
  param_3[3] = temp_v2;
  return;
}
