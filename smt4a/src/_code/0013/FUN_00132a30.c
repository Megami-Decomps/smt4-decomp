/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132a30` (_code @ 0x132a30, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_4_stack;

extern unsigned char DAT_0055b2d0; /* 0x55b2d0 */

extern int *FUN_002ee998(int, unsigned int);
extern int FUN_002fd5d4(int *, int);


void FUN_00132a30(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  piVar1 = (int *)FUN_002ee998(param_2,0);
  piVar1[2] = (int)&DAT_0055b2d0;
  temp_v0 = FUN_002fd5d4(piVar1 + 3,param_4 + 4);
  temp_v1 = *(unsigned int *)(param_4 + 0x74);
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(param_4 + 0x70);
  *(unsigned int *)(temp_v0 + 0x70) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x74) = *(unsigned int *)(param_4 + 0x78);
  temp_v1 = *(unsigned int *)(param_4 + 0x80);
  *(unsigned int *)(temp_v0 + 0x80) = *(unsigned int *)(param_4 + 0x84);
  *(unsigned int *)(temp_v0 + 0x7c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x84) = *(unsigned int *)(param_4 + 0x88);
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(param_4 + 0x8c);
  *(unsigned int *)(temp_v0 + 0x8c) = *(unsigned int *)(param_4 + 0x90);
  *piVar1 = *param_3;
  piVar1[1] = *(int *)(*param_3 + 4);
  **(int **)(*param_3 + 4) = (int)piVar1;
  *(int **)(*param_3 + 4) = piVar1;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *param_1 = (int)piVar1;
  return;
}
