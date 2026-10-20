/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290274` (_code @ 0x290274, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184518(...);
int FUN_001846d0(...);
int FUN_00184758(...);
int FUN_00184b80(...);

/* Supplied declaration required: FUN_00184518. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184b80. */
extern int FUN_00291e14(void);


void FUN_00290274(int param_1,int param_2,unsigned char param_3,unsigned char param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(int *)(param_1 + 0x3fc) = param_2;
  *(unsigned char *)(param_1 + 0x402) = 1;
  *(unsigned char *)(param_1 + 0x400) = param_4;
  *(unsigned char *)(param_1 + 0x401) = param_3;
  *(char *)(param_1 + 0x403) = (char)param_5;
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_00184b80(param_1 + 0x20,0x2a);
      FUN_001846d0(param_1 + 0x20,0);
      FUN_00184518(param_1 + 0x1c4,8);
      FUN_001846d0(param_1 + 0x1c4,0);
      FUN_00184518(param_1 + 0x138,3);
      FUN_001846d0(param_1 + 0x138,2);
      FUN_00184518(param_1 + 0xac,1);
      FUN_001846d0(param_1 + 0xac,1);
      FUN_00184b80(param_1 + 0x2dc,10);
      FUN_00184758(param_1 + 0x2dc,2,0);
    }
  }
  else {
    temp_v0 = FUN_00291e14();
    if (temp_v0 != 0) {
      FUN_00184b80(param_1 + 0x20,0x29);
      FUN_001846d0(param_1 + 0x20,0);
      FUN_00184518(param_1 + 0x1c4,9);
      FUN_001846d0(param_1 + 0x1c4,0);
      FUN_00184518(param_1 + 0x138,6);
      FUN_001846d0(param_1 + 0x138,2);
      FUN_00184518(param_1 + 0xac,5);
      FUN_001846d0(param_1 + 0xac,1);
      FUN_00184b80(param_1 + 0x2dc,0xa6);
      FUN_00184758(param_1 + 0x2dc,2,0);
    }
    else {
      FUN_00184b80(param_1 + 0x20,0x29);
      FUN_001846d0(param_1 + 0x20,0);
      FUN_00184518(param_1 + 0x1c4,7);
      FUN_001846d0(param_1 + 0x1c4,0);
      FUN_00184518(param_1 + 0x138,2);
      FUN_001846d0(param_1 + 0x138,2);
      FUN_00184518(param_1 + 0xac,0);
      FUN_001846d0(param_1 + 0xac,1);
      FUN_00184b80(param_1 + 0x2dc,9);
      FUN_00184758(param_1 + 0x2dc,2,0);
    }
  }
  if (param_5 == 0) {
    *(unsigned int *)(param_1 + 0x3f4) = 0;
    *(unsigned int *)(param_1 + 0x3f8) = 2;
    return;
  }
  FUN_001846d0(param_1 + 0x368,4);
  *(unsigned int *)(param_1 + 0x404) = 10;
  *(unsigned int *)(param_1 + 0x3f4) = 0;
  *(unsigned int *)(param_1 + 0x3f8) = 4;
  return;
}

} /* extern "C" */
