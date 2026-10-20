/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2cf0` (_code @ 0x2a2cf0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxOpen(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int asdCecMessageBoxClose(unsigned int);

extern unsigned int DAT_0057f2c8; /* 0x57f2c8 */
extern int g_cecProcess; /* 0x57f390 */
extern int DAT_005b3f98; /* 0x5b3f98 */

extern unsigned int FUN_0042d694(unsigned int);
/* Supplied declaration required: asdCecMessageBoxOpen. */
/* Supplied declaration required: asdCecMessageBoxClose. */


unsigned char FUN_002a2cf0(void)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  unsigned char temp_v2;
  
  if (g_cecProcess != 0) {
    temp_v1 = FUN_0042d694(0x19a2);
    temp_v0 = *(unsigned int *)(DAT_005b3f98 + 0x18);
    asdCecMessageBoxOpen(temp_v0,temp_v1,DAT_0057f2c8,temp_v1,unaff_r4,in_lr);
    temp_v2 = (temp_v0 & 0x80000000) == 0;
    if (temp_v2) {
      asdCecMessageBoxClose(*(unsigned int *)(DAT_005b3f98 + 0x18));
    }
    return temp_v2;
  }
  return 0;
}

} /* extern "C" */
