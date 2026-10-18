/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c888` (_code @ 0x14c888, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00150fc8(); /* 0x150fc8 */
extern unsigned char DAT_00421d40; /* 0x421d40 */

extern int FUN_00150f24(unsigned int *);
extern unsigned int *FUN_002a7b78(int);
/* Supplied declaration required: FUN_002b4e8c. */
/* Supplied declaration required: FUN_002c5d5c. */


unsigned int * FUN_0014c888(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = 0;
  temp_v0 = FUN_00150f24(param_1 + 1);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  puVar2 = (unsigned int *)FUN_002a7b78(temp_v0 + 0x5c);
  *puVar2 = (unsigned int)&DAT_00421d40;
  puVar2[9] = (unsigned int)(puVar2 + 9);
  puVar2[8] = 0;
  puVar2[10] = (unsigned int)(puVar2 + 9);
  puVar2[0xb] = 0;
  puVar2 = puVar2 + 0xc;
  FUN_002c5d5c(puVar2,FUN_00150fc8,0x50,0x20);
  FUN_002b4e8c(puVar2 + -1,puVar2,0xa00,0x50);
  return puVar2 + -0x24;
}
