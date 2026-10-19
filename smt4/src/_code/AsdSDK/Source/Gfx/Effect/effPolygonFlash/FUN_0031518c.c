/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031518c` (_code @ 0x31518c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00268fc4. */
/* Supplied declaration required: FUN_002c32a0. */


int * FUN_0031518c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *param_1;
  temp_v3 = param_1[1];
  piVar1 = (int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,*(int *)(temp_v3 + 0x38) * 0x28 + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v2 = *(int *)(temp_v2 + 4);
  FUN_00268fc4();
  piVar1[1] = temp_v2;
  temp_v1 = *(unsigned int *)(temp_v3 + 0x38);
  if (temp_v1 != 0) {
    temp_v0 = 0;
    puVar2 = *(unsigned int **)(*(int *)(temp_v2 + 8) + 0x3c);
    do {
      if ((temp_v0 & 1) != 0) {
        *puVar2 = 0x3f000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0x3f000000;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 0;
      }
      else {
        *puVar2 = 0x3f800000;
        puVar2[1] = 0;
        puVar2[2] = 0x3f000000;
        puVar2[3] = 0;
        puVar2[4] = 0x3f800000;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 0x3f000000;
      }
      puVar2[7] = 0x3f800000;
      temp_v0 = temp_v0 + 1;
      puVar2 = puVar2 + 8;
    } while (temp_v0 < temp_v1);
  }
  return piVar1;
}
