/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d908` (_code @ 0x14d908, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042a160; /* 0x42a160 */
extern unsigned char DAT_0042a168; /* 0x42a168 */

/* Supplied declaration required: FUN_002aa7f4. */


unsigned char * FUN_0014d908(unsigned int param_1,char *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    puVar1 = &DAT_0042a160;
    FUN_002aa7f4();
    if (puVar1 != (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
  }
  return &DAT_0042a168;
}
