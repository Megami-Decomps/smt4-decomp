/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012272c` (_code @ 0x12272c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b2f0; /* 0x55b2f0 */

/* Supplied declaration required: FUN_001a089c. */
extern unsigned int *FUN_002e760a(unsigned int);
extern int FUN_002f5928(unsigned int *);


int FUN_0012272c(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_0055b2f0;
  temp_v0 = FUN_002f5928(param_1 + 2);
  *(unsigned char *)(temp_v0 + 0x34) = param_3;
  puVar2 = (unsigned int *)FUN_002e760a(8);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int **)(temp_v0 - 4) = puVar2;
  FUN_001a089c(puVar2,(int)*(char *)(temp_v0 + 0x34));
  return temp_v0 - 8;
}
