/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275f8c` (_code @ 0x275f8c, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248e34(int);

extern int DAT_0049f958; /* 0x49f958 */
extern int DAT_0049f95c; /* 0x49f95c */
extern unsigned char DAT_0049fb49; /* 0x49fb49 */

/* Supplied declaration required: FUN_00248e34. */
extern int FUN_00248e8c(void);
extern int FUN_002c2950(void);


void FUN_00275f8c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0049f958 != 0) && (temp_v0 = FUN_00248e8c(), temp_v0 != -1)) {
    temp_v1 = FUN_002c2950();
    if (-1 < temp_v0) {
      temp_v1 = temp_v1 + ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1b)) >> 5) * 4;
      *(unsigned int *)(temp_v1 + 0x7d4) = *(unsigned int *)(temp_v1 + 0x7d4) | (1 << ((temp_v0 % 0x20) & 0xffU));
    }
    FUN_00248e34(DAT_0049f958);
  }
  if (DAT_0049f95c != 0) {
    temp_v0 = FUN_00248e8c();
    if (temp_v0 != -1) {
      temp_v1 = FUN_002c2950();
      if (-1 < temp_v0) {
        temp_v1 = temp_v1 + ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1b)) >> 5) * 4;
        *(unsigned int *)(temp_v1 + 0x7d4) = *(unsigned int *)(temp_v1 + 0x7d4) | (1 << ((temp_v0 % 0x20) & 0xffU));
      }
      FUN_00248e34(DAT_0049f95c);
    }
    DAT_0049f95c = 0;
  }
  DAT_0049fb49 = 0;
  return;
}

} /* extern "C" */
