/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031670c` (_code @ 0x31670c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxOpen(unsigned int, unsigned int, unsigned int);
int asdCecMessageBoxClose(void);

extern unsigned char g_asdCec; /* 0x5b3f94 */

/* Supplied declaration required: asdCecMessageBoxOpen. */
/* Supplied declaration required: asdCecMessageBoxClose. */


unsigned int FUN_0031670c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
  asdCecMessageBoxOpen(temp_v0,*(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)),(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[1]);
  if ((temp_v0 & 0x80000000) != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6] + 0x3c0);
    asdCecMessageBoxClose();
  }
  return temp_v1;
}

} /* extern "C" */
