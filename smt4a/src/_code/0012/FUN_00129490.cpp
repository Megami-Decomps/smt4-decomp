/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129490` (_code @ 0x129490, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001293b0(unsigned int *);
int FUN_002eb624(...);
int FUN_0030ccc0(unsigned char *, unsigned int *);

extern unsigned char DAT_005598b4; /* 0x5598b4 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_001293b0. */
/* Supplied declaration required: FUN_002eb624. */
/* Supplied declaration required: FUN_0030ccc0. */


int FUN_00129490(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005598b4;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_001293b0(param_1);
  temp_v0 = FUN_002eb624(param_1 + 0x4f);
  temp_v0 = FUN_002eb624(temp_v0 - 300);
  return temp_v0 - 0x10;
}

} /* extern "C" */
