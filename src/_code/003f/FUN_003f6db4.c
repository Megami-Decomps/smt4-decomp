/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6db4` (_code @ 0x3f6db4, 0xe8 bytes) from smt4.cxi.
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

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */

/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */


void FUN_003f6db4(void)

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
  FUN_002b73a4();
  FUN_002b740c();
  temp_v3 = in_s1 * temp_v5 * temp_v4;
  temp_v1 = temp_v3;
  FUN_002b73a4();
  FUN_002b740c();
  temp_v4 = in_s2 * temp_v5 * temp_v4;
  temp_v5 = temp_v4;
  FUN_002b73a4();
  FUN_002b740c();
  DAT_004ea91c = temp_v5 * temp_v1 * temp_v2 + temp_v4 * temp_v3 * temp_v0;
  DAT_004ea920 = temp_v4 * temp_v1 * temp_v2 - temp_v5 * temp_v3 * temp_v0;
  DAT_004ea924 = temp_v5 * temp_v3 * temp_v2 + temp_v4 * temp_v1 * temp_v0;
  DAT_004ea928 = temp_v4 * temp_v3 * temp_v2 - temp_v5 * temp_v1 * temp_v0;
                    /* WARNING: Treating indirect jump as return */
  return;
}
