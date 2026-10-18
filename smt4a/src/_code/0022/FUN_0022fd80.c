/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fd80` (_code @ 0x22fd80, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0034a290. */
extern int FUN_004ccd5c(unsigned short, unsigned int);


unsigned long long FUN_0022fd80(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = FUN_001801a4();
  temp_v6 = 1.0f;
  puVar2 = (unsigned short *)FUN_001801a4();
  temp_v7 = 0.01f;
  temp_v4 = 0;
  do {
    temp_v1 = 0;
    switch(temp_v4) {
    case 0:
      temp_v1 = (unsigned int)*puVar2;
      break;
    case 1:
      temp_v1 = (unsigned int)puVar2[1];
      break;
    case 2:
      temp_v1 = (unsigned int)puVar2[2];
      break;
    case 3:
      temp_v1 = (unsigned int)puVar2[3];
      break;
    case 4:
      temp_v1 = (unsigned int)puVar2[4];
      break;
    case 5:
      temp_v1 = (unsigned int)puVar2[5];
      break;
    case 6:
      temp_v1 = (unsigned int)puVar2[6];
    }
    FUN_00192608();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x3a);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_0034a290();
      temp_v1 = 0;
      if (temp_v2 != 0) {
        temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 + 0x2f);
      }
      if (temp_v2 != 0 && temp_v1 != 0) {
        temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = temp_v5 * temp_v7 * temp_v6;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 7);
  temp_v1 = (unsigned int)(param_1 * (int)(temp_v6 * 100.0f)) / 100;
  temp_v0 = FUN_004ccd5c(*(unsigned short *)(temp_v0 + 0x62),param_2);
  temp_v3 = temp_v1 * temp_v0;
  temp_v2 = temp_v3 / 100;
  if ((temp_v2 == 0) && (temp_v1 != 0)) {
    temp_v2 = 1;
  }
  return romwright_piece_4_4(temp_v3 * 0x51eb851f,temp_v2);
}
