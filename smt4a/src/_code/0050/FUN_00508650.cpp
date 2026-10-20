/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508650` (_code @ 0x508650, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(int, int);

extern int wstrlen(int);
/* Supplied declaration required: libc_strcmp. */


void FUN_00508650(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v3;
  
  if (param_2 >= 2) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5 = (unsigned int *)(*(int *)(param_1 + param_2 * 8 + 4) + param_1);
  }
  temp_v3 = 0;
  if (*puVar5 < puVar5[1]) {
    puVar4 = puVar5 + *puVar5 * 5 + 2;
    temp_v1 = wstrlen(param_3);
    temp_v0 = (unsigned short)*puVar4;
    while ((temp_v0 & 1) == 0) {
      temp_v2 = (unsigned int)(*(unsigned short *)((int)puVar4 + 2) >> 3);
      if (((int)temp_v2 < temp_v1) &&
         (((int)*(char *)(param_3 + temp_v2) &
          (1 << ((7 - (*(unsigned short *)((int)puVar4 + 2) & 7)) & 0xff))) != 0)) {
        temp_v2 = puVar4[2];
      }
      else {
        temp_v2 = puVar4[1];
      }
      puVar4 = puVar5 + temp_v2 * 5 + 2;
      temp_v0 = (unsigned short)*puVar4;
    }
    if (puVar4 + 3 != (unsigned int *)0x0) {
      temp_v2 = puVar4[3];
      if ((temp_v2 != 0xffffffff) && (param_1 = *(int *)(param_1 + 4) + param_1, param_1 != 0)) {
        temp_v3 = param_1 + *(int *)(param_1 + temp_v2 * 0xc + 8);
      }
      libc_strcmp(param_3,temp_v3);
    }
  }
  return;
}

} /* extern "C" */
