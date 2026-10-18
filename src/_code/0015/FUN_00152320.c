/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152320` (_code @ 0x152320, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015583c(unsigned int);
extern unsigned int FUN_001558d0(int);
extern int FUN_001558fc(void);
extern int FUN_00155920(int);


unsigned int FUN_00152320(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0015583c(*(unsigned int *)(param_1 + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_001558fc();
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          return 0;
        }
      }
      else {
        temp_v2 = FUN_001558d0(temp_v0);
        param_3[2] = temp_v2;
      }
    }
    else {
      temp_v0 = FUN_00155920(temp_v0);
      *param_3 = *(unsigned int *)(temp_v0 + 8);
      temp_v0 = *(int *)(temp_v0 + 4);
      if (temp_v0 != -1) {
        temp_v0 = temp_v0 + 8;
      }
      param_3[1] = temp_v0;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
