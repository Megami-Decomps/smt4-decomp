/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c9b4` (_code @ 0x14c9b4, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00150d18; /* 0x150d18 */
extern unsigned char LAB_00150f84; /* 0x150f84 */
extern unsigned char DAT_00421e60; /* 0x421e60 */
extern unsigned char DAT_00421e94; /* 0x421e94 */
extern unsigned char DAT_00421ea8; /* 0x421ea8 */

extern unsigned int *FUN_001512e0(void);
/* Supplied declaration required: FUN_002c5d5c. */


void FUN_0014c9b4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_001512e0();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  *puVar1 = (unsigned int)&DAT_00421e60;
  puVar1[0x14] = (unsigned int)&DAT_00421ea8;
  puVar1[0x11] = (unsigned int)&DAT_00421e94;
  puVar1[0x16] = 0;
  puVar1 = puVar1 + 0x3c;
  FUN_002c5d5c(puVar1,&LAB_00150f84,0x10,4);
  puVar1 = puVar1 + 0x10;
  FUN_002c5d5c(puVar1,&LAB_00150d18,0xc,4);
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v0 + 2;
    puVar1[temp_v1 - 0x29] = 0;
    puVar1[temp_v1 - 0x28] = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x10);
  return;
}
