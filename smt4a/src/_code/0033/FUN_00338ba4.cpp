/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338ba4` (_code @ 0x338ba4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004839b4(int);
int stateSetterSetFromBase(int, int, unsigned int);
int FUN_00483acc(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_lmapMainState; /* 0x580238 */

/* Supplied declaration required: FUN_004839b4. */
/* Supplied declaration required: stateSetterSetFromBase. */
/* Supplied declaration required: FUN_00483acc. */


void FUN_00338ba4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_lmapMainState;
  if (g_lmapMainState != 0) {
    FUN_00483acc(g_lmapMainState + 0xf4);
    stateSetterSetFromBase(temp_v0 + 0xf4,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_004839b4(temp_v0 + 0xf4);
    return;
  }
  return;
}

} /* extern "C" */
