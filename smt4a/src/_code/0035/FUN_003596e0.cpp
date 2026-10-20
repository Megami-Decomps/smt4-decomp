/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003596e0` (_code @ 0x3596e0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int FUN_00188444(unsigned char [496]);
int FUN_001886bc(void);
int FUN_002e0e04(int, unsigned char [496], int);

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_00188444. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_002e0e04. */


unsigned char * FUN_003596e0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [496];
  
  puVar1 = temp_v0;
  FUN_002e0e04(param_1,temp_v0,2);
  if (param_1 != 0) {
    FUN_001886bc();
    FUN_00188444(temp_v0);
    FUN_0013ebd8();
    return puVar1;
  }
  FUN_0013ebd8();
  return (unsigned char *)0xe0e046bc;
}

} /* extern "C" */
