/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b9a0` (_code @ 0x30b9a0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295c08(unsigned int);

extern unsigned int DAT_00434228; /* 0x434228 */

/* Supplied declaration required: FUN_00295c08. */
extern int FUN_0029c3ec(void);


int FUN_0030b9a0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0029c3ec();
  if (temp_v0 == 1) {
    FUN_00295c08(DAT_00434228);
    DAT_00434228 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
