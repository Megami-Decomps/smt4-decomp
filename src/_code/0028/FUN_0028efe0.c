/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028efe0` (_code @ 0x28efe0, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0026ad50. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bd348. */
extern unsigned int FUN_002be828(unsigned short, int);
/* Supplied declaration required: FUN_002bf86c. */


void FUN_0028efe0(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [132];
  
  temp_v4 = 0;
  if (param_3 != 0) {
    temp_v3 = param_1;
    FUN_002b6700();
    if (temp_v3 != 0) {
      temp_v4 = temp_v3 + 0x38;
    }
    FUN_002bf86c(temp_v5,temp_v4);
    FUN_002bd348(temp_v5,temp_v6);
    FUN_00295904(0x28,temp_v6);
  }
  else {
    temp_v3 = param_1;
    FUN_002b6700();
    if (temp_v3 != 0) {
      temp_v4 = temp_v3 + 8;
    }
    FUN_00295904(0x28,temp_v4);
  }
  if ((param_2 != 0) && (FUN_002b6700(), param_1 != 0)) {
    temp_v4 = 0;
    do {
      temp_v3 = param_1 + temp_v4 * 8;
      switch(*(unsigned short *)(temp_v3 + 0x16c)) {
      case 1:
      case 7:
        temp_v0 = FUN_002be828(*(unsigned short *)(temp_v3 + 0x16e),param_3);
        FUN_002bf86c(temp_v5,temp_v0);
        temp_v1 = temp_v4;
        FUN_00295904(temp_v1,temp_v5);
        FUN_0029f088(temp_v4 + 0x18,*(unsigned int *)(temp_v3 + 0x170),0xffffffff,0);
        break;
      case 2:
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + 0x16e);
        FUN_002bd25c(temp_v2);
        FUN_002bf86c(temp_v5,temp_v2);
        temp_v1 = temp_v4 + 8;
        FUN_00295904(temp_v1,temp_v5);
        FUN_0029f088(temp_v4 + 0x18,*(unsigned int *)(temp_v3 + 0x170),0xffffffff,0);
        break;
      case 5:
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + 0x16e);
        FUN_0026ad50(temp_v2);
        FUN_00295904(temp_v4 + 0x29,temp_v2);
        break;
      case 6:
        FUN_0029f088(temp_v4 + 0x18,*(unsigned int *)(temp_v3 + 0x170),0xffffffff,0);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
  }
  return;
}
