/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219d4c` (_code @ 0x219d4c, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00257614. */
/* Supplied declaration required: FUN_002698f4. */


void FUN_00219d4c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *(int *)(param_1 + 0x24);
  temp_v2 = *(int *)(temp_v0 + 0xb8);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = *(int *)(param_1 + 0x1c);
  }
  if (temp_v2 == 0 || temp_v1 == 0) {
    *(unsigned int *)(temp_v0 + 200) = 0;
    *(unsigned int *)(temp_v0 + 0xcc) = 0;
    *(unsigned int *)(temp_v0 + 0xd0) = 0x43c80000;
    *(unsigned int *)(temp_v0 + 0xd4) = 0x43700000;
    *(unsigned int *)(temp_v0 + 0xc4) = *(unsigned int *)(temp_v0 + 0x28);
  }
  if (temp_v2 < temp_v1) {
    *(unsigned char *)(temp_v0 + 0xc3) = 0;
  }
  else {
    temp_v1 = temp_v0;
    FUN_002698f4(temp_v0,temp_v0 + 0x24);
    FUN_00257614(*(unsigned int *)(param_1 + 0x10));
    DAT_004ea92c = DAT_004ea91c;
    DAT_004ea930 = DAT_004ea920;
    DAT_004ea934 = DAT_004ea924;
    DAT_004ea938 = DAT_004ea928;
    FUN_00257614(temp_v1);
    DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
    DAT_004ea920 = DAT_004ea920 * DAT_004ea930;
    DAT_004ea924 = DAT_004ea924 * DAT_004ea934;
    DAT_004ea928 = DAT_004ea928 * DAT_004ea938;
    temp_v3 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
    temp_v6 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
    temp_v4 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
    temp_v5 = VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
    *(char *)(temp_v0 + 0xc0) = (char)temp_v5;
    *(char *)(temp_v0 + 0xc1) = (char)temp_v4;
    *(char *)(temp_v0 + 0xc2) = (char)temp_v6;
    *(char *)(temp_v0 + 0xc3) = (char)temp_v3;
  }
  return;
}
