/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8054` (_code @ 0x4f8054, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);

extern unsigned char g_btlEffect; /* 0x5737f0 */

/* Supplied declaration required: btlGetMainState. */
extern int FUN_0019a37c(int, unsigned int, unsigned int);
extern unsigned int wstrlen(unsigned int);
extern int FUN_003e8430(void);


int FUN_004f8054(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1f54) != 0) {
    btlGetMainState();
    temp_v0 = FUN_003e8430();
    if (temp_v0 == 0) {
      temp_v0 = 0;
      do {
        temp_v3 = *(int *)(param_1 + 0x1f54) + temp_v0 * 0x16 + 0x58;
        if (temp_v3 != 0) {
          temp_v1 = wstrlen((*(unsigned int *)((unsigned char *)&g_btlEffect + 0xc)));
          temp_v2 = FUN_0019a37c(temp_v3,(*(unsigned int *)((unsigned char *)&g_btlEffect + 0xc)),temp_v1);
          if (temp_v2 == 0) {
            return (int)*(short *)(temp_v3 + 0x10);
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
    }
  }
  return -1;
}

} /* extern "C" */
