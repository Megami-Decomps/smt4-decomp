/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ec34` (_code @ 0x21ec34, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ef90(unsigned int);
int FUN_0025c2d0(int, int);
int asdMemFree(int);
int jobStop(unsigned int, int);

extern unsigned short DAT_0043438a; /* 0x43438a */
extern int DAT_00434390; /* 0x434390 */
extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_0024ef90. */
/* Supplied declaration required: FUN_0025c2d0. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0021ec34(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = jobGetWork();
  if (g_btlUiBlock != 0) {
    FUN_0025c2d0(g_btlUiBlock,0);
  }
  temp_v2 = DAT_00434390;
  if (DAT_00434390 != 0) {
    DAT_0043438a = 0;
    temp_v1 = jobIsValid(*(unsigned int *)(DAT_00434390 + 0x10));
    if (temp_v1 != 0) {
      FUN_0024ef90(*(unsigned int *)(temp_v2 + 0x10));
      jobStop(*(unsigned int *)(temp_v2 + 0x10),0);
    }
    asdMemFree(DAT_00434390);
    DAT_00434390 = 0;
  }
  temp_v2 = jobIsValid(*(unsigned int *)(temp_v0 + 0x5c));
  if (temp_v2 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + 0x5c),0);
  }
  *(unsigned int *)(temp_v0 + 0x44a8) = *(unsigned int *)(temp_v0 + 0x44a8) & 0xfffffffe;
  return;
}

} /* extern "C" */
