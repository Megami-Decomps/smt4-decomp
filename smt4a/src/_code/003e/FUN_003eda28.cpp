/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eda28` (_code @ 0x3eda28, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


int FUN_003eda28(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x227c) != 0) {
    temp_v0 = FUN_001a6f60(*(int *)(param_1 + 0x227c),0);
    temp_v1 = FUN_00192798();
    if (param_2 - 0xfU < 7) {
      temp_v3 = (int)(short)(param_2 - 0xfU);
      temp_v2 = FUN_00192748(temp_v0);
      if (temp_v3 <= temp_v2 - 1) {
        temp_v1 = temp_v1 + temp_v3 * 0x1c;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
