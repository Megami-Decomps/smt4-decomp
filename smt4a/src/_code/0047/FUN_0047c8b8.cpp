/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c8b8` (_code @ 0x47c8b8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0047c65c(unsigned int *);
int FUN_0047daf4(...);

extern unsigned char DAT_0055c6a4; /* 0x55c6a4 */
extern unsigned char DAT_0055c6b0; /* 0x55c6b0 */

/* Supplied declaration required: FUN_0047c65c. */
/* Supplied declaration required: FUN_0047daf4. */
extern int flagsDESet(int);
extern unsigned int *FUN_004d0b3c(int);


unsigned int * FUN_0047c8b8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = 0;
  temp_v0 = FUN_0047daf4(param_1 + 0x84);
  temp_v0 = FUN_0047daf4(temp_v0 + 0x14);
  temp_v0 = flagsDESet(temp_v0 + 0x1c);
  *(unsigned char **)(temp_v0 + 0x74) = &DAT_0055c6a4;
  puVar2 = (unsigned int *)FUN_004d0b3c(temp_v0 + 0xa8);
  *puVar2 = (unsigned int)&DAT_0055c6b0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x390] = 0;
  puVar2[0x391] = 0;
  puVar2[0x3b2] = 0;
  puVar2[0x52b] = 0;
  puVar2[0x52c] = 0;
  puVar2[0x52e] = 0;
  puVar2[0x701] = 0;
  FUN_0047c65c(puVar2 + -0xba);
  return puVar2 + -0xba;
}

} /* extern "C" */
