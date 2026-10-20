/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153588` (_code @ 0x153588, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164ce0(unsigned int, int);
int FUN_00167f24(int);

extern int g_bustupCutAnim; /* 0x57f4c4 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00164ce0. */
extern int jobGetWorkId(unsigned int);
/* Supplied declaration required: FUN_00167f24. */
extern unsigned char FUN_0016917c(unsigned int, unsigned int);


unsigned int FUN_00153588(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = g_bustupCutAnim;
  if (g_bustupCutAnim == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0;
    temp_v4 = 1;
    do {
      temp_v5 = temp_v0 + temp_v4 * 4;
      temp_v3 = jobIsValid(*(unsigned int *)(temp_v5 + 0x634));
      if (temp_v3 != 0) {
        temp_v3 = jobGetWorkId(*(unsigned int *)(temp_v5 + 0x634));
        if (temp_v3 == param_1) {
          FUN_00164ce0(*(unsigned int *)(temp_v5 + 0x634),1);
          temp_v2 = 1;
          if (*(unsigned int *)(temp_v0 + 0x608) < 0xf) {
            temp_v2 = 2;
          }
          temp_v1 = FUN_0016917c(*(unsigned int *)(temp_v5 + 0x634),temp_v2);
          FUN_00167f24(temp_v1);
          temp_v2 = 1;
        }
        else {
          FUN_00164ce0(*(unsigned int *)(temp_v5 + 0x634),0);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  return temp_v2;
}

} /* extern "C" */
