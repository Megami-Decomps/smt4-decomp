/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035deb0` (_code @ 0x35deb0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0057f290; /* 0x57f290 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00291038. */
extern unsigned int FUN_00340fa0(void);
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0041a080. */
/* Supplied declaration required: FUN_0045adc0. */
/* Supplied declaration required: FUN_004ff920. */


void FUN_0035deb0(void)

{
/* irregular: irregular input(s): in_s0; 19 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int unaff_r4;
  int temp_v4;
  unsigned int unaff_r5;
  unsigned int temp_v5;
  unsigned int unaff_r6;
  unsigned int *puVar9;
  unsigned int unaff_r7;
  unsigned int unaff_r8;
  int *piVar10;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_s0;
  unsigned long long temp_v8;
  
  temp_v3 = DAT_0057f290;
  if (DAT_0057f290 == 0) {
    return;
  }
  FUN_004ff920(*(unsigned int *)(*(int *)(DAT_0057f290 + 0x9208) + 4));
  if (*(int *)(temp_v3 + 0x920c) != 0) {
    return;
  }
  temp_v5 = 0x20000;
  temp_v0 = FUN_00340fa0();
  if (temp_v0 >= 0x20001) {
    temp_v5 = 0x30000;
  }
  temp_v1 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\Unite.cpp",0x23e8);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v3 + 0x920c) = temp_v2;
  FUN_0040aa6c();
  FUN_0040a908(*(unsigned int *)(temp_v3 + 0x920c),temp_v5);
  FUN_0040a918(*(unsigned int *)(temp_v3 + 0x920c),temp_v5);
  FUN_0040aad4(*(unsigned int *)(temp_v3 + 0x920c),0);
  temp_v1 = *(int *)(*(int *)(temp_v3 + 0x920c) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v1);
  FUN_003fe86c(temp_v1,0,2);
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
  temp_v8 = romwright_piece_4_4(unaff_r5,unaff_r4);
  FUN_003fd924();
  FUN_003fd7c0(temp_v1,0,2);
  temp_v3 = *(int *)(temp_v1 + 0x20c);
  if (temp_v3 != 0) {
    temp_v3 = temp_v3 + 0xc;
  }
  if ((*(short *)(*(int *)(temp_v3 + 0x30) + 0x7c) != 0) &&
     (temp_v3 = **(int **)(*(int *)(temp_v3 + 0x30) + 0x78), temp_v3 != 0)) {
    *(unsigned int *)(temp_v1 + 0xb4) = 0;
    *(unsigned int *)(temp_v1 + 0xb8) = in_s0;
    *(int *)(temp_v1 + 0xc0) = temp_v3;
    FUN_0045adc0(temp_v1 + 200,temp_v3,*(unsigned int *)(temp_v1 + 0x210));
    *(unsigned char *)(temp_v1 + 0xd4) = 2;
  }
  temp_v3 = *(int *)(temp_v1 + 0x25c);
  if (temp_v3 == 0) {
    return;
  }
  *(unsigned int *)(temp_v3 + 0x10) = 0;
  FUN_0041a080(temp_v3 + 0x1c);
  piVar10 = (int *)(temp_v3 + 0x1c);
  temp_v4 = *(int *)(temp_v3 + 4);
  *(unsigned int *)(temp_v3 + 0x1c) = 0;
  temp_v1 = 0;
  if (0 < *(int *)(temp_v4 + 8)) {
    do {
      piVar5 = *(int **)(*(int *)(temp_v4 + 0xc) + temp_v1 * 4);
      temp_v7 = (piVar5[1] & 1U) == 0;
      if (temp_v7) {
        piVar5 = (int *)*piVar5;
      }
      if (temp_v7 && piVar5 == (int *)0x0) {
        *piVar10 = *piVar10 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(temp_v4 + 8));
    if (*piVar10 != 0) {
      temp_v5 = 0x100;
      FUN_00163060(0x100,0x100,0,*piVar10 << 2,1,(int)temp_v8,(int)((unsigned long long)temp_v8 >> 0x20),
                   unaff_r6,unaff_r7,unaff_r8);
      *(unsigned int *)(temp_v3 + 0x20) = temp_v5;
      temp_v6 = 0;
      temp_v1 = 0;
      if (temp_v1 < *(int *)(temp_v4 + 8)) {
        do {
          puVar9 = *(unsigned int **)(*(int *)(temp_v4 + 0xc) + temp_v1 * 4);
          temp_v0 = puVar9[1];
          temp_v7 = (temp_v0 & 1) == 0;
          if (temp_v7) {
            temp_v0 = *puVar9;
          }
          if (temp_v7 && temp_v0 == 0) {
            puVar6 = (unsigned int *)0x10;
            FUN_00178b04(0x10,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp",0xf0);
            if (puVar6 != (unsigned int *)0x0) {
              *puVar6 = 0xffffffff;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
            }
            *puVar6 = *puVar9;
            puVar6[1] = puVar9[1];
            puVar6[2] = puVar9[2];
            temp_v0 = puVar9[3];
            FUN_00291038();
            puVar6[3] = temp_v0;
            *(unsigned int **)(*(int *)(temp_v3 + 0x20) + temp_v6 * 4) = puVar6;
            temp_v6 = temp_v6 + 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(temp_v4 + 8));
      }
      return;
    }
  }
  *(unsigned int *)(temp_v3 + 0x20) = 0;
  return;
}
