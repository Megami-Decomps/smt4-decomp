/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e20e8` (_code @ 0x2e20e8, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c0944. */
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_002e20e8(void)

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
  
  temp_v1 = FUN_002c08f0();
  temp_v0 = DAT_0044ea00;
  temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 8) == 0.0f) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1e,0)) {
    temp_v3 = *(unsigned int *)(temp_v1 + 4);
    temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v8 = VectorFloatToUnsigned(*(float *)(temp_v1 + 8) * temp_v7,3);
    if (temp_v8 >= 0x100) {
      temp_v8 = 0xff;
    }
    temp_v1 = FUN_002c5d80(1,0);
    piVar7 = (int *)(temp_v0 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c1b64(DAT_0044ea00,0);
    temp_v2 = FUN_002c15d4(*(unsigned int *)(DAT_0044ea00 + 0x528));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v2 = FUN_002c15ac(*(unsigned int *)(DAT_0044ea00 + 0x528));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(temp_v6 >> 0x16) & 3);
    FUN_002c0944((temp_v3 & 0xffffff00) | temp_v8);
    temp_v0 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar7;
    temp_v4 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
  }
  return 0;
}
