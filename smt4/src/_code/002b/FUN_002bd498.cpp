/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd498` (_code @ 0x2bd498, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e8b0; /* 0x44e8b0 */
extern romwright_code *DAT_0044e8b4; /* 0x44e8b4 */
extern romwright_code *DAT_0044e8b8; /* 0x44e8b8 */
extern romwright_code *DAT_0044e8bc; /* 0x44e8bc */
extern romwright_code *DAT_0044e8c0; /* 0x44e8c0 */


unsigned int FUN_002bd498(unsigned int *param_1)

{
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  temp_v0 = *piVar2;
  if (temp_v0 != 0x20000009) {
    if (temp_v0 < 0x2000000a) {
      if (temp_v0 != 0x20000002) {
        if (temp_v0 == 0x20000004) {
          (*DAT_0044e8b8)(piVar2);
        }
      }
      else {
        (*DAT_0044e8bc)(piVar2);
      }
    }
    else if (temp_v0 != 0x20000011) {
      if (temp_v0 == 0x20000021) {
        (*DAT_0044e8c0)(piVar2);
      }
    }
    else {
      (*DAT_0044e8b0)(piVar2);
    }
  }
  else {
    (*DAT_0044e8b4)(piVar2);
  }
  return 0;
}

} /* extern "C" */
