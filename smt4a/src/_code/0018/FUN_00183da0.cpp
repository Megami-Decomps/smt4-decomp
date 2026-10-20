/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183da0` (_code @ 0x183da0, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4120(unsigned int *, int);

/* stack frame of param_7: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp88; /* 0x88: local_88 */
} param_7_stack;

/* Supplied declaration required: FUN_001b4120. */


void FUN_00183da0(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,int param_6,
                 int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [17];
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_34;
  unsigned int temp_v5;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  int temp_v6;
  unsigned int temp_v7;
  
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
  temp_v0[0xe] = 0;
  temp_v0[0xf] = 0x809f0081;
  temp_v2 = 0;
  temp_v4 = 0;
  uStack_34 = 0;
  temp_v7 = 0xf008e;
  temp_v5 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  temp_v0[0x10] = param_2 | (param_1 << 0x10);
  temp_v1 = (param_5 << 0xc) | (param_5 << 8) | (param_6 << 2) | (param_7 << 1) | temp_v0[param_3]
  ;
  temp_v3 = param_4 >> 3;
  temp_v6 = param_3;
  FUN_001b4120(temp_v0 + 0xe,0x38);
  return;
}

} /* extern "C" */
