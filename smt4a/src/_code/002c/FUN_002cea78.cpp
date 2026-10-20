/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cea78` (_code @ 0x2cea78, 0x624 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */


void FUN_002cea78(float *param_1)

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
  DAT_006472fc = temp_v3 * param_1[4] +
                 temp_v0 * ((param_1[8] - param_1[4]) + (param_1[4] - *param_1)) * 0.5f +
                 temp_v2 * ((param_1[0xc] - param_1[8]) + (param_1[8] - param_1[4])) * 0.5f;
  DAT_00647300 = temp_v3 * param_1[5] +
                 temp_v0 * ((param_1[9] - param_1[5]) + (param_1[5] - param_1[1])) * 0.5f +
                 temp_v2 * ((param_1[0xd] - param_1[9]) + (param_1[9] - param_1[5])) * 0.5f;
  DAT_00647304 = temp_v3 * param_1[6] +
                 temp_v0 * ((param_1[10] - param_1[6]) + (param_1[6] - param_1[2])) * 0.5f +
                 temp_v2 * ((param_1[0xe] - param_1[10]) + (param_1[10] - param_1[6])) * 0.5f;
  DAT_00647308 = param_1[7] * 0.0f +
                 ((param_1[0xb] - param_1[7]) + (param_1[7] - param_1[3])) * 0.0f * 0.0f +
                 ((param_1[0xf] - param_1[0xb]) + (param_1[0xb] - param_1[7])) * 0.0f * 0.0f;
  DAT_006472ec = param_1[8];
  DAT_006472f0 = param_1[9];
  DAT_006472f4 = param_1[10];
  DAT_006472f8 = param_1[0xb];
  DAT_006472dc = temp_v1 * param_1[8] + DAT_006472fc;
  DAT_006472e0 = temp_v1 * param_1[9] + DAT_00647300;
  DAT_006472e4 = temp_v1 * param_1[10] + DAT_00647304;
  DAT_006472e8 = param_1[0xb] * 0.0f + DAT_00647308;
  return;
}

} /* extern "C" */
