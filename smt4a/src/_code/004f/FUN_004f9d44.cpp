/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9d44` (_code @ 0x4f9d44, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);

extern unsigned int g_btlEffect; /* 0x5737f0 */

/* Supplied declaration required: btlGetMainState. */
extern int FUN_0019a37c(int, unsigned int, unsigned int);
extern unsigned int wstrlen(unsigned int);
extern int FUN_003e8430(void);
extern int FUN_004f59b0(int);


int FUN_004f9d44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  btlGetMainState();
  temp_v0 = FUN_003e8430();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    piVar5 = (int *)(param_1 + 0x1f54);
    temp_v0 = 0;
    if (*piVar5 != 0) {
      temp_v2 = 0;
      do {
        temp_v3 = *piVar5 + temp_v2 * 0x16 + 0x108;
        if (temp_v3 != 0) {
          temp_v1 = wstrlen(g_btlEffect);
          temp_v3 = FUN_0019a37c(temp_v3,g_btlEffect,temp_v1);
          if (temp_v3 == 0) {
            temp_v0 = *piVar5 + temp_v2 * 0x16 + 0x108;
            if (temp_v0 == 0) {
              temp_v0 = FUN_004f59b0(param_1);
              return temp_v0;
            }
            temp_v0 = (int)*(short *)(temp_v0 + 0x10);
            break;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v0 != 0) {
        return temp_v0;
      }
    }
    temp_v0 = FUN_004f59b0(param_1);
  }
  return temp_v0;
}

} /* extern "C" */
