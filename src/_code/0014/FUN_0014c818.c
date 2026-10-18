/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c818` (_code @ 0x14c818, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004219c4; /* 0x4219c4 */
extern unsigned char DAT_004219f4; /* 0x4219f4 */
extern unsigned char DAT_00421a08; /* 0x421a08 */

extern unsigned int *FUN_001511e4(void);
/* Supplied declaration required: FUN_002a49d0. */


unsigned int * FUN_0014c818(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001511e4();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = (unsigned int)&DAT_004219f4;
  puVar1[0x14] = (unsigned int)&DAT_00421a08;
  *puVar1 = (unsigned int)&DAT_004219c4;
  puVar1[0x16] = 0;
  FUN_002a49d0(puVar1 + 0x1e);
  *(unsigned char *)(puVar1 + 0x23) = 0;
  *(unsigned char *)((int)puVar1 + 0x8d) = 0;
  *(unsigned char *)((int)puVar1 + 0x8e) = 0;
  *(unsigned char *)((int)puVar1 + 0x8f) = 0;
  *(unsigned char *)(puVar1 + 0x24) = 0;
  return puVar1;
}
