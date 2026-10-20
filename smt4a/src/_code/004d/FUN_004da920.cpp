/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da920` (_code @ 0x4da920, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd4(short *, int);
int FUN_0035dd74(void);

/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_0035dd74. */


void FUN_004da920(unsigned int param_1,short *param_2,short *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0035dd74();
  if (param_2 != (short *)0x0) {
    FUN_002e6dd4(param_3,0x28);
    temp_v1 = 0xc;
    *param_3 = param_2[0xd];
    temp_v0 = 0;
    do {
      param_2 = param_2 + 1;
      if (*param_2 != 0) {
        param_3[temp_v0 + 1] = *param_2;
      }
      temp_v0 = temp_v0 + 1;
      temp_v1 = temp_v1 - 1;
    } while (temp_v1 != 0);
  }
  return;
}

} /* extern "C" */
