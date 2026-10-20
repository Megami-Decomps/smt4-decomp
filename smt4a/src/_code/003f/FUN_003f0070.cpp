/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0070` (_code @ 0x3f0070, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f1b3c(unsigned int, unsigned int, int, int *, unsigned int [3]);
int FUN_0047f7ac(int, unsigned int);
int FUN_004fdc9c(int, int, int, int);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_0015688c(void);
extern int FUN_001633a0(unsigned int);
extern int FUN_00187168(void);
extern unsigned int FUN_0019acdc(short, unsigned int);
extern int FUN_003e48bc(void);
extern int FUN_003e4978(void);
extern int FUN_003e4cb4(int);
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_0047f7ac. */
/* Supplied declaration required: FUN_004fdc9c. */


void FUN_003f0070(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  short temp_v7 [12];
  unsigned int temp_v8 [3];
  
  temp_v0 = FUN_003e48bc();
  if (temp_v0 == 0) {
    return;
  }
  temp_v0 = FUN_003e4978();
  if (temp_v0 == 0) {
    return;
  }
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v0 = 0;
  temp_v5 = 0;
  temp_v7[2] = 0;
  temp_v7[3] = 0;
  temp_v7[4] = 0;
  temp_v7[5] = 0;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  temp_v7[9] = 0;
  temp_v7[10] = 0;
  temp_v7[0xb] = 0;
  do {
    temp_v1 = FUN_003e4d68(temp_v5 & 0xffff);
    temp_v2 = FUN_00187168();
    if ((temp_v2 != 0) && (temp_v2 = FUN_003e4cb4(temp_v1), temp_v2 == 0)) {
      psVar4 = temp_v7 + temp_v0;
      temp_v0 = temp_v0 + 1;
      *psVar4 = *(short *)(temp_v1 + 300);
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 0xc);
  if (temp_v0 == 0) {
    temp_v1 = FUN_0015688c();
    if (temp_v1 == 0) {
      temp_v4 = 0;
      if (temp_v4 != 0) {
        temp_v3 = FUN_0019acdc(temp_v4,1);
        FUN_003f1b3c(param_1,temp_v3,6,&temp_v6,temp_v8);
        FUN_0047f7ac(1,temp_v8[0]);
        FUN_004fdc9c(0,0,temp_v4,temp_v6);
      }
      return;
    }
    temp_v0 = 1;
    temp_v7[0] = *(unsigned short *)(temp_v1 + 300);
  }
  temp_v0 = FUN_001633a0((temp_v0 - 1U) & 0xffff);
  temp_v4 = temp_v7[temp_v0];
  if (temp_v4 != 0) {
    temp_v3 = FUN_0019acdc(temp_v4,1);
    FUN_003f1b3c(param_1,temp_v3,6,&temp_v6,temp_v8);
    FUN_0047f7ac(1,temp_v8[0]);
    FUN_004fdc9c(0,0,temp_v4,temp_v6);
  }
  return;
}

} /* extern "C" */
