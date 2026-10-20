/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d9f0` (_code @ 0x14d9f0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(void);

extern unsigned char DAT_0042a518; /* 0x42a518 */
extern unsigned char DAT_0042a520; /* 0x42a520 */

/* Supplied declaration required: FUN_002aa568. */


unsigned char * FUN_0014d9f0(unsigned int param_1,char *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    puVar1 = &DAT_0042a518;
    FUN_002aa568();
    if (puVar1 != (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
  }
  return &DAT_0042a520;
}

} /* extern "C" */
