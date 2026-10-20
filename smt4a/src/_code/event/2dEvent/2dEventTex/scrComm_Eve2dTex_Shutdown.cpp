/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Eve2dTex_Shutdown` (_code @ 0x2611c8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00281178(unsigned int);
int jobSetWork31(unsigned int, int);

extern unsigned int *g_eventTex; /* 0x57f3b0 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00281178. */
/* Supplied declaration required: jobSetWork31. */


unsigned int scrComm_Eve2dTex_Shutdown(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((g_eventTex != (unsigned int *)0x0) && (temp_v0 = jobIsValid(*g_eventTex), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c));
      if (temp_v1 != 0) {
        jobSetWork31(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c),0);
        FUN_00281178(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c));
      }
      *(unsigned int *)(temp_v0 * 4 + 0x5e1f3c) = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    jobStop(*g_eventTex,0);
  }
  return 1;
}

} /* extern "C" */
