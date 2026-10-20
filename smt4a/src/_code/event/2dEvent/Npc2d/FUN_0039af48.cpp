/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039af48` (_code @ 0x39af48, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int FUN_00283498(...);
int sysMemClear(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_002897cc(...); /* 0x2897cc */
extern int FUN_0034da3c(...); /* 0x34da3c */

/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_00409fe8(int, unsigned int);


void FUN_0039af48(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int in_s0;
  
  piVar1 = (int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xbc,1);
  sysMemClear();
  piVar1[8] = 0x3f800000;
  piVar1[9] = 0;
  piVar1[10] = 0x3e800000;
  piVar1[1] = 0x1f;
  piVar1[5] = param_4 - 0xd;
  piVar1[4] = param_3;
  piVar1[2] = param_2;
  *(unsigned char *)(piVar1 + 0xc) = 0;
  piVar1[0xd] = in_s0;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  piVar1[0x21] = 0;
  temp_v0 = param_1;
  FUN_00283498();
  piVar1[0x14] = -(unsigned int)*(unsigned short *)(temp_v0 + 0x22);
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    temp_v0 = FUN_00409fe8(piVar1[0x14],1);
    piVar1[0x13] = temp_v0;
    piVar1[3] = 2;
  }
  if (param_3 < -99) {
    temp_v0 = 0x11;
  }
  *piVar1 = param_1;
  if (-100 < param_3) {
    if (param_3 < -0x3b) {
      temp_v0 = 3;
    }
    else if (param_3 >= 100) {
      temp_v0 = 0x12;
    }
    else if (param_3 >= 0x28) {
      temp_v0 = 4;
    }
    else if (param_3 < 0) {
      temp_v0 = 0x13;
    }
    else {
      temp_v0 = 5;
    }
  }
  piVar1[0xf] = temp_v0;
  piVar1[6] = 0x3ea8f5c3;
  asdProcessCreateSimple("EVE_2dTex",4,0,0,FUN_002897cc,FUN_0034da3c,piVar1);
  return;
}

} /* extern "C" */
