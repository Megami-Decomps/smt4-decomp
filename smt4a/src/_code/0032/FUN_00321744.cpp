/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321744` (_code @ 0x321744, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(int);
int FUN_0019a7f4(int);
int FUN_001b2d54(unsigned int, int, unsigned int);

extern unsigned int g_aocSystem; /* 0x570280 */
extern int g_btlTalkBustUp; /* 0x5710dc */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_00321744(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    if (-1 < *(int *)(g_btlTalkBustUp + 0x2f8)) {
      FUN_0019a7f4(0x10);
      if (g_btlTalkBustUp != 0) {
        *(unsigned char *)(g_btlTalkBustUp + 0x2f4) = 0;
      }
      FUN_001b2d54(g_aocSystem,0x10,*(unsigned int *)(temp_v0 + 0x2f8));
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
