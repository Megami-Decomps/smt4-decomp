/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103fd4` (_code @ 0x103fd4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char LAB_00104000; /* 0x104000 */
extern unsigned char DAT_005585c0; /* 0x5585c0 */

extern unsigned int *FUN_002e9f80(void);
extern int constructObj0055affc(unsigned int *);
extern int FUN_002ea100(int, unsigned char *);


void FUN_00103fd4(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = (unsigned int)&DAT_005585c0;
  temp_v0 = constructObj0055affc(puVar1 + 5);
  temp_v0 = FUN_002ea100(temp_v0 + 8,&LAB_00104000);
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}

} /* extern "C" */
