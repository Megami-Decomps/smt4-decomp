/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ecc14` (_code @ 0x1ecc14, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002122e0. */
/* Supplied declaration required: FUN_0025a318. */
/* Supplied declaration required: FUN_0026a96c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_002d7b48. */
extern int FUN_002ed564(void);


unsigned int FUN_001ecc14(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_0028df3c();
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002ed564();
    if (temp_v0 != 0) {
      FUN_002122e0();
      FUN_0028df3c(0xffffffff);
      FUN_0028df0c(0);
      return 1;
    }
  }
  else {
    FUN_0026a96c();
    FUN_0025a318();
    FUN_002d7b48();
  }
  return 0;
}
