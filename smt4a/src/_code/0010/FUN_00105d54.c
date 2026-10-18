/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105d54` (_code @ 0x105d54, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ec674(unsigned char *);
/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002ecbdc. */


void FUN_00105d54(int param_1,int param_2,char param_3,char param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned char temp_v1 [24];
  unsigned char temp_v2 [28];
  
  FUN_002ec728(param_1 + 0x20);
  FUN_002ecbdc(temp_v1,param_2);
  temp_v0 = FUN_002ec674(temp_v1);
  pcVar2 = (char *)(temp_v0 + ((unsigned int)(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) >> 1));
  *pcVar2 = *pcVar2 + param_3;
  FUN_002ecbdc(temp_v2,param_2);
  temp_v0 = FUN_002ec674(temp_v2);
  pcVar2 = (char *)(temp_v0 + ((unsigned int)(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) >> 1));
  *pcVar2 = *pcVar2 + param_4;
  FUN_002ecb04(**(unsigned int **)(param_1 + 4),temp_v1);
  FUN_002ecb04(**(unsigned int **)(param_1 + 0x10),temp_v2);
  *(unsigned char *)(param_1 + 0x68) = 1;
  FUN_002ec890(temp_v2);
  FUN_002ec890(temp_v1);
  return;
}
