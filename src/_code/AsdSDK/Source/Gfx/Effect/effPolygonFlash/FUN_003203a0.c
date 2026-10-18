/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003203a0` (_code @ 0x3203a0, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002691f0. */
extern int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


int * FUN_003203a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x3c);
  temp_v2 = *(int *)(param_1 + 0x40);
  piVar1 = (int *)FUN_002c34a4(0x10000,0x100,0,*(int *)(temp_v2 + 0x38) * 0x18 + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(temp_v2 + 0x70);
  if (temp_v0 < 2) {
    temp_v0 = 1;
  }
  *(unsigned int *)(temp_v2 + 0x70) = temp_v0;
  temp_v3 = *(int *)(temp_v3 + 4);
  FUN_002691f0();
  piVar1[1] = temp_v3;
  temp_v0 = *(unsigned int *)(temp_v2 + 0x38);
  if (temp_v0 != 0) {
    temp_v1 = 0;
    puVar2 = *(unsigned int **)(*(int *)(temp_v3 + 8) + 0x3c);
    do {
      if ((temp_v1 & 1) != 0) {
        *puVar2 = 0x3f000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0x3f000000;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 0;
        puVar2[7] = 0x3f800000;
      }
      else {
        *puVar2 = 0x3f800000;
        puVar2[1] = 0;
        puVar2[2] = 0x3f000000;
        puVar2[3] = 0;
        puVar2[4] = 0x3f800000;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 0x3f000000;
        puVar2[7] = 0x3f800000;
      }
      temp_v1 = temp_v1 + 1;
      puVar2 = puVar2 + 8;
    } while (temp_v1 < temp_v0);
  }
  return piVar1;
}
