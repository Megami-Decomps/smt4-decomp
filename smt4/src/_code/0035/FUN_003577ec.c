/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003577ec` (_code @ 0x3577ec, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656ca; /* 0x4656ca */

extern int FUN_00239a54(void);


unsigned int FUN_003577ec(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239a54(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
