/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a8ac` (_code @ 0x30a8ac, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */
/* Supplied declaration required: FUN_002741cc. */
/* Supplied declaration required: FUN_00276088. */
/* Supplied declaration required: FUN_0027db78. */
/* Supplied declaration required: FUN_0027dbb8. */
extern int FUN_002b8a80(void);
extern int FUN_002b8adc(void);
/* Supplied declaration required: FUN_002d1a9c. */


unsigned int FUN_0030a8ac(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_002741cc();
  FUN_0027db78();
  temp_v0 = FUN_002b8a80();
  if (temp_v0 != 0) {
    FUN_0027dbb8();
    FUN_0027db78();
    FUN_00273fa4();
    FUN_00273ec4();
    FUN_00276088();
  }
  else {
    temp_v0 = FUN_002b8adc();
    if (temp_v0 != 0) {
      FUN_0027dbb8();
      FUN_0027db78();
      FUN_002d1a9c();
    }
  }
  return 1;
}
