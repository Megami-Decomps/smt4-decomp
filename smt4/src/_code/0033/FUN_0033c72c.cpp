/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c72c` (_code @ 0x33c72c, 0x52c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageKindForward(...);
int categoryGetColor(int);
int FUN_002b6758(...);
int FUN_002ba12c(int);
int drawSetColorFromRGBA8(void);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int efctSetSpeed(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int __aeabi_idivmod(...);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned char LAB_0033cc78; /* 0x33cc78 */
extern unsigned char DAT_00400498; /* 0x400498 */
extern char s__B_B_B_B_00434378[17]; /* 0x434378 */
extern int g_titleScene; /* 0x44ea00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: messageKindForward. */
/* Supplied declaration required: categoryGetColor. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_0033c72c(int param_1,int param_2,int param_3)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 17 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar8;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned int in_s0;
  int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned long long temp_v17;
  unsigned char temp_v18 [44];
  unsigned long long temp_v19;
  
  temp_v12 = romwright_piece_4_4(in_s1,in_s0);
  efctSetSpeed();
  temp_v13 = 0.29f;
  temp_v10 = temp_v13;
  FUN_002ba12c(g_titleScene);
  temp_v9 = (int)temp_v13;
  temp_v13 = temp_v10;
  FUN_002ba12c(g_titleScene);
  temp_v16 = (int)temp_v10;
  FUN_002ba12c(g_titleScene);
  temp_v15 = g_titleScene;
  temp_v14 = romwright_piece_4_4(in_s2,(int)temp_v13);
  temp_v1 = packNibblesAndByte(6,1,0);
  piVar8 = (int *)(temp_v15 + 0x12ac);
  temp_v7 = *piVar8;
  temp_v2 = piVar8[temp_v7 + 2];
  *piVar8 = temp_v7 + 1;
  piVar8[temp_v7 + 3] = temp_v1;
  if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v15 + 0x12c8))();
    *(unsigned char *)(temp_v15 + 0x12c4) = 0;
  }
  temp_v15 = (int)(float)((unsigned long long)temp_v12 >> 0x20);
  temp_v19 = romwright_piece_4_4(temp_v16,temp_v15);
  temp_v13 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf288(2,0x14,0x56,(int)((float)temp_v12 + temp_v13),temp_v15,param_2);
  temp_v15 = g_titleScene;
  piVar8 = (int *)(g_titleScene + 0x12ac);
  temp_v2 = *piVar8;
  temp_v1 = piVar8[temp_v2 + 2];
  *piVar8 = temp_v2 - 1;
  if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v1 != piVar8[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v15 + 0x12c8))(piVar8[temp_v2 + 1]);
    *(unsigned char *)(temp_v15 + 0x12c4) = 0;
  }
  temp_v13 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf288(2,0x14,0x57,(int)((float)temp_v12 + temp_v13),(int)temp_v19,param_2);
  temp_v13 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf288(2,0x14,0x58,(int)((float)temp_v12 + temp_v13),(int)temp_v19,param_2);
  temp_v5 = (unsigned int)((unsigned long long)temp_v19 >> 0x20);
  if (*(int *)(param_3 + 0x2c) != 0) {
    categoryGetColor((int)(short)*(unsigned int *)(param_3 + *(int *)(param_3 + 0x30) * 4));
    drawSetColorFromRGBA8();
  }
  temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b6758((int)(short)*(unsigned int *)(param_3 + 0x3c),
               (int)(*(float *)(param_1 + 0x300) + (float)temp_v12 + temp_v13),
               (int)(*(float *)(param_1 + 0x304) + (float)((unsigned long long)temp_v12 >> 0x20)),param_2 + 5,0
              );
  FUN_002bed3c();
  if (*(char *)(param_3 + 0x38) != '\0') {
    temp_v15 = 0;
    do {
      if (*(int *)(param_3 + 0x2c) <= temp_v15) break;
      __aeabi_idivmod(*(int *)(param_3 + 0x30) + temp_v15);
      temp_v13 = (float)VectorSignedToFloat((int)temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = param_1 + temp_v15 * 8;
      messageKindForward((int)(short)*(unsigned int *)(param_3 + temp_v4 * 4),
                   (int)(*(float *)(temp_v1 + 0x308) + (float)temp_v12 + temp_v13),
                   (int)(*(float *)(temp_v1 + 0x30c) + (float)((unsigned long long)temp_v12 >> 0x20)),param_2 + 5
                  );
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < 3);
  }
  else {
    temp_v15 = 0;
    temp_v17 = (unsigned long long)(unsigned int)(*(float *)(param_3 + 0x34) * 3.0f);
    do {
      if (*(int *)(param_3 + 0x2c) + 1 <= temp_v15) break;
      __aeabi_idivmod(*(int *)(param_3 + 0x30) + temp_v15,*(int *)(param_3 + 0x2c));
      efctSetSpeed();
      temp_v1 = param_1 + temp_v15 * 8;
      temp_v13 = (float)VectorSignedToFloat((int)temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
      messageKindForward((int)(short)*(unsigned int *)(param_3 + temp_v3 * 4),
                   (int)(((*(float *)(temp_v1 + 0x308) + (float)temp_v12) - (float)temp_v17) + temp_v13),
                   (int)(*(float *)(temp_v1 + 0x30c) + (float)((unsigned long long)temp_v12 >> 0x20)),param_2 + 5
                  );
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < 4);
  }
  temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
  efctSetSpeed();
  temp_v15 = 0;
  temp_v11 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
  temp_v8 = (temp_v11 & 0xff) | 0xffffff00;
  do {
    temp_v1 = param_1 + temp_v15 * 0x10;
    VectorSignedToFloat(0xfb - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v1 + 0x32c) + (float)((unsigned long long)temp_v12 >> 0x20)),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v1 + 0x328) + (float)temp_v12) + temp_v9,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,temp_v8,*(unsigned int *)(s__B_B_B_B_00434378 + temp_v15 * 4));
    if (temp_v15 != 0) {
      if (temp_v15 != 1) {
        if (temp_v15 == 2) {
          temp_v0 = *(char *)(param_3 + 0x50);
          goto joined_r0x0033cb90;
        }
        if (temp_v15 == 3) {
          if (*(char *)(param_3 + 0x51) == '\0') {
            textFormatBuffer(temp_v18,&LAB_0033cc78);
            goto LAB_0033cbe4;
          }
          temp_v5 = 0x33cc70;
          textFormatBuffer(temp_v18,temp_v5);
        }
      }
      else {
        temp_v0 = *(char *)(param_3 + 0x4f);
joined_r0x0033cb90:
        temp_v2 = (int)temp_v0;
        if (temp_v2 != 0) {
joined_r0x0033cb70:
          if (temp_v2 < 0) {
            puVar4 = &DAT_00400498;
            temp_v2 = -temp_v2;
          }
          else {
            puVar4 = (unsigned char *)0x4004a0;
          }
          textFormatBuffer(temp_v18,puVar4,temp_v2);
        }
        else {
          temp_v5 = 0x400490;
          textFormatBuffer(temp_v18,temp_v5);
        }
      }
    }
    else {
      temp_v2 = (int)*(char *)(param_3 + 0x4e);
      if (temp_v2 != 0) goto joined_r0x0033cb70;
      temp_v5 = 0x400490;
      textFormatBuffer(temp_v18,temp_v5);
    }
LAB_0033cbe4:
    VectorSignedToFloat(0xfb - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v8;
    if (*(char *)(param_3 + 0x40) == '\0') {
      temp_v6 = temp_v11 & 0xff;
    }
    VectorSignedToFloat((int)(*(float *)(temp_v1 + 0x334) + (float)((unsigned long long)temp_v12 >> 0x20)),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v1 + 0x330) + (float)temp_v12) + temp_v9,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,temp_v6,temp_v18);
    temp_v15 = temp_v15 + 1;
    if (temp_v15 >= 4) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
