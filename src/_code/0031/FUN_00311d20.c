/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311d20` (_code @ 0x311d20, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_001e15bc; /* 0x1e15bc */

/* Supplied declaration required: FUN_002b48dc. */
extern int *FUN_002b49d8(unsigned int);


void FUN_00311d20(unsigned short param_1,unsigned short param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  unsigned short temp_v1;
  
  piVar1 = (int *)FUN_002b49d8(0x1f);
  temp_v0 = param_2;
  temp_v1 = param_1;
  FUN_002b48dc(&temp_v0,piVar1 + 1,(*piVar1 - 4U) >> 3,8,&LAB_001e15bc);
  return;
}
