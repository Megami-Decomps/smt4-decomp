/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001082b4` (_code @ 0x1082b4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bfdfc. */
extern unsigned int FUN_002bff9c(void);
extern unsigned int FUN_002bffac(void);


unsigned int FUN_001082b4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bffac();
  if (param_1 == 1 || param_1 == 3) {
    temp_v0 = temp_v0 | 4;
  }
  temp_v1 = FUN_002bff9c();
  FUN_002bfdfc(param_1,param_2,temp_v1,temp_v0);
  return 1;
}
