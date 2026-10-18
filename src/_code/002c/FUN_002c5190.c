/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5190` (_code @ 0x2c5190, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bbd58. */
/* Supplied declaration required: FUN_002bbdac. */
extern int FUN_002c540c(void);


void FUN_002c5190(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v0 = FUN_002c540c();
  if (temp_v0 == 1) {
    temp_v0 = *(int *)(param_1 + 0x528);
    if (temp_v0 == 0) {
      temp_v2 = param_2 + 0x248;
      temp_v1 = param_2 + 0x208;
      FUN_002bbdac(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbd58(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
    if (temp_v0 == 1) {
      temp_v2 = param_2 + 0x2f8;
      temp_v1 = param_2 + 0x2b8;
      FUN_002bbdac(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbd58(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
    if (temp_v0 != 2) {
      FUN_002bbdac(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbd58(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
  }
  temp_v2 = param_2 + 0xa8;
  temp_v1 = param_2 + 0x68;
  FUN_002bbdac(param_1,temp_v2,temp_v1,param_1 + 0x530);
  FUN_002bbd58(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
  *(int *)(param_1 + 0x6f8) = param_2;
  *(unsigned char *)(param_1 + 0x5f4) = 5;
  return;
}
