/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d358` (_code @ 0x37d358, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int randRange(int);
extern int gameGetOptions(void);
extern int FUN_001b34b8(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037d358(void)

{
/* irregular: 2 unstructured edge(s); 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  int temp_v2;
  short temp_v3;
  
  temp_v3 = 2;
  temp_v0 = FUN_001b34b8();
  if (temp_v0 == 1) {
    temp_v2 = 1;
    temp_v0 = gameGetOptions();
    if (*(short *)(temp_v0 + 0x132) != 0) {
      temp_v2 = 2;
    }
    if (*(short *)(temp_v0 + 0x134) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    if (*(short *)(temp_v0 + 0x136) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v2 = randRange(temp_v2);
    temp_v1 = *(short *)(temp_v0 + 0x132);
    if (temp_v1 != 0) {
      if (temp_v2 == 0) {
        temp_v3 = temp_v1;
        scrSetResult(temp_v3);
        return 1;
      }
      temp_v2 = temp_v2 - 1;
    }
    temp_v1 = *(short *)(temp_v0 + 0x134);
    if (temp_v1 != 0) {
      if (temp_v2 == 0) {
        temp_v3 = temp_v1;
        scrSetResult(temp_v3);
        return 1;
      }
      temp_v2 = temp_v2 - 1;
    }
    temp_v1 = *(short *)(temp_v0 + 0x136);
    if ((temp_v1 != 0) && (temp_v2 == 0)) {
      temp_v3 = temp_v1;
    }
  }
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
