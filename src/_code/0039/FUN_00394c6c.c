/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394c6c` (_code @ 0x394c6c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00295228. */


void FUN_00394c6c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002939f4();
  if (-1 < *(short *)(temp_v0 + 0x1fc8)) {
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + *(short *)(temp_v0 + 0x1fc8) * 0x288);
    if (((*puVar2 & 0x10) != 0) && (temp_v0 = (int)*(short *)((int)puVar2 + 0xce), -1 < temp_v0)) {
      FUN_00295228(temp_v0,param_1);
      return;
    }
  }
  return;
}
