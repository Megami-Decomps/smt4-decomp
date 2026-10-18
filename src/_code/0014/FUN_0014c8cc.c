/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c8cc` (_code @ 0x14c8cc, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00150c1c; /* 0x150c1c */
extern unsigned char LAB_00150e88; /* 0x150e88 */
extern unsigned char DAT_00421aa8; /* 0x421aa8 */
extern unsigned char DAT_00421adc; /* 0x421adc */
extern unsigned char DAT_00421af0; /* 0x421af0 */

extern unsigned int *FUN_001511e4(void);
/* Supplied declaration required: FUN_002c5f58. */


void FUN_0014c8cc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_001511e4();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  *puVar1 = (unsigned int)&DAT_00421aa8;
  puVar1[0x14] = (unsigned int)&DAT_00421af0;
  puVar1[0x11] = (unsigned int)&DAT_00421adc;
  puVar1[0x16] = 0;
  puVar1 = puVar1 + 0x3c;
  FUN_002c5f58(puVar1,&LAB_00150e88,0x10,4);
  puVar1 = puVar1 + 0x10;
  FUN_002c5f58(puVar1,&LAB_00150c1c,0xc,4);
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
