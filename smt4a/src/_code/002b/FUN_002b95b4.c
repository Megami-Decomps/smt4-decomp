/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b95b4` (_code @ 0x2b95b4, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005821d0; /* 0x5821d0 */
extern float DAT_005821d4; /* 0x5821d4 */
extern int DAT_005821d8; /* 0x5821d8 */

/* Supplied declaration required: FUN_001bc124. */


void FUN_002b95b4(void)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  DAT_005821d8 = 0;
  temp_v1 = 32.0f;
  temp_v2 = 48.0f;
  temp_v0 = DAT_005821d4 + 0.1f;
  switch(DAT_005821d0) {
  default:
    return;
  case 1:
    break;
  case 2:
    temp_v0 = DAT_005821d4 + 0.2f;
    break;
  case 3:
    temp_v0 = DAT_005821d4 + 0.05f;
    break;
  case 4:
    DAT_005821d4 = temp_v0;
    FUN_001bc124();
    DAT_005821d8 = (int)(temp_v0 * temp_v2);
    return;
  case 5:
    temp_v0 = DAT_005821d4 + 0.2f;
    DAT_005821d4 = temp_v0;
    FUN_001bc124();
    DAT_005821d8 = (int)(temp_v0 * temp_v2);
    return;
  case 6:
    temp_v0 = DAT_005821d4 + 0.05f;
    DAT_005821d4 = temp_v0;
    FUN_001bc124();
    DAT_005821d8 = (int)(temp_v0 * temp_v2);
    return;
  }
  DAT_005821d4 = temp_v0;
  FUN_001bc124();
  DAT_005821d8 = (int)(temp_v0 * temp_v1);
  return;
}
