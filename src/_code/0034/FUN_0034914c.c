/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034914c` (_code @ 0x34914c, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_004720f0; /* 0x4720f0 */
extern unsigned int DAT_004dad90; /* 0x4dad90 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002ab8dc. */
/* Supplied declaration required: FUN_002c35b0. */


void FUN_0034914c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  
  FUN_002c35b0(0);
  temp_v0 = *(int *)(*(int *)(param_2 + 0xac) + *(int *)(param_1 + 8) * 4);
  *(int *)(param_2 + 0xb8) = *(int *)(param_1 + 8);
  if (*(int *)(param_2 + 0xa4) != temp_v0) {
    *(int *)(param_2 + 0xa4) = temp_v0;
    if (*(float *)(temp_v0 + 0x294) == 0.0f) {
      DAT_004720f0 = 0;
    }
    else {
      temp_v2 = -*(float *)(temp_v0 + 0x294);
      DAT_004720f0 = 0;
      if (((unsigned int)temp_v2 & 0x80000000) != 0) {
        DAT_004720f0 = 0x800000;
      }
      if (romwright_fabs_4(temp_v2) == 0.0f) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = ((unsigned int)romwright_fabs_4(temp_v2) >> 0x17) - 0x40;
        if ((int)temp_v1 < 0) {
          FUN_002ab8dc(DAT_004dad90);
          return;
        }
        if ((int)temp_v1 >= 0x80) {
          DAT_004720f0 = 0x7f0000;
          FUN_002ab8dc(DAT_004dad90);
          return;
        }
      }
      DAT_004720f0 = (((unsigned int)temp_v2 & 0x7fffff) >> 7) | DAT_004720f0 | ((temp_v1 & 0x7f) << 0x10);
    }
  }
  FUN_002ab8dc(DAT_004dad90);
  return;
}
