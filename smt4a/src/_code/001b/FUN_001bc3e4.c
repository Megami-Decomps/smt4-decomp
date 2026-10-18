/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc3e4` (_code @ 0x1bc3e4, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */


void FUN_001bc3e4(void)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v5 = DAT_006472dc * DAT_006472ec;
  temp_v4 = DAT_006472dc * DAT_006472f0;
  temp_v2 = DAT_006472dc * DAT_006472f4;
  temp_v0 = DAT_006472e0 * DAT_006472f0;
  temp_v3 = DAT_006472e0 * DAT_006472ec;
  temp_v1 = DAT_006472e4 * DAT_006472f4;
  DAT_006472dc = (DAT_006472e0 * DAT_006472f4 - DAT_006472e4 * DAT_006472f0) +
                 DAT_006472ec * DAT_006472e8 + DAT_006472dc * DAT_006472f8;
  DAT_006472e0 = (DAT_006472e4 * DAT_006472ec - temp_v2) + DAT_006472f0 * DAT_006472e8 +
                 DAT_006472e0 * DAT_006472f8;
  DAT_006472e4 = (temp_v4 - temp_v3) + DAT_006472f4 * DAT_006472e8 + DAT_006472e4 * DAT_006472f8;
  DAT_006472e8 = DAT_006472e8 * DAT_006472f8 - (temp_v5 + temp_v0 + temp_v1);
  return;
}
