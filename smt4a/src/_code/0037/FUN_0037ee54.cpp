/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ee54` (_code @ 0x37ee54, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */


void FUN_0037ee54(void)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = DAT_006472dc * DAT_00647320;
  temp_v0 = DAT_006472e4 * DAT_0064733c;
  temp_v1 = DAT_006472e4 * DAT_00647340;
  temp_v2 = DAT_006472e4 * DAT_00647348;
  DAT_006472e4 = DAT_006472dc * DAT_00647324 + DAT_006472e0 * DAT_00647334 +
                 DAT_006472e4 * DAT_00647344;
  DAT_006472e8 = DAT_006472dc * DAT_00647328 + DAT_006472e0 * DAT_00647338 + temp_v2;
  DAT_006472dc = DAT_006472dc * DAT_0064731c + DAT_006472e0 * DAT_0064732c + temp_v0;
  DAT_006472e0 = temp_v3 + DAT_006472e0 * DAT_00647330 + temp_v1;
  return;
}

} /* extern "C" */
