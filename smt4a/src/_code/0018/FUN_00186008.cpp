/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186008` (_code @ 0x186008, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(int *, unsigned char *, int);
int FUN_00180310(unsigned int, unsigned int, unsigned int, int, int, int, int *);

/* stack frame of param_4: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_001860c4; /* 0x1860c4 */
extern unsigned char LAB_001860c8; /* 0x1860c8 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00180310. */


void FUN_00186008(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  
  temp_v1 = -1 < param_4;
  if (param_4 != 0) {
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v4 = 0;
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    if (!temp_v1) {
      temp_v0 = 7;
      param_4 = -param_4;
    }
    else {
      temp_v0 = 8;
    }
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    if (!temp_v1) {
      textFormatBuffer(&temp_v2,&LAB_001860c4,param_4);
    }
    else {
      textFormatBuffer(&temp_v2,&LAB_001860c8,param_4);
    }
    FUN_00180310(temp_v0,param_1,param_2,0,1,param_3 + 1,&temp_v2);
  }
  return;
}

} /* extern "C" */
