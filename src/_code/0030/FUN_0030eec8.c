/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eec8` (_code @ 0x30eec8, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00473768; /* 0x473768 */

/* Supplied declaration required: FUN_002474a0. */
extern int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


int * FUN_0030eec8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  
  piVar1 = (int *)FUN_002c34a4(0x10000,0x100,0,*(int *)(param_1 + 0x38) * 0x2c + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  FUN_002474a0(temp_v0,3,5,&DAT_00473768,0x48);
  piVar1[1] = temp_v0;
  return piVar1;
}
