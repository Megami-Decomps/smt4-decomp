/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cc6d4` (_code @ 0x4cc6d4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(unsigned int);
extern unsigned int FUN_00203b1c(unsigned int);
extern unsigned int FUN_002e0798(void);
/* Supplied declaration required: FUN_003df7c4. */
extern short FUN_003e0154(void);
extern unsigned int FUN_003e0164(void);
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_004cd340. */


void FUN_004cc6d4(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r4;
  int temp_v6;
  unsigned int uStack_48;
  int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (param_2 < 1) {
    return;
  }
  temp_v2 = FUN_00187180(9,0);
  FUN_00192748();
  temp_v3 = FUN_00192798(temp_v2);
  uStack_3c = *(unsigned int *)(temp_v3 + 5);
  uStack_38 = romwright_piece_3_1((unsigned int)*(unsigned char *)(temp_v3 + 10) << 8,*(unsigned char *)(temp_v3 + 9));
  uStack_48 = romwright_piece_1_3(*(unsigned char *)(temp_v3 + 0xd),
                       romwright_piece_1_2(*(unsigned char *)(temp_v3 + 0xc),(unsigned short)*(unsigned char *)(temp_v3 + 0xb)));
  uStack_2c = (unaff_r4 & 0xffff0000) | 1;
  uStack_34 = uStack_48;
  uStack_30 = 0;
  temp_v0 = FUN_003e0154();
  temp_v4 = FUN_003e0164();
  temp_v3 = 0;
  temp_v5 = temp_v4;
  do {
    temp_v5 = FUN_00203b1c(temp_v5);
    if (temp_v5 <= *(unsigned short *)(param_1 + 0x62)) break;
    if (param_3 != 0) {
      temp_v6 = 0;
      do {
        FUN_004cd340(param_1 + 0xe,&uStack_3c,0);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 5);
    }
    temp_v1 = *(short *)(param_1 + 0x62) + 1;
    temp_v5 = (unsigned int)temp_v1;
    *(unsigned short *)(param_1 + 0x62) = temp_v1;
    if (temp_v5 < 100) {
      temp_v5 = FUN_002e0798();
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < param_2);
  FUN_003df7c4(0);
  if (param_3 == 0) {
    *(unsigned short *)(param_1 + 0x5e) = 0;
    *(short *)(param_1 + 0x2a) = (*(short *)(param_1 + 0x1c) - temp_v0) + *(short *)(param_1 + 0x2a);
    *(short *)(param_1 + 0x2c) =
         (*(short *)(param_1 + 0x1e) - (short)temp_v4) + *(short *)(param_1 + 0x2c);
    temp_v3 = FUN_003e46f4(0x83);
    if (temp_v3 != 0) {
      *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x1c);
      *(unsigned short *)(param_1 + 0x2c) = *(unsigned short *)(param_1 + 0x1e);
    }
    else {
      temp_v3 = FUN_003e46f4(0x82);
      if (temp_v3 != 0) {
        *(short *)(param_1 + 0x2a) =
             *(short *)(param_1 + 0x2a) +
             (short)(((int)*(short *)(param_1 + 0x1c) - (int)*(short *)(param_1 + 0x2a)) / 2);
        temp_v0 = *(short *)(param_1 + 0x2c) +
                (short)(((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x2c)) / 2);
        *(short *)(param_1 + 0x2c) = temp_v0;
        return;
      }
    }
    return;
  }
  temp_v0 = *(short *)(param_1 + 0x1e);
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x1c);
  *(unsigned short *)(param_1 + 0x5e) = 0;
  *(short *)(param_1 + 0x2c) = temp_v0;
  return;
}
