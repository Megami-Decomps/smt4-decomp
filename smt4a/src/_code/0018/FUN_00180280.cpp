/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00180280` (_code @ 0x180280, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019b770(int, unsigned int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_001861ac(void);
/* Supplied declaration required: FUN_0019b770. */


void FUN_00180280(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001861ac();
  FUN_0019b770(**(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14,param_3,temp_v0,0);
  return;
}

} /* extern "C" */
