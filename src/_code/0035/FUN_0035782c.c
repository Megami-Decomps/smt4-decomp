/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035782c` (_code @ 0x35782c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656cb; /* 0x4656cb */
extern signed char DAT_004656cc; /* 0x4656cc */
extern unsigned int DAT_004e629c; /* 0x4e629c */

/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
extern int FUN_0035ae94(unsigned int);


int FUN_0035782c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_004656cb == '\0') {
    temp_v0 = -0x375ef410;
  }
  else if (DAT_004656cc == '\0') {
    FUN_002c38a4(&DAT_004e629c);
    temp_v0 = FUN_0035ae94(0);
    if (temp_v0 < 0) {
      FUN_002c3820(&DAT_004e629c);
      return temp_v0;
    }
    FUN_002bb150(16000000,0);
    DAT_004656cc = '\x01';
    FUN_002c3820(&DAT_004e629c);
  }
  return temp_v0;
}
