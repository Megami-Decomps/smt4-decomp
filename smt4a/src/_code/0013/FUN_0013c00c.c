/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c00c` (_code @ 0x13c00c, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
extern unsigned int FUN_00168854(unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int FUN_00184df8(unsigned int);


void FUN_0013c00c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = DAT_0059dbb4;
  temp_v3 = *(unsigned int *)(param_1 * 0x14 + 0x6357e4);
  temp_v6 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = VectorFloatToUnsigned(*(float *)(param_1 * 0x14 + 0x6357d8) * temp_v6,3);
  if (temp_v7 != 0) {
    if (temp_v7 >= 0x100) {
      temp_v7 = 0xff;
    }
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v0 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_0016c4b8(DAT_0059dbb4,0);
    temp_v2 = FUN_00168854(*(unsigned int *)(DAT_0059dbb4 + 0x52c));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = FUN_00184df8(*(unsigned int *)(DAT_0059dbb4 + 0x52c));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0014e314((temp_v3 & 0xffffff00) | temp_v7);
    temp_v0 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar7;
    temp_v4 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return;
}
