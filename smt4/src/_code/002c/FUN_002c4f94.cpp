/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4f94` (_code @ 0x2c4f94, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb74(unsigned int, int);
int FUN_002bbbc8(int, int, int, int);

/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */
extern int FUN_002c5210(void);


void FUN_002c4f94(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v0 = FUN_002c5210();
  if (temp_v0 == 1) {
    temp_v0 = *(int *)(param_1 + 0x528);
    if (temp_v0 == 0) {
      temp_v2 = param_2 + 0x248;
      temp_v1 = param_2 + 0x208;
      FUN_002bbbc8(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
    if (temp_v0 == 1) {
      temp_v2 = param_2 + 0x2f8;
      temp_v1 = param_2 + 0x2b8;
      FUN_002bbbc8(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
    if (temp_v0 != 2) {
      FUN_002bbbc8(param_1,temp_v2,temp_v1,param_1 + 0x530);
      FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
      *(int *)(param_1 + 0x6f8) = param_2;
      *(unsigned char *)(param_1 + 0x5f4) = 5;
      return;
    }
  }
  temp_v2 = param_2 + 0xa8;
  temp_v1 = param_2 + 0x68;
  FUN_002bbbc8(param_1,temp_v2,temp_v1,param_1 + 0x530);
  FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
  *(int *)(param_1 + 0x6f8) = param_2;
  *(unsigned char *)(param_1 + 0x5f4) = 5;
  return;
}

} /* extern "C" */
