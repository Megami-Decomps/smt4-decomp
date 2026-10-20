/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db56c` (_code @ 0x1db56c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxClose(unsigned int);
int asdCecMessageBoxOpen(int, unsigned int, unsigned int);

extern unsigned char g_asdCec; /* 0x464fa8 */

/* Supplied declaration required: asdCecMessageBoxClose. */
/* Supplied declaration required: asdCecMessageBoxOpen. */


unsigned char FUN_001db56c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = 0;
  temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
  asdCecMessageBoxOpen(temp_v0,*(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)),(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[1]);
  if (-1 < temp_v0) {
    temp_v1 = *(int *)((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6] + 0x210) != 0;
    if (!temp_v1) {
      asdCecMessageBoxClose((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6]);
    }
  }
  return temp_v1;
}

} /* extern "C" */
