/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bae8` (_code @ 0x31bae8, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002bcd68. */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, int, unsigned int);


void FUN_0031bae8(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (0 < param_3) {
    temp_v0 = FUN_002c5300(0x100,0x100,0,param_3 * 0x14,1);
    *(unsigned int *)(param_1 * 0x148 + 0x47813c) = temp_v0;
    FUN_002bcd68(temp_v0,param_2,param_3 * 0x14);
  }
  *(int *)(param_1 * 0x148 + 0x478028) = param_3;
  return;
}
