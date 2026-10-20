/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0160` (_code @ 0x3d0160, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(int *, int, int, unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp380; /* 0x380: local_380 */
} param_2_stack;

extern unsigned char LAB_0032ad24; /* 0x32ad24 */

extern int btlUnitGet(int *);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_003d0160(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  short *psVar4;
  unsigned int *puVar5;
  int temp_v2;
  int aiStack_388 [220];
  
  temp_v2 = 0x6d;
  puVar1 = *(unsigned int **)(*param_1 + 0x1fc0);
  psVar4 = (short *)((int)puVar1 + 0x6e);
  puVar5 = puVar1 + 0x6d;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0;
    if ((*puVar1 & 0x400) != 0) {
      temp_v1 = temp_v0 + 1;
      aiStack_388[temp_v0 * 2 + 2] = (int)*psVar4;
      aiStack_388[temp_v0 * 2 + 3] = (int)(short)*puVar5;
    }
    temp_v2 = temp_v2 - 1;
    puVar1 = puVar1 + 0xa2;
    psVar4 = psVar4 + 0x144;
    puVar5 = puVar5 + 0xa2;
    temp_v0 = temp_v1;
  } while (temp_v2 != 0);
  if (temp_v1 >= param_2) {
    FUN_002b7bca(aiStack_388 + 2,temp_v1,8,&LAB_0032ad24);
    temp_v0 = btlUnitGet(param_1);
    aiStack_388[2] = aiStack_388[param_2 * 2];
  }
  else {
    temp_v0 = btlUnitGet(param_1);
  }
  *(unsigned char *)(aiStack_388[2] + temp_v0 + 0x38) = 1;
  return;
}

} /* extern "C" */
