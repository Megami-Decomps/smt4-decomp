/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc5ac` (_code @ 0x1bc5ac, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(void);

extern unsigned char DAT_00567054; /* 0x567054 */
extern unsigned char DAT_0056705c; /* 0x56705c */

/* Supplied declaration required: FUN_0030ea58. */


unsigned char * FUN_001bc5ac(unsigned int param_1,char *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    puVar1 = &DAT_00567054;
    FUN_0030ea58();
    if (puVar1 != (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
  }
  return &DAT_0056705c;
}

} /* extern "C" */
