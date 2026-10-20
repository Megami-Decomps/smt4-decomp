/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035bf60` (_code @ 0x35bf60, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_0016c4b8(int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
extern int FUN_00164a9c(void);
extern unsigned int FUN_00168854(unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int FUN_00184df8(unsigned int);


unsigned int FUN_0035bf60(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  
  temp_v1 = FUN_00164a9c();
  temp_v0 = DAT_0059dbb4;
  temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 8) == 0.0f) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1e,0)) {
    temp_v3 = *(unsigned int *)(temp_v1 + 4);
    temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v8 = VectorFloatToUnsigned(*(float *)(temp_v1 + 8) * temp_v7,3);
    if (temp_v8 >= 0x100) {
      temp_v8 = 0xff;
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
    VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v2 = FUN_00184df8(*(unsigned int *)(DAT_0059dbb4 + 0x52c));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v6 >> 0x16) & 3);
    FUN_0014e314((temp_v3 & 0xffffff00) | temp_v8);
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
  return 0;
}

} /* extern "C" */
