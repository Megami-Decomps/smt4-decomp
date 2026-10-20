/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280250` (_code @ 0x280250, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042e67c(int, unsigned int, unsigned int);
int FUN_0042e868(unsigned int);

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */


unsigned char FUN_00280250(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = 0;
  temp_v0 = DAT_005b3f98[6];
  FUN_0042e67c(temp_v0,*DAT_005b3f98,DAT_005b3f98[1]);
  if (-1 < temp_v0) {
    temp_v1 = *(int *)(DAT_005b3f98[6] + 0x210) != 0;
    if (!temp_v1) {
      FUN_0042e868(DAT_005b3f98[6]);
    }
  }
  return temp_v1;
}

} /* extern "C" */
