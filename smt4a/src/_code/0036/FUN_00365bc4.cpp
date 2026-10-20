/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365bc4` (_code @ 0x365bc4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_00365bc4(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_00187180(0x43,1);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v4 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v5 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(int *)(temp_v1 + temp_v5 * 100) == param_1) {
          temp_v4 = temp_v1 + temp_v5 * 100;
          return temp_v4;
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < (int)temp_v3);
    }
    while( 1 ) {
      temp_v5 = temp_v3;
      if (temp_v2 <= temp_v5) {
        return 0;
      }
      if (*(int *)(temp_v1 + temp_v5 * 100) == param_1) break;
      if (*(int *)(temp_v1 + temp_v5 * 100 + 100) == param_1) {
        return temp_v1 + temp_v5 * 100 + 100;
      }
      temp_v3 = temp_v5 + 2;
    }
    temp_v4 = temp_v1 + temp_v5 * 100;
  }
  return temp_v4;
}

} /* extern "C" */
