/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330838` (_code @ 0x330838, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int eventSetUnderMessageFade(unsigned int, int, int);
int SBORROW4(int, int);

extern int g_eventCommand; /* 0x57f554 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00203d74(void);
/* Supplied declaration required: scrGetArg. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: eventSetUnderMessageFade. */


unsigned char FUN_00330838(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 == 0) {
    temp_v1 = scrGetArg(0);
    temp_v2 = scrGetArg(1);
    temp_v0 = FUN_00203d74();
    temp_v3 = temp_v0 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = temp_v2 - 4;
    }
    if ((temp_v3 && temp_v2 != 4) && temp_v0 < 0 == (temp_v3 && SBORROW4(temp_v2,4))) {
      temp_v2 = 4;
    }
    eventSetUnderMessageFade(temp_v1,temp_v2,1);
    return 0;
  }
  return *(int *)(g_eventCommand + 0x10) == *(int *)(g_eventCommand + 0x14);
}

} /* extern "C" */
