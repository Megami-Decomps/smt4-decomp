/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032accc` (_code @ 0x32accc, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(unsigned long long *, int, int);
int FUN_002b7dc4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long long, unsigned long long);
int FUN_002b81e4(void);
int FUN_002c1b64(int, unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002b7dc4. */
/* Supplied declaration required: FUN_002b81e4. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5210(void);


void FUN_0032accc(void)

{
/* irregular: irregular input(s): in_d8, in_d9, in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned long long in_d8;
  unsigned long long in_d9;
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  temp_v0 = FUN_002c5210();
  if (temp_v0 != 1) {
    return;
  }
  if (*(int *)(g_titleScene + 0x528) != 0) {
    if (*(int *)(g_titleScene + 0x528) != 1) {
      return;
    }
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  if (*(int *)(temp_v0 * 4 + 0x4c3a60) == 0) {
    return;
  }
  FUN_002c1b64(g_titleScene,*(unsigned int *)(temp_v0 * 0x20 + 0x4c3aa0));
  temp_v0 = *(int *)(temp_v0 * 0x20 + 0x4c3aa0);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b81e4();
  FUN_002b7dc4(0xffffffff,0xffffffff,0xffffffff,0xffffffff,in_d8,in_d9);
  uStack_20 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_002adba8(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
