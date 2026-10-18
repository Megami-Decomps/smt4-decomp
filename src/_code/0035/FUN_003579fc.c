/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003579fc` (_code @ 0x3579fc, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656ca; /* 0x4656ca */

extern int FUN_00239bec(void);


unsigned int FUN_003579fc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239bec(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
