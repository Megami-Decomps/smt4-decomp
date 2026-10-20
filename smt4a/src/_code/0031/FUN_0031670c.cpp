/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031670c` (_code @ 0x31670c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042e67c(unsigned int, unsigned int, unsigned int);
int FUN_0042e868(void);

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */


unsigned int FUN_0031670c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_005b3f98[6];
  FUN_0042e67c(temp_v0,*DAT_005b3f98,DAT_005b3f98[1]);
  if ((temp_v0 & 0x80000000) != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(DAT_005b3f98[6] + 0x3c0);
    FUN_0042e868();
  }
  return temp_v1;
}

} /* extern "C" */
