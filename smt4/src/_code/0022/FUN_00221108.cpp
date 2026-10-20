/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221108` (_code @ 0x221108, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);
int gameGetUnitRecord(...);

extern int FUN_0024ea50(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_0029bcf0(unsigned int);
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: gameGetUnitRecord. */


unsigned int FUN_00221108(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v4 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0024ea50(temp_v0 & 0xffff);
    if (temp_v1 == 0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v2 = FUN_0029bcf0(temp_v0 & 0xffff);
      temp_v3 = gameGetUnitRecord();
      temp_v1 = flagWordTestBit(temp_v3,10);
      if (temp_v1 == 0) {
        temp_v3 = gameGetUnitRecord(temp_v2);
        temp_v1 = flagWordTestBit(temp_v3,1);
        if (temp_v1 == 0) {
          temp_v2 = gameGetUnitRecord(temp_v2);
          temp_v1 = flagWordTestBit(temp_v2,2);
          if (temp_v1 == 0) {
            scrSetResult(temp_v4);
            return 1;
          }
        }
      }
      temp_v4 = 1;
    }
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
