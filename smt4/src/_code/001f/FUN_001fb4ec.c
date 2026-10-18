/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fb4ec` (_code @ 0x1fb4ec, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00448c64; /* 0x448c64 */
extern float DAT_00448c68; /* 0x448c68 */
extern int DAT_00448c6c; /* 0x448c6c */

/* Supplied declaration required: FUN_0028250c. */


void FUN_001fb4ec(void)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  DAT_00448c6c = 0;
  temp_v1 = 32.0f;
  temp_v2 = 48.0f;
  temp_v0 = DAT_00448c68 + 0.1f;
  switch(DAT_00448c64) {
  default:
    return;
  case 1:
    break;
  case 2:
    temp_v0 = DAT_00448c68 + 0.2f;
    break;
  case 3:
    temp_v0 = DAT_00448c68 + 0.05f;
    break;
  case 4:
    DAT_00448c68 = temp_v0;
    FUN_0028250c();
    DAT_00448c6c = (int)(temp_v0 * temp_v2);
    return;
  case 5:
    temp_v0 = DAT_00448c68 + 0.2f;
    DAT_00448c68 = temp_v0;
    FUN_0028250c();
    DAT_00448c6c = (int)(temp_v0 * temp_v2);
    return;
  case 6:
    temp_v0 = DAT_00448c68 + 0.05f;
    DAT_00448c68 = temp_v0;
    FUN_0028250c();
    DAT_00448c6c = (int)(temp_v0 * temp_v2);
    return;
  }
  DAT_00448c68 = temp_v0;
  FUN_0028250c();
  DAT_00448c6c = (int)(temp_v0 * temp_v1);
  return;
}
