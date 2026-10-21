/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120fc0` (_code @ 0x120fc0, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106c88(int);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineStringDestroy(unsigned char [8]);
int onlineStringAssign(int, unsigned int);

extern unsigned char LAB_0012104c; /* 0x12104c */

/* Supplied declaration required: FUN_00106c88. */
extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringAssign. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned char *);
extern int FUN_002eb5f4(void);


void FUN_00120fc0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [8];
  
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_00106c88(*(int *)(param_1 + 4) + 0x10);
  *(unsigned int *)(*(int *)(param_1 + 4) + 0x44) = 0xffffffff;
  *(unsigned int *)(*(int *)(param_1 + 4) + 0x40) = 0xffffffff;
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002eb5f4();
    if (*(int *)(temp_v0 + 0xd0) != 0) {
      temp_v0 = FUN_002eb5f4();
      temp_v0 = *(int *)(temp_v0 + 0xd0);
      temp_v1 = FUN_002ea100(temp_v3,&LAB_0012104c);
      onlineStringAssign(temp_v0 + 0x110,temp_v1);
      onlineStringDestroy(temp_v3);
      temp_v0 = FUN_002eb5f4();
      *(unsigned short *)(*(int *)(temp_v0 + 0xd0) + 0x118) = 0;
    }
    temp_v0 = FUN_002eb5f4();
    if (temp_v0 != -0xd4) {
      temp_v0 = FUN_002eb5f4();
      *(unsigned int *)(*(int *)(temp_v0 + 0xe4) + 8) = 0;
    }
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
