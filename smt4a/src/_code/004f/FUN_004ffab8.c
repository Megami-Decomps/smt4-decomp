/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ffab8` (_code @ 0x4ffab8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001a7a20. */
extern unsigned int FUN_002e3390(unsigned int);


void FUN_004ffab8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x20c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0xc;
  }
  temp_v0 = *(int *)(temp_v0 + 0x30);
  temp_v1 = FUN_002e3390(param_2);
  FUN_001a7a20(temp_v0 + 0x7c,param_2,temp_v1);
  return;
}
