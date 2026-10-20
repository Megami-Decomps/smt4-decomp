/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Eve2dTex_Shutdown` (_code @ 0x1c3520, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dbba8(unsigned int);
int FUN_0026e68c(unsigned int, int);
int jobStop(unsigned int, int);

extern unsigned int *g_eventTex; /* 0x43ded0 */

/* Supplied declaration required: FUN_001dbba8. */
/* Supplied declaration required: FUN_0026e68c. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobStop. */


unsigned int scrComm_Eve2dTex_Shutdown(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((g_eventTex != (unsigned int *)0x0) && (temp_v0 = jobIsValid(*g_eventTex), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      if (temp_v1 != 0) {
        FUN_0026e68c(*(unsigned int *)(temp_v0 * 4 + 0x493790),0);
        FUN_001dbba8(*(unsigned int *)(temp_v0 * 4 + 0x493790));
      }
      *(unsigned int *)(temp_v0 * 4 + 0x493790) = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    jobStop(*g_eventTex,0);
  }
  return 1;
}

} /* extern "C" */
