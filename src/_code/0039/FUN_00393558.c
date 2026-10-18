/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00393558` (_code @ 0x393558, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421de4; /* 0x421de4 */
extern unsigned char DAT_00421df0; /* 0x421df0 */

extern unsigned int *FUN_002333bc(int);
/* Supplied declaration required: FUN_00234278. */
extern int FUN_0028757c(int);
/* Supplied declaration required: FUN_003932fc. */


unsigned int * FUN_00393558(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = 0;
  temp_v0 = FUN_00234278(param_1 + 0x84);
  temp_v0 = FUN_00234278(temp_v0 + 0x14);
  temp_v0 = FUN_0028757c(temp_v0 + 0x1c);
  *(unsigned char **)(temp_v0 + 0x74) = &DAT_00421de4;
  puVar2 = (unsigned int *)FUN_002333bc(temp_v0 + 0xa8);
  *puVar2 = (unsigned int)&DAT_00421df0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x390] = 0;
  puVar2[0x391] = 0;
  puVar2[0x3b2] = 0;
  puVar2[0x52b] = 0;
  puVar2[0x52c] = 0;
  puVar2[0x52e] = 0;
  puVar2[0x652] = 0;
  FUN_003932fc(puVar2 + -0xba);
  return puVar2 + -0xba;
}
