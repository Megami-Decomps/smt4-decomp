/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ea70` (_code @ 0x34ea70, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001654d8(void);
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: FUN_0035d8f0. */
/* Supplied declaration required: FUN_003a7a88. */


void FUN_0034ea70(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  
  if (*(char *)(param_1 + 0x4b0f) == '\0') {
    return;
  }
  temp_v1 = FUN_001834a4(0xd,0x1de);
  temp_v6 = *(int *)(param_1 + 0x41a0);
  temp_v5 = *(int *)(param_1 + 0x41a4);
  temp_v2 = *(int *)(param_1 + 0x4b10);
  if (*(int *)(param_1 + 0x4b28) == 1) {
    temp_v3 = 0xe;
  }
  else {
    temp_v3 = 0xb;
  }
  temp_v8 = 0;
  if (temp_v2 < 7) {
    temp_v9 = 0;
    temp_v5 = temp_v5 + *(short *)(*(int *)(temp_v1 + 0xc) + 2);
  }
  else if (temp_v2 < temp_v3) {
    if (*(int *)(param_1 + 0x4b28) != 1) {
      temp_v3 = (int)*(short *)(*(int *)(temp_v1 + 0xc) + 2);
      temp_v7 = (float)VectorSignedToFloat(temp_v2 - 7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (unsigned long long)(unsigned int)(temp_v7 * 0.25f);
      temp_v5 = temp_v5 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) * (7 - temp_v2) + temp_v3;
    }
    else {
      temp_v2 = (int)*(short *)(param_1 + 0x4b14);
      FUN_003a7a88(temp_v2,1);
      if (temp_v2 == 0) {
        return;
      }
      temp_v2 = *(int *)(param_1 + 0x4b10) - 5;
      if (temp_v2 >= 8) {
        temp_v2 = 7;
      }
      temp_v0 = (int)**(short **)(temp_v1 + 0xc) / 2;
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (int)(((long long)(int)temp_v0 * -0x6db6db6d + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
      temp_v9 = CONCAT44(temp_v8,temp_v7 * 0.14285715f);
      temp_v6 = temp_v6 + (temp_v0 - ((temp_v3 >> 2) - (temp_v3 >> 0x1f)) * temp_v2);
    }
  }
  else {
    temp_v2 = FUN_001654d8();
    temp_v6 = temp_v6 + temp_v2;
    temp_v9 = romwright_piece_4_4(temp_v8,*(unsigned int *)(param_1 + 0x13f0));
  }
  FUN_001677c0();
  FUN_001835b4(2,0xd,0x1e0,temp_v6,temp_v5,0x51);
  temp_v3 = FUN_001834a4(0xd,0x1dd);
  temp_v2 = DAT_0059dbb4;
  piVar8 = (int *)(DAT_0059dbb4 + 0x1318);
  temp_v4 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = 3;
  if (*(char *)(temp_v2 + 0x1330) != '\0' || temp_v4 != 3) {
    (**(romwright_code **)(temp_v2 + 0x1334))();
    *(unsigned char *)(temp_v2 + 0x1330) = 0;
  }
  FUN_0035ae58(*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v5,
               (int)**(short **)(temp_v3 + 0xc),(*(short **)(temp_v3 + 0xc))[1] + temp_v5,1);
  FUN_0035d8f0((int)*(short *)(param_1 + 0x4b14),*(short *)(temp_v1 + 8) + temp_v6,
               *(short *)(temp_v1 + 10) + temp_v5,0x15,1);
  temp_v1 = DAT_0059dbb4;
  piVar8 = (int *)(DAT_0059dbb4 + 0x1318);
  temp_v2 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = 0;
  if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 0) {
    (**(romwright_code **)(temp_v1 + 0x1334))();
    *(unsigned char *)(temp_v1 + 0x1330) = 0;
  }
  FUN_00164b5c(2,0xd,0xd,temp_v6,temp_v5,0x56);
  if ((float)(temp_v9 >> 0x20) < (float)temp_v9) {
    FUN_001677c0();
  }
  FUN_00164b5c(2,0xd,0xe,temp_v6,temp_v5,0x56);
  FUN_001677c0();
  return;
}
