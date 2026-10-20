/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314ef8` (_code @ 0x314ef8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(int);
int FUN_003592dc(unsigned int);
int FUN_004aa780(int, int);

extern unsigned short DAT_005715fa; /* 0x5715fa */
extern int DAT_00571600; /* 0x571600 */
extern unsigned int DAT_00571638; /* 0x571638 */
extern unsigned int DAT_0057163c; /* 0x57163c */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_003592dc. */
/* Supplied declaration required: FUN_004aa780. */


void FUN_00314ef8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobGetWork();
  if (g_btlUiBlock != 0) {
    FUN_004aa780(g_btlUiBlock,0);
  }
  temp_v2 = DAT_00571600;
  if (DAT_00571600 != 0) {
    DAT_005715fa = 0;
    temp_v1 = jobIsValid(*(unsigned int *)(DAT_00571600 + 0x10));
    if (temp_v1 != 0) {
      FUN_003592dc(*(unsigned int *)(temp_v2 + 0x10));
      jobStop(*(unsigned int *)(temp_v2 + 0x10),0);
    }
    asdMemFree(DAT_00571600);
    DAT_00571600 = 0;
  }
  temp_v2 = jobIsValid(*(unsigned int *)(temp_v0 + 0x80));
  if (temp_v2 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + 0x80),0);
  }
  temp_v3 = ~DAT_00571638;
  *(unsigned int *)(temp_v0 + 0x45ac) = *(unsigned int *)(temp_v0 + 0x45ac) & ~DAT_0057163c;
  *(unsigned int *)(temp_v0 + 0x45a8) = *(unsigned int *)(temp_v0 + 0x45a8) & temp_v3;
  return;
}

} /* extern "C" */
