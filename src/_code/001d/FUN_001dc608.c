/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc608` (_code @ 0x1dc608, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0020055c(void);
extern int FUN_00211784(void);
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002d747c. */
/* Supplied declaration required: FUN_002f5e04. */


unsigned int FUN_001dc608(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_0020055c();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00211784();
    if (temp_v0 != 0) {
      FUN_002f5e04();
      FUN_002b8838(3);
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      *(unsigned int *)(param_1 + 0xd34) = 0;
      FUN_0026b9bc();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      temp_v1 = 2;
    }
  }
  else {
    FUN_002d747c();
  }
  return temp_v1;
}
