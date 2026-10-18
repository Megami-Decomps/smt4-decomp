/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126480` (_code @ 0x126480, 0x190 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern int DAT_004e316c; /* 0x4e316c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00141940. */
/* Supplied declaration required: FUN_002bcd94. */
extern char FUN_002bcdf8(unsigned char *, int, int, unsigned int);
extern int FUN_002bf85c(unsigned char *);
/* Supplied declaration required: FUN_002c1f44. */


int FUN_00126480(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned long long temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v2 = DAT_004e316c;
  temp_v4 = romwright_piece_4_4(in_s0,in_s1);
  if (DAT_004e316c != 0) {
    temp_v3 = 0;
    do {
      if (*(int *)(DAT_004e316c + temp_v3 * 4 + 0x20) == 0) {
        if (temp_v3 == -1) {
          return -1;
        }
        puVar5 = &DAT_004e1f68;
        temp_v1 = FUN_002bf85c(&DAT_004e1f68);
        if (temp_v1 != 0) {
          FUN_00141940(&DAT_004e1f68,param_1);
          if (puVar5 == (unsigned char *)0x0) {
            return temp_v3;
          }
          temp_v1 = param_1;
          FUN_002c1f44();
          if (temp_v1 != 0) {
            temp_v2 = temp_v2 + temp_v3 * 4;
            temp_v0 = FUN_002bcdf8(&DAT_004e20ec,temp_v2 + 0x20,param_1,0);
            temp_v6 = 0x3f800000;
            if (param_2 != 0) {
              VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            temp_v5 = 0;
            if (*(int *)(temp_v2 + 0x20) != 0) {
              FUN_002bcd94(*(int *)(temp_v2 + 0x20),0);
            }
            if (*(int *)(temp_v2 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v2 + 0x20) + 0xb8) = temp_v6;
            }
            if (*(int *)(temp_v2 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v2 + 0x20) + 0xb4) = temp_v5;
            }
            if (*(int *)(temp_v2 + 0x20) != 0) {
              FUN_002bcd94(*(int *)(temp_v2 + 0x20),param_3);
            }
            if (*(int *)(temp_v2 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v2 + 0x20) + 0xb8) = (int)((unsigned long long)temp_v4 >> 0x20);
            }
            if (*(int *)(temp_v2 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v2 + 0x20) + 0xb4) = (int)temp_v4;
            }
            if (temp_v0 == '\0') {
              return temp_v3;
            }
          }
          return -1;
        }
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
  }
  return -1;
}
