/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e4d4` (_code @ 0x19e4d4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);


int FUN_0019e4d4(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_001b347c();
  if (0 < temp_v0) {
    do {
      temp_v0 = FUN_001ab888();
      temp_v0 = FUN_001ab854((int)*(char *)(temp_v0 + temp_v1 + 0x1c88));
      if (*(unsigned short *)(temp_v0 + 0x62) == param_1) {
        return temp_v0;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = FUN_001b347c();
    } while (temp_v1 < temp_v0);
  }
  return 0;
}

} /* extern "C" */
