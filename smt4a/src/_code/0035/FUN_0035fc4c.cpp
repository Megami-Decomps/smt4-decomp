/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fc4c` (_code @ 0x35fc4c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(int);
int FUN_001b2d54(unsigned int, int, unsigned int);

extern unsigned int g_aocSystem; /* 0x570280 */
extern int g_btlTalkBustUp; /* 0x5710dc */

/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_0035fc4c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    if (-1 < *(int *)(g_btlTalkBustUp + 0x2f8)) {
      asdTMTexTableReleaseNode(0x10);
      if (g_btlTalkBustUp != 0) {
        *(unsigned char *)(g_btlTalkBustUp + 0x2f4) = 0;
      }
      FUN_001b2d54(g_aocSystem,0x10,*(unsigned int *)(temp_v0 + 0x2f8));
      *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 3;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}

} /* extern "C" */
