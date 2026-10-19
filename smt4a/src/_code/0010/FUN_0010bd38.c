/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bd38` (_code @ 0x10bd38, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 6 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned short sp70; /* 0x70: local_70 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_001211e8. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002e7682. */
extern int FUN_002e7690(int, int, unsigned int);
/* Supplied declaration required: FUN_002e76a0. */
/* Supplied declaration required: FUN_002eac34. */
/* Supplied declaration required: FUN_002ec9f4. */
/* Supplied declaration required: FUN_002ed84a. */
/* Supplied declaration required: FUN_002ed864. */
extern int FUN_002f2b30(int);
/* Supplied declaration required: FUN_002f2c0a. */
/* Supplied declaration required: FUN_002f5c18. */


void FUN_0010bd38(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned short temp_v2 [2];
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [32];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v5 = param_2 + 0x100;
  if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) != 7) {
    temp_v0 = param_2;
    FUN_002f2c0a();
    if ((temp_v0 != 0) || (temp_v0 = FUN_002f2b30(param_2), temp_v0 != 0)) {
      *(unsigned short *)(param_2 + 0x3c) = *(unsigned short *)(param_2 + 0x3c) | 0x80;
    }
    temp_v0 = param_3;
    FUN_002ed84a(param_3,param_2 + 0x25);
    if (temp_v0 == 0) {
      return;
    }
    temp_v0 = param_3;
    FUN_002ed84a(param_3,param_2 + 0x26);
    if (temp_v0 == 0) {
      return;
    }
    temp_v0 = FUN_002e7690(param_3,param_2 + 0x3c,1);
    if (temp_v0 == 0) {
      return;
    }
    temp_v0 = FUN_002e7682(param_3,param_2 + 0x65,1);
    if (temp_v0 == 0) {
      return;
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      temp_v0 = FUN_002e7682(param_3,param_2 + 0x28);
      if (temp_v0 == 0) {
        return;
      }
    }
    else {
      temp_v1 = 0;
      temp_v3[0] = 0;
      do {
        temp_v0 = param_3;
        FUN_002ed84a(param_3,temp_v3);
        if (temp_v0 == 0) {
          return;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
    }
    temp_v0 = FUN_002ed864(param_3);
    if (temp_v0 == 0) {
      return;
    }
    if (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 0) || ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1)) {
      if (*(int *)(param_2 + 0x60) != 0) {
        temp_v0 = FUN_002e7682(param_3,param_2 + 0x50);
        if (temp_v0 == 0) {
          return;
        }
      }
      else {
        temp_v1 = 0;
        temp_v3[0] = 0;
        do {
          temp_v0 = param_3;
          FUN_002ed84a(param_3,temp_v3);
          if (temp_v0 == 0) {
            return;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
      }
    }
    if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 2) {
      FUN_002ed84a(param_3,param_2 + 100);
    }
    temp_v6 = *(unsigned int *)(param_3 + 8);
    temp_v2[0] = romwright_piece_1_1((((unsigned int)(temp_v2[0]) >> 8) & 0xffU),*(unsigned char *)(param_2 + 0x25));
    temp_v7 = (unsigned int)(*(unsigned char *)(param_2 + 0x25) >> 4);
    if (*(int *)(param_2 + 0xd8) != 0) {
      temp_v0 = FUN_002eac34();
      temp_v0 = *(int *)(temp_v0 + 0x10);
      FUN_002e7614(temp_v3,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0x40);
      if (temp_v0 != 0) {
        FUN_002f5c18(temp_v0,*(unsigned int *)(param_2 + 0xd8),temp_v3);
        puVar2 = temp_v3;
      }
      else {
        puVar2 = *(unsigned char **)(param_2 + 0xd8);
      }
      temp_v0 = FUN_002eac34(temp_v7);
      piVar4 = *(int **)(temp_v0 + 0x14);
      FUN_002e7614(temp_v4,*(unsigned int *)(puVar2 + 0x10));
      if (piVar4 != (int *)0x0) {
        (**(romwright_code **)(*piVar4 + 8))(piVar4,puVar2,temp_v4);
        puVar2 = temp_v4;
      }
      if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) << 0x18) < 0) {
        temp_v2[0] = (unsigned short)*(unsigned int *)(puVar2 + 0x10);
        temp_v0 = FUN_002ed864(param_3,temp_v2);
        if (temp_v0 == 0) {
          FUN_002ec9f4(temp_v4);
          FUN_002ec9f4(temp_v3);
          return;
        }
      }
      FUN_002e76a0(param_3,puVar2);
      FUN_002ec9f4(temp_v4);
      FUN_002ec9f4(temp_v3);
    }
    else if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) << 0x18) < 0) {
      temp_v2[0] = 0;
      temp_v0 = FUN_002ed864(param_3,temp_v2);
      if (temp_v0 == 0) {
        return;
      }
    }
    temp_v0 = FUN_002eac34(temp_v7);
    FUN_001211e8(temp_v6,*(unsigned char *)(temp_v0 + 8));
  }
  else {
    FUN_002e76a0(param_3,*(unsigned int *)(param_2 + 0xd8));
  }
  *(unsigned int *)(temp_v5 + 0x34) = *(unsigned int *)(*(int *)(param_3 + 8) + 0x10);
  return;
}
