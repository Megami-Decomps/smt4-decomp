/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d150` (_code @ 0x23d150, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(int, int, unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_00344cd0(unsigned int, unsigned int, unsigned int, int, int, unsigned int, unsigned int, int, int, unsigned int, int, int, int, int, int, int);

/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00344cd0. */


void FUN_0023d150(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  if (param_4 != 0) {
    temp_v3 = 0x41c;
    temp_v4 = 0x41d;
    temp_v5 = 0x41e;
    temp_v6 = 0x419;
    temp_v2 = 0x5d3;
  }
  else {
    temp_v3 = 0x423;
    temp_v6 = 0x420;
    temp_v4 = 0x424;
    temp_v5 = 0x425;
    temp_v2 = 0x5d4;
  }
  temp_v1 = (int)*(short *)(DAT_0057f108 + 0x1b34);
  temp_v0 = *(short *)(DAT_0057f108 + 0x1b36);
  temp_v7 = (int)*(short *)(DAT_0057f108 + 0x1b38);
  FUN_001835b4(2,0x14,temp_v2,param_2,param_3,0x6f,temp_v1,temp_v7);
  FUN_00344cd0(param_1,param_2,param_3,0x14,temp_v3,temp_v4,temp_v5,temp_v3 - 4,temp_v3 - 2,temp_v6,temp_v3 - 1,
               temp_v1,(int)temp_v0,temp_v7,0x74,0);
  return;
}

} /* extern "C" */
