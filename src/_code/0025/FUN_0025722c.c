/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025722c` (_code @ 0x25722c, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_001d21a0. */
extern int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


int * FUN_0025722c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = *param_1;
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  piVar1 = (int *)FUN_002c34a4(0x10000,0x100,0,*(int *)(temp_v0 + 8) * 0x14 + 0x18,0x10,1);
  piVar1[4] = (int)(piVar1 + 6);
  *piVar1 = temp_v0;
  FUN_001d21a0(piVar1,0);
  *(unsigned short *)(piVar1 + 5) = 1;
  return piVar1;
}
