/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a8e0` (_code @ 0x30a8e0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: FUN_00275e18. */
/* Supplied declaration required: FUN_0027d908. */
/* Supplied declaration required: FUN_0027d948. */
extern int FUN_002b8740(void);
extern int FUN_002b879c(void);
/* Supplied declaration required: FUN_002d1b48. */


unsigned int FUN_0030a8e0(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_00273f5c();
  FUN_0027d908();
  temp_v0 = FUN_002b8740();
  if (temp_v0 != 0) {
    FUN_0027d948();
    FUN_0027d908();
    FUN_00273d34();
    FUN_00273c54();
    FUN_00275e18();
  }
  else {
    temp_v0 = FUN_002b879c();
    if (temp_v0 != 0) {
      FUN_0027d948();
      FUN_0027d908();
      FUN_002d1b48();
    }
  }
  return 1;
}
