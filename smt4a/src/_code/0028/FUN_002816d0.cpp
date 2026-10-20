/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002816d0` (_code @ 0x2816d0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00281720(unsigned int, int);
int FUN_002844e4(void);

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_00281720. */
/* Supplied declaration required: FUN_002844e4. */


void FUN_002816d0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f118;
  if (DAT_0057f118 != 0) {
    FUN_002844e4();
    *(unsigned char *)(temp_v0 + 0x114) = 0;
    FUN_00281720(*(unsigned int *)(temp_v0 + 4),0);
    *(unsigned char *)(temp_v0 + 0x10f) = 1;
    *(unsigned int *)(temp_v0 + 0xe8) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0xf8) = 1;
    *(unsigned int *)(temp_v0 + 0xec) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x14c) = 0;
  }
  return;
}

} /* extern "C" */
