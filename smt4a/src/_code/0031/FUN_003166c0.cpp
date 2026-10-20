/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003166c0` (_code @ 0x3166c0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxOpen(int, unsigned int, unsigned int);
int asdCecMessageBoxClose(unsigned int);

extern unsigned char g_asdCec; /* 0x5b3f94 */

/* Supplied declaration required: asdCecMessageBoxOpen. */
/* Supplied declaration required: asdCecMessageBoxClose. */


int FUN_003166c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
  asdCecMessageBoxOpen(temp_v0,*(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)),(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[1]);
  if (-1 < temp_v0) {
    temp_v0 = *(int *)((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6] + 0x210);
    if (temp_v0 != 0) {
      temp_v1 = temp_v0;
    }
    asdCecMessageBoxClose((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6]);
  }
  return temp_v1;
}

} /* extern "C" */
