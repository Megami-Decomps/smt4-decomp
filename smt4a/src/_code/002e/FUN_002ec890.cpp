/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec890` (_code @ 0x2ec890, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea0b8(int);

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

/* Supplied declaration required: FUN_002ea0b8. */
extern int FUN_002eda5a(unsigned int *);


void FUN_002ec890(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ae64;
  temp_v0 = FUN_002eda5a(param_1 + 3);
  FUN_002ea0b8(temp_v0 - 0xc);
  return;
}

} /* extern "C" */
