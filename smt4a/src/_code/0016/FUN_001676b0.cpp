/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001676b0` (_code @ 0x1676b0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_0017ffa8(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0019d880(void);

extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_0019d880. */


void FUN_001676b0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  float in_s0;
  float temp_v1;
  
  if (param_1 != 0) {
    temp_v0 = 0;
    switch(param_1) {
    case 1:
      temp_v0 = 5;
      break;
    case 2:
      temp_v0 = 6;
      break;
    case 3:
      temp_v0 = 0x22;
      break;
    case 4:
      temp_v0 = 8;
      break;
    case 5:
      temp_v0 = 2;
      break;
    case 6:
      temp_v0 = 1;
      break;
    case 8:
      temp_v0 = 3;
      break;
    case 9:
      temp_v0 = 4;
      break;
    case 10:
      temp_v0 = 0x13;
      break;
    case 0xb:
      temp_v0 = 0x27;
      break;
    case 0xc:
      temp_v0 = 0x26;
      break;
    case 0xd:
      temp_v0 = 0x25;
    }
    temp_v1 = in_s0;
    FUN_0019d880();
    if ((int)temp_v1 < 0x3f800000) {
      efctSetSpeed();
    }
    FUN_0017ffa8(2,0xb,temp_v0,param_2,param_3,param_4);
    if ((int)in_s0 >= 0x3f800001) {
      in_s0 = 1.0f;
    }
    if (in_s0 < 0.0f) {
      in_s0 = 0.0f;
    }
    DAT_0063077c = in_s0;
    DAT_00630730 = in_s0;
    DAT_00630740 = in_s0;
    DAT_00630750 = in_s0;
    DAT_00630760 = in_s0;
    DAT_00630775 = 1;
    return;
  }
  return;
}

} /* extern "C" */
