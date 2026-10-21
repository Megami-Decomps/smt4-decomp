/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00393340` (_code @ 0x393340, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int timeInitializeActiveState(...);
int FUN_003930e4(unsigned int *);

extern unsigned char DAT_0042219c; /* 0x42219c */
extern unsigned char DAT_004221a8; /* 0x4221a8 */

extern unsigned int *FUN_00233228(int);
/* Supplied declaration required: timeInitializeActiveState. */
extern int FUN_00287314(int);
/* Supplied declaration required: FUN_003930e4. */


unsigned int * FUN_00393340(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = 0;
  temp_v0 = timeInitializeActiveState(param_1 + 0x84);
  temp_v0 = timeInitializeActiveState(temp_v0 + 0x14);
  temp_v0 = FUN_00287314(temp_v0 + 0x1c);
  *(unsigned char **)(temp_v0 + 0x74) = &DAT_0042219c;
  puVar2 = (unsigned int *)FUN_00233228(temp_v0 + 0xa8);
  *puVar2 = (unsigned int)&DAT_004221a8;
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
  FUN_003930e4(puVar2 + -0xba);
  return puVar2 + -0xba;
}

} /* extern "C" */
