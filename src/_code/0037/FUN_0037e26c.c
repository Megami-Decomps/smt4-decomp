/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e26c` (_code @ 0x37e26c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a17e4(void);
/* Supplied declaration required: FUN_002bf774. */
extern int FUN_00380348(void);


int FUN_0037e26c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a17e4();
  if (temp_v0 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_00380348();
  }
  FUN_002bf774(param_1 + 4,param_1 + 8,temp_v0 + 0x13c);
  return temp_v0;
}
