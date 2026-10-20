/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3084` (_code @ 0x2f3084, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012140c(int);
int FUN_002f30c4(unsigned int *);
int FUN_002f30e0(unsigned int *, unsigned int);

extern unsigned char DAT_00558be8; /* 0x558be8 */

/* Supplied declaration required: FUN_0012140c. */
extern int FUN_002eb728(unsigned int *);
/* Supplied declaration required: FUN_002f30c4. */
/* Supplied declaration required: FUN_002f30e0. */
extern int FUN_002f30fc(int);


void FUN_002f3084(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558be8;
  FUN_002f30c4(param_1);
  FUN_002f30e0(param_1,param_1[0x12]);
  FUN_002f30e0(param_1,param_1[0x11]);
  temp_v0 = FUN_002eb728(param_1 + 0x48);
  temp_v0 = FUN_002f30fc(temp_v0 - 0x58);
  temp_v0 = FUN_002f30fc(temp_v0 - 0x50);
  FUN_0012140c(temp_v0 - 0x78);
  return;
}

} /* extern "C" */
