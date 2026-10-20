/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124458` (_code @ 0x124458, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_lmul(int, int, int, int);
int FUN_002ecfe4(...);

/* Supplied declaration required: rt_lmul. */
/* Supplied declaration required: FUN_002ecfe4. */


void FUN_00124458(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  long long temp_v0;
  long long temp_v1;
  
  temp_v0 = FUN_002ecfe4();
  temp_v1 = FUN_002ecfe4(param_2);
  rt_lmul((int)(temp_v0 - temp_v1),(int)((unsigned long long)(temp_v0 - temp_v1) >> 0x20),1000,0);
  return;
}

} /* extern "C" */
