/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2e54` (_code @ 0x2f2e54, 0x1a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */
extern float DAT_004724cc; /* 0x4724cc */
extern float DAT_004724d0; /* 0x4724d0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002100f8. */
/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */
extern int FUN_002c5f7c(unsigned int);


void FUN_002f2e54(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = DAT_0044ea00;
  temp_v5 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = romwright_piece_4_4((int)(temp_v6 + DAT_004724d0),(int)(temp_v5 + DAT_004724cc));
  temp_v1 = FUN_002c5f7c(1);
  piVar6 = (int *)(temp_v0 + 0x124c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c1d3c(DAT_0044ea00,0);
  if (param_6 >> 0x18 != 0) {
    VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (param_6 >> 0x18) |
            (param_6 << 0x18) | (((param_6 & 0xffff) >> 8) << 0x10) |
            (((param_6 & 0xffffff) >> 0x10) << 8);
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002c0b1c(temp_v2,temp_v2);
  }
  if (param_5 >> 0x18 != 0) {
    VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (param_5 >> 0x18) |
            (param_5 << 0x18) | (((param_5 & 0xffff) >> 8) << 0x10) |
            (((param_5 & 0xffffff) >> 0x10) << 8);
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002100f8(temp_v2,temp_v2);
  }
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  return;
}
