/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ad9c` (_code @ 0x22ad9c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxClose(unsigned int);
int asdCecMessageBoxOpen(unsigned int, unsigned int, unsigned int);

extern unsigned char g_asdCec; /* 0x464fa8 */

/* Supplied declaration required: asdCecMessageBoxClose. */
/* Supplied declaration required: asdCecMessageBoxOpen. */


unsigned char FUN_0022ad9c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18);
  asdCecMessageBoxOpen(temp_v0,param_1,param_2);
  temp_v1 = (temp_v0 & 0x80000000) == 0;
  if (temp_v1) {
    asdCecMessageBoxClose(*(unsigned int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18));
  }
  return temp_v1;
}

} /* extern "C" */
