/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003222fc` (_code @ 0x3222fc, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int, unsigned int, unsigned int);
int FUN_0016c4b8(int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern float DAT_005c10c4; /* 0x5c10c4 */
extern float DAT_005c10c8; /* 0x5c10c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0014e314. */
extern int FUN_001692ac(unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */


void FUN_003222fc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = DAT_0059dbb4;
  temp_v5 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = romwright_piece_4_4((int)(temp_v6 + DAT_005c10c8),(int)(temp_v5 + DAT_005c10c4));
  temp_v4 = (param_5 << 0x18) | (((param_5 & 0xffff) >> 8) << 0x10) |
          (((param_5 & 0xffffff) >> 0x10) << 8) | (param_5 >> 0x18);
  temp_v1 = FUN_001692ac(1);
  piVar5 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_0016c4b8(DAT_0059dbb4,0);
  VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0014e314(temp_v4,temp_v4,
               (param_6 << 0x18) | (((param_6 & 0xffff) >> 8) << 0x10) |
               (((param_6 & 0xffffff) >> 0x10) << 8) | (param_6 >> 0x18));
  temp_v0 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
