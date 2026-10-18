/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144bd4` (_code @ 0x144bd4, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_0063f4c8; /* 0x63f4c8 */
extern unsigned int DAT_0063f4cc; /* 0x63f4cc */
extern unsigned int DAT_0063f4d0; /* 0x63f4d0 */
extern unsigned int DAT_0063f4d4; /* 0x63f4d4 */
extern unsigned int DAT_0063f4d8; /* 0x63f4d8 */
extern unsigned int DAT_0063f4dc; /* 0x63f4dc */
extern unsigned char DAT_0063f4e0; /* 0x63f4e0 */
extern unsigned char DAT_0063f4e1; /* 0x63f4e1 */
extern unsigned char DAT_0063f4e2; /* 0x63f4e2 */
extern signed char DAT_0063f4ff; /* 0x63f4ff */


void FUN_00144bd4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (param_1 != 0) {
    DAT_0063f4e0 = DAT_0063f4e0 | 1;
    DAT_0063f4c8 = in_s0;
    if (in_s0 <= 0.0f) {
      DAT_0063f4c8 = 0.0f;
    }
    if ((int)DAT_0063f4c8 >= 0x3f800001) {
      DAT_0063f4c8 = 1.0f;
    }
    DAT_0063f4cc = param_2;
    DAT_0063f4d4 = param_4;
    DAT_0063f4d8 = param_5;
    DAT_0063f4d0 = param_3;
    if (DAT_0063f4ff == '\0') {
      return;
    }
    DAT_0063f4e2 = 1;
  }
  else {
    DAT_0063f4e2 = 0;
    DAT_0063f4cc = 0;
    DAT_0063f4c8 = 0.0f;
    DAT_0063f4d4 = 0;
    DAT_0063f4d8 = 0;
    DAT_0063f4d0 = 0;
    DAT_0063f4dc = 0;
    DAT_0063f4e1 = 0;
    DAT_0063f4e0 = 0;
  }
  return;
}
