/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8bcc` (_code @ 0x3c8bcc, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029f7d4(void);
int FUN_002c3944(short *, int);

/* Supplied declaration required: FUN_0029f7d4. */
/* Supplied declaration required: FUN_002c3944. */


void FUN_003c8bcc(unsigned int param_1,short *param_2,short *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0029f7d4();
  if (param_2 != (short *)0x0) {
    FUN_002c3944(param_3,0x28);
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
