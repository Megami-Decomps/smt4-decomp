/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e05c` (_code @ 0x37e05c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a1544(void);
/* Supplied declaration required: FUN_002bf59c. */
extern int FUN_00380138(void);


int FUN_0037e05c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a1544();
  if (temp_v0 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_00380138();
  }
  FUN_002bf59c(param_1 + 4,param_1 + 8,temp_v0 + 0x13c);
  return temp_v0;
}
