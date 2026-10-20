/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001175a4` (_code @ 0x1175a4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001290e8(unsigned int *, unsigned char [24]);
int FUN_002e6354(unsigned char [24], int);
int FUN_00303334(unsigned char [24]);
int FUN_00303350(unsigned char [24]);

extern unsigned char DAT_00559e9c; /* 0x559e9c */

/* Supplied declaration required: FUN_001290e8. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00303334. */
/* Supplied declaration required: FUN_00303350. */


unsigned int * FUN_001175a4(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [24];
  
  *param_1 = (unsigned int)&DAT_00559e9c;
  FUN_002e6354(temp_v0,0x18);
  FUN_00303334(temp_v0);
  param_1 = param_1 + 1;
  FUN_001290e8(param_1,temp_v0);
  FUN_00303350(temp_v0);
  return param_1 + -1;
}

} /* extern "C" */
