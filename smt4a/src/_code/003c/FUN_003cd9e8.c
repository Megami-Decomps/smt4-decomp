/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd9e8` (_code @ 0x3cd9e8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_003cd9e8(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar7;
  int temp_v6;
  
  temp_v0 = FUN_00187180(6,2);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v4 = 0;
  temp_v6 = 0;
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      psVar7 = (short *)(temp_v1 + temp_v3 * 4);
      temp_v5 = (int)*psVar7;
      if (temp_v5 == param_1) {
        return (int)*(short *)(temp_v1 + temp_v3 * 4 + 2);
      }
      if (param_1 < 0) {
        if (temp_v5 < temp_v4) {
          temp_v6 = (int)psVar7[1];
          temp_v4 = temp_v5;
        }
      }
      else if (temp_v4 < temp_v5) {
        temp_v6 = (int)psVar7[1];
        temp_v4 = temp_v5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return temp_v6;
}
