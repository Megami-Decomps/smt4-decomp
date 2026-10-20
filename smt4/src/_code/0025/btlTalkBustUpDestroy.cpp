/* NON_MATCHING: romwright 0.5.0 decompilation of `btlTalkBustUpDestroy` (_code @ 0x2523f0, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a60cc(unsigned int, int, unsigned int);
int asdTMTexTableReleaseNode(int);
int asdMemFree(int);
int jobStop(unsigned int, int);

extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_btlTalkBustUp; /* 0x434210 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void btlTalkBustUpDestroy(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    if (-1 < *(int *)(g_btlTalkBustUp + 0x2f8)) {
      asdTMTexTableReleaseNode(0x18);
      if (g_btlTalkBustUp != 0) {
        *(unsigned char *)(g_btlTalkBustUp + 0x2f4) = 0;
      }
      FUN_002a60cc(g_aocSystem,0x18,*(unsigned int *)(temp_v0 + 0x2f8));
      *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
      *(unsigned int *)(temp_v0 + 0x2e8) = 3;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
    }
    jobStop(*(unsigned int *)(temp_v0 + 0x2e4),0);
    asdMemFree(temp_v0);
    g_btlTalkBustUp = 0;
  }
  return;
}

} /* extern "C" */
