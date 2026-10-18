/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc460` (_code @ 0x1bc460, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
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
extern unsigned int DAT_0064734c; /* 0x64734c */
extern unsigned int DAT_00647350; /* 0x647350 */
extern unsigned int DAT_00647354; /* 0x647354 */
extern unsigned int DAT_00647358; /* 0x647358 */


void FUN_001bc460(void)

{
  DAT_0064731c = 1.0f - (DAT_006472e0 * DAT_006472e0 + DAT_006472e4 * DAT_006472e4) * 2.0f;
  DAT_00647320 = (DAT_006472dc * DAT_006472e0 - DAT_006472e8 * DAT_006472e4) * 2.0f;
  DAT_00647324 = (DAT_006472e8 * DAT_006472e0 + DAT_006472dc * DAT_006472e4) * 2.0f;
  DAT_00647328 = 0;
  DAT_0064732c = (DAT_006472dc * DAT_006472e0 + DAT_006472e8 * DAT_006472e4) * 2.0f;
  DAT_00647330 = 1.0f - (DAT_006472dc * DAT_006472dc + DAT_006472e4 * DAT_006472e4) * 2.0f;
  DAT_00647334 = (DAT_006472e0 * DAT_006472e4 - DAT_006472e8 * DAT_006472dc) * 2.0f;
  DAT_00647338 = 0;
  DAT_0064733c = (DAT_006472dc * DAT_006472e4 - DAT_006472e8 * DAT_006472e0) * 2.0f;
  DAT_00647340 = (DAT_006472e0 * DAT_006472e4 + DAT_006472e8 * DAT_006472dc) * 2.0f;
  DAT_00647344 = 1.0f - (DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0) * 2.0f;
  DAT_00647348 = 0;
  DAT_0064734c = 0;
  DAT_00647350 = 0;
  DAT_00647354 = 0;
  DAT_00647358 = 0x3f800000;
  return;
}
