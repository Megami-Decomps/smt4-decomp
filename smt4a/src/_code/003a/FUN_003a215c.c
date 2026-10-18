/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a215c` (_code @ 0x3a215c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern unsigned int DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern unsigned int DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern unsigned int DAT_00647348; /* 0x647348 */

/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */


void FUN_003a215c(void)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  temp_v2 = in_s0 * 40.743664f;
  temp_v0 = temp_v2;
  FUN_001b63b0();
  FUN_001a1ee0();
  temp_v1 = 1.0f - temp_v2;
  DAT_0064731c = DAT_006472dc * DAT_006472dc + (1.0f - DAT_006472dc * DAT_006472dc) * temp_v2;
  DAT_00647320 = DAT_006472e4 * temp_v0 + DAT_006472dc * DAT_006472e0 * temp_v1;
  DAT_00647324 = DAT_006472dc * DAT_006472e4 * temp_v1 - DAT_006472e0 * temp_v0;
  DAT_00647328 = 0;
  DAT_0064732c = DAT_006472dc * DAT_006472e0 * temp_v1 - DAT_006472e4 * temp_v0;
  DAT_00647330 = DAT_006472e0 * DAT_006472e0 + (1.0f - DAT_006472e0 * DAT_006472e0) * temp_v2;
  DAT_00647334 = DAT_006472dc * temp_v0 + DAT_006472e0 * DAT_006472e4 * temp_v1;
  DAT_00647338 = 0;
  DAT_0064733c = DAT_006472e0 * temp_v0 + DAT_006472dc * DAT_006472e4 * temp_v1;
  DAT_00647340 = DAT_006472e0 * DAT_006472e4 * temp_v1 - DAT_006472dc * temp_v0;
  DAT_00647344 = DAT_006472e4 * DAT_006472e4 + (1.0f - DAT_006472e4 * DAT_006472e4) * temp_v2;
  DAT_00647348 = 0;
  return;
}
