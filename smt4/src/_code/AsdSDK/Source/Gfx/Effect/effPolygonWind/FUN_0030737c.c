/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030737c` (_code @ 0x30737c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_00219fc4(unsigned int);
extern int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00326c0c. */


int * FUN_0030737c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x3c);
  temp_v1 = *(int *)(param_1 + 0x40);
  piVar1 = (int *)FUN_002c32a0(0x10000,0x100,0,*(int *)(temp_v1 + 0x38) * 0x30 + 0xc,0x10,1);
  *piVar1 = (int)(piVar1 + 3);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(temp_v1 + 0x8c);
  if (temp_v0 < 4) {
    temp_v0 = 3;
  }
  *(unsigned int *)(temp_v1 + 0x8c) = temp_v0;
  temp_v2 = FUN_00219fc4(*(unsigned int *)(temp_v2 + 4));
  piVar1[1] = temp_v2;
  FUN_00326c0c(piVar1,temp_v1);
  return piVar1;
}
