/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db7b4` (_code @ 0x3db7b4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);

extern int FUN_00246708(void);
extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


unsigned int FUN_003db7b4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002939f4();
  temp_v0 = FUN_00293230();
  if ((temp_v0 != 0) || (temp_v0 = FUN_00246708(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
