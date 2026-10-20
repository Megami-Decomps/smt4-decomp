/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7814` (_code @ 0x4a7814, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [44], unsigned char *, int);
int FUN_0018349c(int, int);
int FUN_00493408(int, int, int, int, int, int, int, int, unsigned char [44]);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

extern unsigned char LAB_004a794c; /* 0x4a794c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: FUN_00493408. */


void FUN_004a7814(int param_1,int param_2,int param_3,int param_4,unsigned long long param_5)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [44];
  
  if (param_4 != 0) {
    if (param_2 >= 100) {
      temp_v4 = FUN_0018349c(param_1 + 200,param_3 + 0x42f);
      temp_v5 = FUN_0018349c(param_1 + 200,0x5c8);
    }
    else {
      temp_v4 = FUN_0018349c(param_1 + 200,param_3 + 0x42f);
      temp_v5 = FUN_0018349c(param_1 + 200,0x497);
    }
  }
  else if (param_2 >= 100) {
    temp_v4 = FUN_0018349c(param_1 + 200,param_3 + 0x40e);
    temp_v5 = FUN_0018349c(param_1 + 200,0x5c5);
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 200,param_3 + 0x40e);
    temp_v5 = FUN_0018349c(param_1 + 200,0x489);
  }
  temp_v0 = *(short *)(temp_v5 + 8);
  temp_v1 = *(short *)(temp_v4 + 8);
  temp_v2 = *(short *)(temp_v4 + 10);
  temp_v3 = *(short *)(temp_v5 + 10);
  FUN_00100388(temp_v6,&LAB_004a794c,param_2);
  FUN_00493408(param_1 + 200,0,(int)temp_v1 + (int)temp_v0,(int)temp_v2 + (int)temp_v3,0,7,
               (int)((unsigned long long)param_5 >> 0x20),(int)param_5,temp_v6);
  return;
}

} /* extern "C" */
