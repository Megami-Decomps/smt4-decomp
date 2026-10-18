/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e850` (_code @ 0x14e850, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

/* Supplied declaration required: FUN_002adba8. */


void FUN_0014e850(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0 [17];
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_24;
  unsigned int temp_v5;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v3 = param_4 >> 3;
  temp_v0[0] = 0;
  temp_v0[1] = 0;
  temp_v0[2] = 0;
  temp_v0[3] = 0;
  temp_v0[4] = 0;
  temp_v0[5] = 0;
  temp_v0[6] = 0;
  temp_v0[7] = 0;
  temp_v0[8] = 0;
  temp_v0[9] = 0;
  temp_v0[10] = 0;
  temp_v0[0xb] = 0;
  temp_v0[0xc] = 0x20;
  temp_v0[0xd] = 0;
  temp_v2 = 0;
  temp_v0[0xe] = 0;
  temp_v0[0xf] = 0x809f0081;
  temp_v4 = 0;
  uStack_24 = 0;
  temp_v7 = 0xf008e;
  temp_v5 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  temp_v0[0x10] = param_2 | (param_1 << 0x10);
  temp_v1 = temp_v0[param_3] | 0x2200;
  temp_v6 = param_3;
  FUN_002adba8(temp_v0 + 0xe,0x38,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}
