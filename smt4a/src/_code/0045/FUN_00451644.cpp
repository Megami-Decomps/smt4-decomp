/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451644` (_code @ 0x451644, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0059daf4; /* 0x59daf4 */


void FUN_00451644(int *param_1)

{
  int *p;
  int temp_v0;
  
  p = (int *)*param_1;
  if (p[1] != 0) {
    temp_v0 = *p;
    if (temp_v0 == -0x80000000) {
      (*DAT_0059daf4)(p,p[1]);
      return;
    }
    if (temp_v0 == 0x40000000) {
      (*(*(romwright_code * *)((unsigned char *)&DAT_0059daf4 + 0x4)))(p,p[1]);
      return;
    }
  }
  return;
}

} /* extern "C" */
