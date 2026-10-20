/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b430` (_code @ 0x11b430, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4f20(int, int);

extern unsigned char DAT_0055a520; /* 0x55a520 */

extern unsigned int *FUN_00119d20(void);
extern int FUN_0011c0e8(unsigned int *);
/* Supplied declaration required: FUN_002f4f20. */


int FUN_0011b430(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int in_r3;
  
  puVar1 = (unsigned int *)FUN_00119d20();
  *puVar1 = (unsigned int)&DAT_0055a520;
  temp_v0 = FUN_0011c0e8(puVar1 + 0x16);
  *(int *)(temp_v0 + 0x2c) = in_r3;
  FUN_002f4f20(in_r3 + 4,1);
  *(unsigned char *)(temp_v0 - 0x20) = 1;
  return temp_v0 - 0x58;
}

} /* extern "C" */
