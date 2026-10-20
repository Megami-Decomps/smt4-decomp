/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004612bc` (_code @ 0x4612bc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00461310(void);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_00461310. */


unsigned int FUN_004612bc(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1[3] != 0) {
    if (*param_1 < param_1[3]) {
      return 1;
    }
    FUN_00461310();
    if (param_1 != (int *)0x0) {
      temp_v1 = param_1[0x14] + (unsigned int)*(unsigned char *)((int)param_1 + 0x9d);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      if (temp_v0 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
