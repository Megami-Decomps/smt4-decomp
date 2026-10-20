/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106ce4` (_code @ 0x106ce4, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010ca78(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_0010ca78. */
extern int FUN_002e760a(unsigned int);


void FUN_00106ce4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e760a(0x9c);
  if (temp_v0 != 0) {
    FUN_0010ca78(temp_v0,param_1,param_2);
  }
  return;
}

} /* extern "C" */
