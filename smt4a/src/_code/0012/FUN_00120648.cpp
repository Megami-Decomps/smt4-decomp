/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120648` (_code @ 0x120648, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4aSERKS_(int, int, unsigned int, unsigned int, unsigned int);
int FUN_003039f4(int, int);
int FUN_00303a22(int, int);
int FUN_00303a2e(void);

/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: FUN_003039f4. */
/* Supplied declaration required: FUN_00303a22. */
/* Supplied declaration required: FUN_00303a2e. */


int FUN_00120648(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  _ZN9Obj55aff4aSERKS_(param_1 + 0xc,param_2 + 0xc,param_3,param_4,param_4);
  FUN_00303a22(param_1 + 0x14,param_2 + 0x14);
  FUN_00303a22(param_1 + 0x28,param_2 + 0x28);
  *(unsigned short *)(param_1 + 0x3c) = *(unsigned short *)(param_2 + 0x3c);
  FUN_003039f4(param_1 + 0x40,param_2 + 0x40);
  FUN_00303a2e();
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned short *)(param_1 + 0x70) = *(unsigned short *)(param_2 + 0x70);
  *(unsigned char *)(param_1 + 0x72) = *(unsigned char *)(param_2 + 0x72);
  return param_1;
}

} /* extern "C" */
