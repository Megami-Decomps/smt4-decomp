/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0e38` (_code @ 0x4a0e38, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);


unsigned int FUN_004a0e38(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = 1 << (param_2 & 0xff);
  if (((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
     (temp_v1 = FUN_001801a4(), (*(unsigned short *)(temp_v1 + 0x5e) & temp_v0) != 0)) {
    return 1;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return 0;
    }
    temp_v1 = 3;
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1ca0;
  }
  else {
    temp_v1 = FUN_001b347c();
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1c88;
  }
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      if ((-1 < *(char *)(temp_v2 + temp_v4)) &&
         (temp_v3 = FUN_001ab854(), (*(unsigned short *)(temp_v3 + 0x60) & temp_v0) != 0)) {
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
