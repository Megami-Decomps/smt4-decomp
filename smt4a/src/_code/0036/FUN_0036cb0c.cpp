/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036cb0c` (_code @ 0x36cb0c, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001527d8(...);
int FUN_00164b5c(...);
int FUN_001654f8(...);
int efctSetSpeed(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0023723c(...);
int FUN_0025cc78(...);
int asdTextDrawDirectoryEntry(...);
int FUN_00344bc8(...);
int VectorSignedToFloat(...);

/* stack frame of param_9: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
extern int FUN_0032ecac(void);
/* Supplied declaration required: FUN_00344bc8. */
extern unsigned int FUN_0035aa90(int);


void FUN_0036cb0c(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  
  FUN_001834a4(0x2e,0xe0);
  temp_v0 = FUN_001834a4(0x2e,param_5 + 0xe6);
  FUN_00164b5c(2,0x2e,0x13,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x1f);
  FUN_001835b4(2,0x2e,0xdf,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x21);
  FUN_001835b4(2,0x2e,0xe0,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
  FUN_001835b4(2,0x2e,0xe1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
  FUN_001835b4(2,0x2e,0xe2,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
  FUN_001834a4(0x2e,0xe0);
  param_9 = param_9 % 0x28;
  if (param_9 >= 0x14) {
    param_9 = 0x28 - param_9;
  }
  VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
  efctSetSpeed(param_9);
  FUN_001835b4(2,0x2e,0xf9,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
  efctSetSpeed();
  if (param_6 != 0) {
    temp_v2 = 0x10d;
    do {
      FUN_001835b4(2,0x2e,temp_v2,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x110);
    efctSetSpeed();
    FUN_001835b4(2,0x2e,0x110,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0x22);
    efctSetSpeed();
  }
  temp_v2 = FUN_001834a4(0x2e,0xe4);
  param_4 = param_3 + param_5 + param_4;
  if (param_8 != 0) {
    if (param_8 != 1) {
      if (!(param_8 != 2 && param_8 != 3)) {
        asdTextDrawDirectoryEntry(param_1,3,0xffffffff,0,3,param_2,param_4);
      }
    }
    else {
      temp_v1 = FUN_0035aa90(param_4);
      FUN_001654f8(temp_v1,0);
      FUN_0023723c(param_1,3,0xffffffff,0,3,temp_v1);
    }
  }
  else {
    asdTextDrawDirectoryEntry(param_1,3,0xffffffff,0,3,param_2,param_4);
  }
  FUN_001835b4(2,0x2e,0xe3,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0xd);
  if (param_6 != 0) {
    FUN_001527d8(param_1,0xf5ff9fff);
  }
  else {
    FUN_001527d8(param_1,0x9fe7ffff);
  }
  FUN_0025cc78(param_1,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8),
               (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10),0x15);
  FUN_001527d8(param_1,0xffffffff);
  if (param_8 == 1) {
    FUN_00344bc8(param_4);
    temp_v2 = FUN_0032ecac();
    if (temp_v2 != 0) {
      temp_v2 = FUN_001834a4(0x14,0x597);
      FUN_00164b5c(2,0x14,7,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8),
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10),0xc);
    }
  }
  return;
}

} /* extern "C" */
