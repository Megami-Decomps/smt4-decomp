/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038af80` (_code @ 0x38af80, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0038af80_arg0 fn_0038af80_arg0;
struct fn_0038af80_arg0 {
    unsigned char pad_0x0[0x50];
    unsigned char field_0x50; /* +0x50 */
    unsigned char pad_0x51[0x3];
    short field_0x54; /* +0x54 */
    short field_0x56; /* +0x56 */
    short field_0x58; /* +0x58 */
    unsigned char pad_0x5a[0xa];
    byte field_0x64; /* +0x64 */
};

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_00290c38. */


void FUN_0038af80(fn_0038af80_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (int)param_1->field_0x58;
  temp_v1 = (int)param_1->field_0x54;
  temp_v2 = (int)param_1->field_0x56;
  if (param_1->field_0x64 == 0) {
    temp_v0 = -1;
    temp_v1 = -1;
    temp_v2 = -1;
  }
  FUN_00290c38(*(unsigned int *)&param_1->field_0x50,0,0,0x3a,0x4b,0x4c,0x4d,0x47,0x49,0x48,0x4a,temp_v0
               ,temp_v1,temp_v2,param_2,0);
  return;
}
