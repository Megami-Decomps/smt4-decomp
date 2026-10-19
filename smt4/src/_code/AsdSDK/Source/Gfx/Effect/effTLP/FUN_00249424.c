/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249424` (_code @ 0x249424, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int FUN_0028c814(void);
/* Supplied declaration required: FUN_0028c854. */
extern int FUN_0028c904(unsigned int *);
/* Supplied declaration required: FUN_002c32a0. */


unsigned int * FUN_00249424(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar4;
  int *piVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int temp_v6;
  unsigned int *puVar13;
  
  temp_v6 = param_1[1];
  puVar1 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v6 * 0x14 + 0x28,0x10,1);
  temp_v5 = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  puVar1[9] = (unsigned int)puVar1;
  puVar1[4] = (unsigned int)(puVar1 + 10);
  puVar1[5] = (unsigned int)(puVar1 + 10 + temp_v6 * 4);
  puVar10 = param_1 + 4;
  puVar11 = puVar10 + temp_v6 * 4;
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  if (temp_v6 != 0) {
    do {
      temp_v1 = puVar10[1];
      temp_v2 = puVar10[2];
      temp_v3 = puVar10[3];
      puVar13 = (unsigned int *)(puVar1[4] + temp_v5 * 0x10);
      *puVar13 = *puVar10;
      puVar13[1] = temp_v1;
      puVar13[2] = temp_v2;
      puVar13[3] = temp_v3;
      temp_v0 = FUN_0028c904(puVar11);
      if (temp_v0 != 0) {
        puVar13 = puVar11;
        FUN_0028c854();
        *(unsigned int **)(puVar1[5] + temp_v5 * 4) = puVar13;
      }
      else {
        temp_v1 = FUN_0028c814();
        *(unsigned int *)(puVar1[5] + temp_v5 * 4) = temp_v1;
      }
      piVar5 = (int *)(puVar10 + 1);
      temp_v5 = temp_v5 + 1;
      puVar10 = puVar10 + 4;
      puVar11 = (unsigned int *)((int)puVar11 + *piVar5);
    } while (temp_v5 < temp_v6);
  }
  temp_v5 = puVar1[1];
  temp_v0 = 0;
  if (temp_v5 != 0) {
    piVar4 = (int *)puVar1[4];
    piVar5 = piVar4 + -4;
    if ((temp_v5 & 1) != 0) {
      temp_v0 = *piVar4 + 1;
      piVar5 = piVar4;
    }
    temp_v4 = 0;
    for (temp_v5 = temp_v5 >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
      piVar4 = piVar5 + 4;
      piVar5 = piVar5 + 8;
      temp_v0 = temp_v0 + 1 + *piVar4;
      temp_v4 = temp_v4 + 1 + *piVar5;
    }
    temp_v0 = temp_v0 + temp_v4;
  }
  puVar1[6] = temp_v0;
  puVar1[7] = puVar1[7] + 1;
  return puVar1;
}
