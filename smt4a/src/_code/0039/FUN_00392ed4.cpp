/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00392ed4` (_code @ 0x392ed4, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002a1fb4(unsigned short *, unsigned char [92], int);
int FUN_002b3c9c(...);
int FUN_002ff6f8(unsigned char [92], int, int);
int FUN_0038136c(unsigned int, unsigned int);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002a1fb4. */
/* Supplied declaration required: FUN_002b3c9c. */
/* Supplied declaration required: FUN_002ff6f8. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_00392ed4(int param_1)

{
/* irregular: irregular input(s): in_d10, in_fpscr; 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned short *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  unsigned long long in_d10;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  unsigned char temp_v17 [92];
  
  temp_v15 = (unsigned int)((unsigned long long)in_d10 >> 0x20);
  temp_v4 = *(unsigned int *)(param_1 + 0x34);
  puVar4 = (unsigned int *)**(unsigned int **)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x28) <= *(int *)(temp_v4 + 0x34)) || (*(int *)(temp_v4 + 0x34) == 0)) {
    temp_v5 = *(int *)(temp_v4 + 0x38);
    temp_v2 = temp_v4;
    FUN_0038136c(temp_v4,temp_v4 + 0x24);
    temp_v1 = *(unsigned int *)(param_1 + 0x24);
    DAT_006472ec = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f0 = (float)VectorUnsignedToFloat
                                    ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f4 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f8 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472ec = DAT_006472ec * 0.003921569f;
    DAT_006472f0 = DAT_006472f0 * 0.003921569f;
    DAT_006472f4 = DAT_006472f4 * 0.003921569f;
    DAT_006472f8 = DAT_006472f8 * 0.003921569f;
    temp_v11 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472dc = temp_v11 * 0.003921569f * DAT_006472ec;
    DAT_006472e0 = temp_v8 * 0.003921569f * DAT_006472f0;
    DAT_006472e4 = temp_v6 * 0.003921569f * DAT_006472f4;
    DAT_006472e8 = temp_v10 * 0.003921569f * DAT_006472f8;
    temp_v13 = CONCAT44(DAT_006472dc,0x3b808081);
    temp_v14 = CONCAT44(DAT_006472e4,DAT_006472e0);
    temp_v16 = CONCAT44(temp_v15,DAT_006472e8);
    FUN_002ff6f8(temp_v17,param_1,param_1 + 0x10);
    if (0 < temp_v5) {
      temp_v16 = romwright_piece_4_4(0x437f0000,(int)temp_v16);
    }
    temp_v3 = 0;
    if (temp_v3 < temp_v5) {
      do {
        if (0 < (int)puVar4[5]) {
          puVar6 = (unsigned short *)*puVar4;
          FUN_002a1fb4(puVar6 + 8,temp_v17,0);
          temp_v2 = puVar4[6];
          temp_v8 = (float)VectorUnsignedToFloat
                                    ((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = (float)temp_v13;
          temp_v10 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          DAT_006472ec = (float)((unsigned long long)temp_v13 >> 0x20);
          DAT_006472f0 = (float)temp_v14;
          DAT_006472f4 = (float)((unsigned long long)temp_v14 >> 0x20);
          DAT_006472f8 = (float)temp_v16;
          DAT_006472dc = temp_v6 * temp_v12 * DAT_006472ec;
          DAT_006472e0 = temp_v8 * temp_v12 * DAT_006472f0;
          DAT_006472e4 = temp_v11 * temp_v12 * DAT_006472f4;
          DAT_006472e8 = temp_v10 * temp_v12 * DAT_006472f8;
          temp_v6 = (float)((unsigned long long)temp_v16 >> 0x20);
          temp_v7 = VectorFloatToUnsigned(DAT_006472dc * temp_v6,3);
          temp_v9 = VectorFloatToUnsigned(DAT_006472e0 * temp_v6,3);
          temp_v2 = VectorFloatToUnsigned(DAT_006472e4 * temp_v6,3);
          temp_v1 = VectorFloatToUnsigned(DAT_006472e8 * temp_v6,3);
          *(unsigned int *)(puVar6 + 0x28) =
               (temp_v1 & 0xff) | ((temp_v2 & 0xff) << 8) | ((temp_v9 & 0xff) << 0x10) | (temp_v7 << 0x18)
          ;
          if (*(char *)(temp_v4 + 0x5c) != '\0') {
            temp_v0 = *puVar6 | 0x100;
          }
          else {
            temp_v0 = *puVar6 & 0xfeff;
          }
          *puVar6 = temp_v0;
          FUN_002b3c9c(puVar6,*(unsigned int *)(temp_v4 + 0x28) & 0xffff);
        }
        temp_v3 = temp_v3 + 1;
        puVar4 = puVar4 + 0xc;
      } while (temp_v3 < temp_v5);
    }
  }
  return;
}

} /* extern "C" */
