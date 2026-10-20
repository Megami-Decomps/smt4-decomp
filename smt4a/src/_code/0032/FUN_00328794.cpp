/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328794` (_code @ 0x328794, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd7c0(unsigned int, int, int);
int FUN_003fd924(unsigned int, int, int);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int g_lmapMainState; /* 0x580238 */

/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_00328794(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = g_lmapMainState;
  if (g_lmapMainState != 0) {
    temp_v2 = 0;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = *(int *)(temp_v3 + 0xa54);
      if (temp_v1 != 0) {
        if (*(int *)(temp_v1 + 4) == 0) {
          FUN_0040aad4(temp_v1,0);
        }
        temp_v4 = *(unsigned int *)(*(int *)(temp_v3 + 0xa54) + 4);
        FUN_0040ace8(DAT_0056fcc0,temp_v4);
        FUN_003fd924(temp_v4,0,2);
        FUN_003fd7c0(temp_v4,0,2);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x20);
  }
  return;
}

} /* extern "C" */
