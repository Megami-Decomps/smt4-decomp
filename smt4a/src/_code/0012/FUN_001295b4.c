/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001295b4` (_code @ 0x1295b4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005598d8; /* 0x5598d8 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_001294c4. */
/* Supplied declaration required: FUN_0030cbdc. */
/* Supplied declaration required: FUN_0030ccc0. */


int FUN_001295b4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005598d8;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_001294c4(param_1);
  temp_v0 = FUN_0030cbdc(param_1 + 0x3a);
  temp_v0 = FUN_0030cbdc(temp_v0 - 0xd8);
  return temp_v0 - 0x10;
}
