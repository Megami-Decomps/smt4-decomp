/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103afc` (_code @ 0x103afc, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);
int FUN_002e954a(int, unsigned int);
int FUN_002e9598(void);

/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e954a. */
/* Supplied declaration required: FUN_002e9598. */


unsigned int FUN_00103afc(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002e93da();
  if (param_4 != 0) {
    temp_v0 = param_1 + 0x44;
  }
  else {
    temp_v0 = param_1 + 0x28;
  }
  FUN_002e954a(temp_v0,param_2);
  FUN_002e9598();
  *(unsigned char *)(param_1 + 0x65) = 0;
  return 1;
}

} /* extern "C" */
