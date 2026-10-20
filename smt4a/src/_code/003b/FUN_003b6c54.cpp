/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6c54` (_code @ 0x3b6c54, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164ce0(int, int);

extern int g_bustupCutAnim; /* 0x57f4c4 */

/* Supplied declaration required: FUN_00164ce0. */
extern int scrGetArg(void);


unsigned int FUN_003b6c54(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = *(int *)(g_bustupCutAnim + 0x634);
  if (temp_v1 != 0) {
    if (temp_v0 != 0) {
      FUN_00164ce0(temp_v1,1);
    }
    else {
      FUN_00164ce0(temp_v1,0);
    }
  }
  return 1;
}

} /* extern "C" */
