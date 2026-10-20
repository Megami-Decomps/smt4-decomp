/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4fd8` (_code @ 0x2f4fd8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea0b8(int);
int _ZN9Obj55922c5resetEPv(unsigned int *, int);

extern unsigned char DAT_00559234; /* 0x559234 */

extern int FUN_002e9318(unsigned int *);
/* Supplied declaration required: FUN_002ea0b8. */
/* Supplied declaration required: _ZN9Obj55922c5resetEPv. */


void FUN_002f4fd8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559234;
  _ZN9Obj55922c5resetEPv(param_1,0);
  temp_v0 = FUN_002e9318(param_1 + 3);
  FUN_002ea0b8(temp_v0 - 0xc);
  return;
}

} /* extern "C" */
