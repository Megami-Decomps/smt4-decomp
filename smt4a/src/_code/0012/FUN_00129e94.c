/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129e94` (_code @ 0x129e94, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559a40; /* 0x559a40 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_00129de8. */
/* Supplied declaration required: FUN_0030cb80. */
/* Supplied declaration required: FUN_0030ccc0. */


int FUN_00129e94(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559a40;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_00129de8(param_1);
  temp_v0 = FUN_0030cb80(param_1 + 8);
  temp_v0 = FUN_0030cb80(temp_v0 - 0x14);
  return temp_v0 - 0xc;
}
