/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c8f0` (_code @ 0x25c8f0, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0025c8f0_arg0 fn_0025c8f0_arg0;
struct fn_0025c8f0_arg0 {
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

extern unsigned int DAT_004ea91c; /* 0x4ea91c */
extern unsigned int DAT_004ea920; /* 0x4ea920 */
extern unsigned int DAT_004ea924; /* 0x4ea924 */
extern unsigned int DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_002075d0. */
/* Supplied declaration required: FUN_0024c418. */
/* Supplied declaration required: FUN_0028836c. */
/* Supplied declaration required: FUN_002a2c00. */
/* Supplied declaration required: FUN_003f6b88. */


void FUN_0025c8f0(fn_0025c8f0_arg0 *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [24];
  
  if ((param_1->field_0x68 & 0x60) != 0) {
    FUN_002075d0(param_2,temp_v3);
    if ((param_1->field_0x68 & 0x40) == 0) {
      FUN_0028836c();
    }
    FUN_0024c418();
    FUN_003f6b88();
    if ((param_1->field_0x68 & 0x40) != 0) {
      DAT_004ea92c = DAT_004ea91c;
      DAT_004ea930 = DAT_004ea920;
      DAT_004ea934 = DAT_004ea924;
      DAT_004ea938 = DAT_004ea928;
      DAT_004ea91c = param_1->field_0x50;
      DAT_004ea920 = param_1->field_0x54;
      DAT_004ea924 = param_1->field_0x58;
      DAT_004ea928 = param_1->field_0x5c;
      FUN_002a2c00();
    }
    temp_v2 = DAT_004ea924;
    temp_v1 = DAT_004ea920;
    temp_v0 = DAT_004ea91c;
    param_3[3] = DAT_004ea928;
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
