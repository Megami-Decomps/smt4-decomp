/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291e14` (_code @ 0x291e14, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */


unsigned int FUN_00291e14(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_00573920 != 0) &&
     (temp_v0 = 0,
     (*(unsigned int *)(DAT_00573920 + 0x45a0) & DAT_00573ae8) != 0 ||
     (DAT_00573aec & *(unsigned int *)(DAT_00573920 + 0x45a4)) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
