/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154bbc` (_code @ 0x154bbc, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016784c(unsigned int, int);
int FUN_0019c6cc(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern int g_bustupCutAnim; /* 0x57f4c4 */

extern int jobIsValid(unsigned int);
extern int jobGetWorkId(unsigned int);
extern int FUN_0016783c(unsigned int);
/* Supplied declaration required: FUN_0016784c. */
/* Supplied declaration required: FUN_0019c6cc. */


unsigned int
FUN_00154bbc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  temp_v0 = g_bustupCutAnim;
  temp_v5 = (unsigned long long)param_5;
  if (g_bustupCutAnim != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = jobIsValid(*(unsigned int *)(temp_v3 + 0x634));
      if ((temp_v1 != 0) && (temp_v1 = jobGetWorkId(*(unsigned int *)(temp_v3 + 0x634)), temp_v1 == param_1))
      {
        temp_v1 = FUN_0016783c(*(unsigned int *)(temp_v3 + 0x634));
        temp_v4 = (unsigned int)temp_v5;
        if (temp_v1 == 0) {
          FUN_0016784c(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x634),1);
          FUN_0019c6cc(*(unsigned int *)(temp_v3 + 0x634),param_2,param_3,param_4,temp_v4);
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}

} /* extern "C" */
