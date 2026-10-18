/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc2f0` (_code @ 0x1bc2f0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */


void FUN_001bc2f0(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 4 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float in_s1;
  float in_s2;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v5 = -0.5f;
  temp_v4 = 40.743664f;
  temp_v2 = in_s0 * -0.5f * 40.743664f;
  temp_v0 = temp_v2;
  FUN_001b63b0();
  FUN_001a1ee0();
  temp_v3 = in_s1 * temp_v5 * temp_v4;
  temp_v1 = temp_v3;
  FUN_001b63b0();
  FUN_001a1ee0();
  temp_v4 = in_s2 * temp_v5 * temp_v4;
  temp_v5 = temp_v4;
  FUN_001b63b0();
  FUN_001a1ee0();
  DAT_006472dc = temp_v5 * temp_v1 * temp_v2 + temp_v4 * temp_v3 * temp_v0;
  DAT_006472e0 = temp_v4 * temp_v1 * temp_v2 - temp_v5 * temp_v3 * temp_v0;
  DAT_006472e4 = temp_v5 * temp_v3 * temp_v2 + temp_v4 * temp_v1 * temp_v0;
  DAT_006472e8 = temp_v4 * temp_v3 * temp_v2 - temp_v5 * temp_v1 * temp_v0;
                    /* WARNING: Treating indirect jump as return */
  return;
}
