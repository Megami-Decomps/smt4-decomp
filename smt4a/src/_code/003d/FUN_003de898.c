/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de898` (_code @ 0x3de898, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_001abac8(unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_003df390(unsigned int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003de898(int param_1)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 100;
  do {
    pbVar2 = (unsigned char *)FUN_001abac8(temp_v3 & 0xffff);
    if (((*pbVar2 & 1) == 0) && (temp_v1 = FUN_003df390(temp_v3 & 0xffff), temp_v1 != 0)) {
      temp_v2 = temp_v3;
      FUN_001ad9b4();
      if ((temp_v2 != 0) &&
         ((*(short *)(temp_v2 + 0x120) != 0 && (*(short *)(temp_v2 + 0x120) <= param_1)))) {
        temp_v2 = temp_v3;
        FUN_001ad9b4();
        temp_v0 = 0;
        if (temp_v2 != 0) {
          temp_v0 = *(short *)(temp_v2 + 0xec);
        }
        if (temp_v2 != 0 && temp_v0 != 0) {
          FUN_003fd63c();
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 400);
  return;
}
