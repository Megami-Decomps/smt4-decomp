/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248480` (_code @ 0x248480, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

/* Supplied declaration required: FUN_002569fc. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002db9d0. */


void FUN_00248480(void)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2 [2];
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v1 = in_s0 * 40.743664f;
  temp_v0 = temp_v1;
  FUN_002b7064();
  FUN_002b70cc();
  FUN_002569fc(temp_v2);
  temp_v3 = -temp_v0;
  temp_v2[0] = temp_v1;
  temp_v4 = temp_v0;
  temp_v5 = temp_v1;
  FUN_002db9d0(temp_v2);
                    /* WARNING: Treating indirect jump as return */
  return;
}
