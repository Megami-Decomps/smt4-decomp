/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011de1c` (_code @ 0x11de1c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055aa64; /* 0x55aa64 */

extern int FUN_002ec9f4(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */
extern int FUN_002fb028(int);


void FUN_0011de1c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055aa64;
  temp_v0 = FUN_002ec9f4(param_1 + 0x3e);
  temp_v0 = FUN_002fb028(temp_v0 - 0x78);
  FUN_002ecac4(temp_v0 - 0x80);
  return;
}
