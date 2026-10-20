/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b588` (_code @ 0x10b588, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_002f4bfc(unsigned int *);

extern unsigned char DAT_00558cf4; /* 0x558cf4 */

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002eb624(unsigned int *);
/* Supplied declaration required: FUN_002f4bfc. */


int FUN_0010b588(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558cf4;
  FUN_002f4bfc(param_1);
  for (temp_v0 = param_1[0xe]; temp_v0 != param_1[0xf]; temp_v0 = temp_v0 + 4) {
  }
  FUN_002e6e14();
  temp_v0 = FUN_002eb624(param_1 + 1);
  return temp_v0 - 4;
}

} /* extern "C" */
