/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024dc64` (_code @ 0x24dc64, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int memClear(unsigned char *, int);

extern int DAT_00433278; /* 0x433278 */
extern unsigned char DAT_00478000; /* 0x478000 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */


void FUN_0024dc64(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_00433278) {
    do {
      temp_v0 = temp_v1 * 0x148;
      if (*(int *)(temp_v0 + 0x47813c) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v0 + 0x47813c) = 0;
        *(unsigned int *)(temp_v0 + 0x478028) = 0;
      }
      if (*(int *)(temp_v0 + 0x478024) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v0 + 0x478024) = 0;
        *(unsigned int *)(temp_v0 + 0x478020) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00433278);
  }
  memClear(&DAT_00478000,0x5200);
  DAT_00433278 = 0;
  return;
}

} /* extern "C" */
