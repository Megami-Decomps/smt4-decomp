/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf538` (_code @ 0x2bf538, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float DAT_004d46b8; /* 0x4d46b8 */
extern float DAT_004d46c8; /* 0x4d46c8 */
extern float DAT_004d46d8; /* 0x4d46d8 */
extern float DAT_004d46e8; /* 0x4d46e8 */
extern unsigned char DAT_004d46fd; /* 0x4d46fd */
extern float DAT_004d4704; /* 0x4d4704 */


void FUN_002bf538(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if ((int)in_s0 >= 0x3f800001) {
    in_s0 = 1.0f;
  }
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  DAT_004d4704 = in_s0;
  DAT_004d46b8 = in_s0;
  DAT_004d46c8 = in_s0;
  DAT_004d46d8 = in_s0;
  DAT_004d46e8 = in_s0;
  DAT_004d46fd = 1;
  return;
}

} /* extern "C" */
