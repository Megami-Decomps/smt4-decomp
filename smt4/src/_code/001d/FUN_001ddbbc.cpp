/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ddbbc` (_code @ 0x1ddbbc, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: timerStart. */


void FUN_001ddbbc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0044e190;
  timerStart(DAT_0044e190 + 0x28,1,0);
  temp_v1 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar3 = (unsigned int *)(temp_v1 + 0x400);
  temp_v2 = *puVar3;
  *puVar3 = 1;
  *(unsigned int *)(temp_v1 + 0x404) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x408) = 3;
  return;
}

} /* extern "C" */
