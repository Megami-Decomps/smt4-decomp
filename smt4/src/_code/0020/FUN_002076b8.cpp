/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002076b8` (_code @ 0x2076b8, 0x624 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */


void FUN_002076b8(float *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v3 = in_s0 * in_s0;
  temp_v4 = temp_v3 * in_s0;
  temp_v2 = temp_v4 - temp_v3;
  temp_v0 = (temp_v4 - temp_v3 * 2.0f) + in_s0;
  temp_v1 = temp_v4 * -2.0f + temp_v3 * 3.0f;
  temp_v3 = (temp_v4 * 2.0f - temp_v3 * 3.0f) + 1.0f;
  DAT_004ea93c = temp_v3 * param_1[4] +
                 temp_v0 * ((param_1[8] - param_1[4]) + (param_1[4] - *param_1)) * 0.5f +
                 temp_v2 * ((param_1[0xc] - param_1[8]) + (param_1[8] - param_1[4])) * 0.5f;
  DAT_004ea940 = temp_v3 * param_1[5] +
                 temp_v0 * ((param_1[9] - param_1[5]) + (param_1[5] - param_1[1])) * 0.5f +
                 temp_v2 * ((param_1[0xd] - param_1[9]) + (param_1[9] - param_1[5])) * 0.5f;
  DAT_004ea944 = temp_v3 * param_1[6] +
                 temp_v0 * ((param_1[10] - param_1[6]) + (param_1[6] - param_1[2])) * 0.5f +
                 temp_v2 * ((param_1[0xe] - param_1[10]) + (param_1[10] - param_1[6])) * 0.5f;
  DAT_004ea948 = param_1[7] * 0.0f +
                 ((param_1[0xb] - param_1[7]) + (param_1[7] - param_1[3])) * 0.0f * 0.0f +
                 ((param_1[0xf] - param_1[0xb]) + (param_1[0xb] - param_1[7])) * 0.0f * 0.0f;
  DAT_004ea92c = param_1[8];
  DAT_004ea930 = param_1[9];
  DAT_004ea934 = param_1[10];
  DAT_004ea938 = param_1[0xb];
  DAT_004ea91c = temp_v1 * param_1[8] + DAT_004ea93c;
  DAT_004ea920 = temp_v1 * param_1[9] + DAT_004ea940;
  DAT_004ea924 = temp_v1 * param_1[10] + DAT_004ea944;
  DAT_004ea928 = param_1[0xb] * 0.0f + DAT_004ea948;
  return;
}

} /* extern "C" */
