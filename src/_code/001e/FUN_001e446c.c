/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e446c` (_code @ 0x1e446c, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_004bf89c; /* 0x4bf89c */
extern int DAT_004c149c; /* 0x4c149c */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


int FUN_001e446c(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float in_s0;
  float in_s1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_004c149c) {
    do {
      temp_v0 = temp_v1 * 0x1c;
      if ((*(short *)(temp_v0 + 0x4bf8b6) == param_1 || param_1 == 0) &&
         (*(float *)(&DAT_004bf89c + temp_v0) <= in_s0)) {
        temp_v2 = in_s1 < *(float *)(temp_v0 + 0x4bf8a4);
        temp_v3 = NAN(in_s1) || NAN(*(float *)(temp_v0 + 0x4bf8a4));
        if (!temp_v2) {
          temp_v2 = *(float *)(temp_v0 + 0x4bf8a8) < in_s0;
          temp_v3 = NAN(*(float *)(temp_v0 + 0x4bf8a8)) || NAN(in_s0);
        }
        if ((temp_v2 == temp_v3) && (in_s1 <= *(float *)(temp_v0 + 0x4bf8b0))) {
          return (int)*(short *)(temp_v0 + 0x4bf8b4);
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_004c149c);
  }
  return -1;
}
