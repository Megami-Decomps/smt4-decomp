/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f8a4` (_code @ 0x33f8a4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_006160e0; /* 0x6160e0 */
extern int DAT_00616ee0; /* 0x616ee0 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


unsigned int FUN_0033f8a4(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float in_s0;
  float in_s1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_00616ee0) {
    do {
      temp_v0 = temp_v1 * 0x1c;
      if ((*(int *)(temp_v0 + 0x6160f8) == param_1 || param_1 == 0) &&
         (*(float *)(&DAT_006160e0 + temp_v0) <= in_s0)) {
        temp_v2 = in_s1 < *(float *)(temp_v0 + 0x6160e8);
        temp_v3 = NAN(in_s1) || NAN(*(float *)(temp_v0 + 0x6160e8));
        if (!temp_v2) {
          temp_v2 = *(float *)(temp_v0 + 0x6160ec) < in_s0;
          temp_v3 = NAN(*(float *)(temp_v0 + 0x6160ec)) || NAN(in_s0);
        }
        if ((temp_v2 == temp_v3) && (in_s1 <= *(float *)(temp_v0 + 0x6160f4))) {
          return 1;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00616ee0);
  }
  return 0;
}
