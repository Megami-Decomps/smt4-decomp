/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003578b8` (_code @ 0x3578b8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656ca; /* 0x4656ca */
extern signed char DAT_004656cb; /* 0x4656cb */
extern unsigned char DAT_004656cc; /* 0x4656cc */

extern int FUN_0023a244(void);
/* Supplied declaration required: FUN_00358d34. */
extern int FUN_00358f74(void);


int FUN_003578b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_004656ca != '\0') {
    if (DAT_004656cb != '\0') {
      temp_v0 = FUN_0023a244();
      if (temp_v0 < 0) {
        return temp_v0;
      }
      DAT_004656cc = 0;
      DAT_004656cb = '\0';
    }
    temp_v0 = FUN_00358f74();
    if (-1 < temp_v0) {
      FUN_00358d34();
      DAT_004656ca = '\0';
    }
  }
  return temp_v0;
}
