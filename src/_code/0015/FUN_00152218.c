/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152218` (_code @ 0x152218, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00155748(unsigned int, unsigned int, unsigned int *, unsigned int);
extern unsigned int FUN_001557dc(int);
extern int FUN_00155808(void);
extern int FUN_0015582c(int);


unsigned int FUN_00152218(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00155748(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c),param_2,param_3,0);
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00155808();
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          return 0;
        }
      }
      else {
        temp_v2 = FUN_001557dc(temp_v0);
        param_3[2] = temp_v2;
      }
    }
    else {
      temp_v0 = FUN_0015582c(temp_v0);
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
