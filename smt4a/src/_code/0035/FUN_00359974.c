/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359974` (_code @ 0x359974, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0019b738. */
/* Supplied declaration required: FUN_00281060. */


void FUN_00359974(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 * 0x68 + 0x63afc8;
  FUN_0019b738(temp_v0,0x68);
  FUN_00281060(temp_v0,param_2,param_3,param_4);
  return;
}
