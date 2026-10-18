/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb3a8` (_code @ 0x3bb3a8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588124; /* 0x588124 */

extern int FUN_001801b8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002159f8. */
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_003bb3a8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned int temp_v4;
  
  temp_v1 = FUN_00236038(0);
  puVar3 = (unsigned short *)FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v4 = 0;
  temp_v3 = FUN_001801b8(temp_v1,(unsigned int)puVar3 & 0xff);
  if (temp_v3 == 0) {
    temp_v2 = 0;
    temp_v4 = 5;
  }
  FUN_002159f8(temp_v1,(unsigned int)puVar3 & 0xff);
  if (DAT_00588124 != 0) {
    temp_v3 = 0;
    do {
      puVar6 = *(unsigned short **)(DAT_00588124 + temp_v3 * 4 + 0x28);
      temp_v0 = *puVar6;
      if (temp_v0 == temp_v1) {
        puVar6 = (unsigned short *)(unsigned int)(unsigned char)puVar6[0x29];
      }
      if (temp_v0 == temp_v1 && puVar6 == puVar3) {
        temp_v3 = DAT_00588124 + temp_v3 * 0xc;
        *(unsigned int *)(temp_v3 + 0x110) = temp_v4;
        *(unsigned int *)(temp_v3 + 0x108) = 0;
        *(unsigned int *)(temp_v3 + 0x10c) = temp_v2;
        return 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
  }
  return 1;
}
