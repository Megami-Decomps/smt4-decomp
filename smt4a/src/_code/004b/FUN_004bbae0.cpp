/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bbae0` (_code @ 0x4bbae0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_004bbae0(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00187180(2,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      if ((*(unsigned char *)(temp_v1 + temp_v3 * 0xa4) == param_1) &&
         (*(unsigned char *)(temp_v1 + temp_v3 * 0xa4 + 1) == param_2)) {
        if (temp_v4 == param_3) {
          return temp_v1 + temp_v3 * 0xa4;
        }
        temp_v4 = temp_v4 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return 0;
}

} /* extern "C" */
