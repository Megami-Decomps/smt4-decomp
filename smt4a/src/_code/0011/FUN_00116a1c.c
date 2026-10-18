/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116a1c` (_code @ 0x116a1c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559dc4; /* 0x559dc4 */
extern unsigned char DAT_0055a8f0; /* 0x55a8f0 */

extern int FUN_002ea0e4(unsigned int *);
/* Supplied declaration required: FUN_002f17e4. */
/* Supplied declaration required: FUN_002ffa20. */


void FUN_00116a1c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a8f0;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_002ea0e4(param_1 + 3);
  temp_v0 = temp_v0 + 8;
  FUN_002ffa20(temp_v0,0);
  temp_v0 = temp_v0 + 0xc;
  FUN_002ffa20(temp_v0,0);
  temp_v0 = temp_v0 + 0xc;
  FUN_002f17e4(temp_v0,0);
  *(unsigned char **)(temp_v0 - 0x2c) = &DAT_00559dc4;
  return;
}
