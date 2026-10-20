/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038dc84` (_code @ 0x38dc84, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);

extern int FUN_00184964(unsigned int, int);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0038dc84(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v3 = 0;
  if (temp_v1 == 0 && temp_v2 == 0) {
    scrSetResult(0);
    return 1;
  }
  temp_v4 = 0;
  temp_v5 = 0x20;
  do {
    temp_v0 = 1 << (temp_v4 & 0xff);
    if ((temp_v1 & temp_v0) != 0) {
      temp_v3 = temp_v3 + 1;
    }
    if ((temp_v0 & temp_v2) != 0) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v5 = temp_v5 - 1;
    temp_v4 = temp_v4 + 1;
  } while (temp_v5 != 0);
  temp_v3 = FUN_00184964(0,temp_v3 - 1);
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    if (((1 << (temp_v4 & 0xff)) & temp_v1) != 0) {
      if (temp_v3 == temp_v5) {
        temp_v0 = temp_v4;
        if (temp_v4 != 0) {
          scrSetResult(temp_v4);
          return 1;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    }
    temp_v4 = temp_v4 + 1;
    temp_v0 = 0;
  } while ((int)temp_v4 < 0x20);
  temp_v4 = temp_v0;
  temp_v1 = 0;
  do {
    if (((1 << (temp_v1 & 0xff)) & temp_v2) != 0) {
      if (temp_v3 == temp_v5) {
        temp_v4 = temp_v1 + 0x20;
        break;
      }
      temp_v5 = temp_v5 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0x20);
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
