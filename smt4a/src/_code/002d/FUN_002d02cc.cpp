/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d02cc` (_code @ 0x2d02cc, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int mathPositionHeadingDegrees(void);

extern float DAT_005f0c94; /* 0x5f0c94 */
extern unsigned int DAT_005f0c98; /* 0x5f0c98 */
extern float DAT_005f0c9c; /* 0x5f0c9c */
extern float DAT_005f0ca0; /* 0x5f0ca0 */
extern unsigned int DAT_005f0ca4; /* 0x5f0ca4 */
extern unsigned int DAT_005f0ca8; /* 0x5f0ca8 */
extern unsigned char DAT_005f0cac; /* 0x5f0cac */
extern unsigned int DAT_005f0cec; /* 0x5f0cec */
extern unsigned int DAT_005f0d28; /* 0x5f0d28 */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: mathPositionHeadingDegrees. */


void FUN_002d02cc(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 3 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float temp_v1;
  unsigned int in_s1;
  float in_s2;
  float in_s3;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = gameFlagIsSet(0x4d0);
  if (temp_v0 != 0) {
    temp_v2 = (in_s3 + 30.0f) * 0.017453292f;
    temp_v1 = temp_v2;
    DAT_005f0c94 = in_s0;
    DAT_005f0c98 = in_s1;
    DAT_005f0c9c = in_s2;
    FUN_001bc124();
    temp_v3 = 150.0f;
    DAT_005f0c94 = DAT_005f0c94 + temp_v2 * 150.0f;
    FUN_001bbf0c();
    DAT_005f0cac = 1;
    DAT_005f0c9c = DAT_005f0c9c + temp_v1 * temp_v3;
    temp_v1 = DAT_005f0c94;
    mathPositionHeadingDegrees();
    DAT_005f0ca8 = 2;
    DAT_005f0cec = 0x40a00000;
    DAT_005f0ca4 = 0;
    DAT_005f0d28 = 0;
    DAT_005f0ca0 = temp_v1;
  }
  return;
}

} /* extern "C" */
