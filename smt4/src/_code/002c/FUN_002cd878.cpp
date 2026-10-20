/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd878` (_code @ 0x2cd878, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern int DAT_0043dc24; /* 0x43dc24 */
extern unsigned char DAT_0043dc20; /* 0x43dc20 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobStop. */


void FUN_002cd878(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dc24;
  if (((*(unsigned int * *)((unsigned char *)&DAT_0043dc20 + 0x8)) != (unsigned int *)0x0) && (temp_v1 = jobIsValid(*(*(unsigned int * *)((unsigned char *)&DAT_0043dc20 + 0x8))), temp_v1 != 0)) {
    jobStop(*(*(unsigned int * *)((unsigned char *)&DAT_0043dc20 + 0x8)),0);
  }
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}

} /* extern "C" */
