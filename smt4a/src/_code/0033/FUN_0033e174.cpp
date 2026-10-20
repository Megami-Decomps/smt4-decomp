/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e174` (_code @ 0x33e174, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246bd4(void);
int FUN_00340998(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_00246bd4. */
extern int lmapSceneGetUnk0(void);
/* Supplied declaration required: FUN_00340998. */


void FUN_0033e174(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = lmapSceneGetUnk0();
  if (temp_v0 == 0x1c) {
    *(unsigned int *)(g_lmapScene + 4) = 10;
    FUN_00340998();
    FUN_00246bd4();
    return;
  }
  return;
}

} /* extern "C" */
