/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011587c` (_code @ 0x11587c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_003014c6(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_003014de(unsigned int);
extern int FUN_00301502(unsigned int);


unsigned int FUN_0011587c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003014c6(param_2,param_4,param_3,param_4,param_4);
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v0 = FUN_003014de(param_2);
  if (temp_v0 != 0) {
    piVar2 = *(int **)(param_1 + 0x10);
  }
  else {
    temp_v0 = FUN_00301502(param_2);
    if (temp_v0 < 0) {
      return 0;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 4) + temp_v0 * 4);
  }
  temp_v1 = (**(romwright_code **)(*piVar2 + 0x18))(piVar2,param_2,param_3,param_4);
  return temp_v1;
}

} /* extern "C" */
