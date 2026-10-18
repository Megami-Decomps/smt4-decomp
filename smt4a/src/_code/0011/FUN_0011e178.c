/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e178` (_code @ 0x11e178, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055aaa0; /* 0x55aaa0 */

extern int FUN_002ea00c(int);
extern int FUN_002ec890(int);
extern int FUN_002ec9f4(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */
/* Supplied declaration required: FUN_002f9f12. */
extern int FUN_002fb028(int);


void FUN_0011e178(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055aaa0;
  if (param_1[0x3c] != 0) {
    FUN_002f9f12();
  }
  temp_v0 = FUN_002ec9f4(param_1 + 0x5e);
  temp_v0 = FUN_002fb028(temp_v0 - 0x78);
  temp_v0 = FUN_002ec890(temp_v0 - 0x28);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x60);
  FUN_002ecac4(temp_v0 - 0x78);
  return;
}
