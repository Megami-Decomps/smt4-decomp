/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d04a4` (_code @ 0x1d04a4, 0x2a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned short DAT_00432cf8; /* 0x432cf8 */
extern unsigned short DAT_00432d1c; /* 0x432d1c */
extern unsigned short DAT_00432d40; /* 0x432d40 */
extern unsigned short DAT_00432d64; /* 0x432d64 */
extern unsigned short DAT_00432d88; /* 0x432d88 */
extern unsigned short DAT_00432dac; /* 0x432dac */
extern unsigned short DAT_00432dd0; /* 0x432dd0 */
extern unsigned short DAT_00432df4; /* 0x432df4 */
extern unsigned short DAT_00432e18; /* 0x432e18 */
extern unsigned short DAT_00432e3c; /* 0x432e3c */
extern unsigned short DAT_00432e60; /* 0x432e60 */
extern unsigned short DAT_00432e84; /* 0x432e84 */
extern short DAT_00432ea8; /* 0x432ea8 */
extern short DAT_00432ecc; /* 0x432ecc */
extern short DAT_00432ef0; /* 0x432ef0 */
extern short DAT_00432f14; /* 0x432f14 */
extern unsigned short DAT_00432f38; /* 0x432f38 */
extern unsigned short DAT_00432f5c; /* 0x432f5c */
extern unsigned short DAT_00432f80; /* 0x432f80 */
extern unsigned short DAT_00432fa4; /* 0x432fa4 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif


int FUN_001d04a4(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  
  temp_v1 = 0;
  temp_v2 = 0;
  switch(param_2) {
  case 0x34:
  case 0x43:
  case 0x48:
    temp_v1 = romwright_piece_2_2(DAT_00432e3c,DAT_00432d88);
    temp_v2 = DAT_00432ecc;
    break;
  case 0x35:
  case 0x44:
  case 0x49:
    temp_v1 = romwright_piece_2_2(DAT_00432e60,DAT_00432dd0);
    temp_v2 = DAT_00432ef0;
    break;
  case 0x36:
  case 0x45:
  case 0x47:
    temp_v1 = romwright_piece_2_2(DAT_00432e18,DAT_00432d64);
    temp_v2 = DAT_00432ea8;
    break;
  case 0x37:
  case 0x46:
  case 0x4a:
    temp_v1 = romwright_piece_2_2(DAT_00432e84,DAT_00432dac);
    temp_v2 = DAT_00432f14;
    break;
  case 0x38:
    temp_v1 = (unsigned int)DAT_00432df4;
    break;
  case 0x39:
    temp_v1 = (unsigned int)DAT_00432d40;
    break;
  case 0x3a:
    temp_v1 = (unsigned int)DAT_00432f38;
    break;
  case 0x3b:
    temp_v1 = (unsigned int)DAT_00432f5c;
    break;
  case 0x3d:
    temp_v1 = (unsigned int)DAT_00432cf8;
    break;
  case 0x40:
    temp_v1 = (unsigned int)DAT_00432d1c;
    break;
  case 0x41:
    temp_v1 = (unsigned int)DAT_00432f80;
    break;
  case 0x42:
    temp_v1 = (unsigned int)DAT_00432fa4;
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x5e4)) {
    do {
      if ((0 < (short)temp_v1) && (**(short **)(param_1 + temp_v0 * 4 + 0x594) == (short)temp_v1)) {
        return temp_v0;
      }
      if ((0 < (int)temp_v1 >> 0x10) &&
         ((int)**(short **)(param_1 + temp_v0 * 4 + 0x594) == (int)temp_v1 >> 0x10)) {
        return temp_v0;
      }
      if ((0 < temp_v2) && (**(short **)(param_1 + temp_v0 * 4 + 0x594) == temp_v2)) {
        return temp_v0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x5e4));
  }
  return 0;
}

} /* extern "C" */
