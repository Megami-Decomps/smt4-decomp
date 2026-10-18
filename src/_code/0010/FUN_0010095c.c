/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010095c` (_code @ 0x10095c, 0xe bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"


unsigned int FUN_0010095c(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}
