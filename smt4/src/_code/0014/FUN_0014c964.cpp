/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c964` (_code @ 0x14c964, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_00150ff4; /* 0x150ff4 */
extern unsigned char DAT_00421e14; /* 0x421e14 */
extern unsigned char DAT_00421e44; /* 0x421e44 */

extern unsigned int *FUN_001512e0(void);
/* Supplied declaration required: FUN_002c5d5c. */


unsigned int * FUN_0014c964(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001512e0();
  puVar1[0x12] = 0;
  *puVar1 = (unsigned int)&DAT_00421e14;
  puVar1[0x13] = 0;
  puVar1[0x11] = (unsigned int)&DAT_00421e44;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1 = puVar1 + 0x36;
  FUN_002c5d5c(puVar1,&LAB_00150ff4,0x340,8);
  return puVar1 + -0x36;
}

} /* extern "C" */
