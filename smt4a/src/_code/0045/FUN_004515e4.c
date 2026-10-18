/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004515e4` (_code @ 0x4515e4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0059daec; /* 0x59daec */
extern romwright_code *DAT_0059daf0; /* 0x59daf0 */


int FUN_004515e4(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 != -0x80000000) {
    if (*piVar2 != 0x40000000) {
      return 0;
    }
    temp_v0 = (*DAT_0059daf0)(piVar2,param_2);
  }
  else {
    temp_v0 = (*DAT_0059daec)(piVar2,param_2);
  }
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = param_2;
  }
  return temp_v0;
}
