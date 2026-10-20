/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002756a8` (_code @ 0x2756a8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int linkHolderClearFlag(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_mapMain; /* 0x581274 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f1ac8; /* 0x5f1ac8 */

/* Supplied declaration required: linkHolderClearFlag. */


void FUN_002756a8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*param_1 + 100) = 3;
  linkHolderClearFlag(*(unsigned int *)(g_lmapScene + 0x1a8));
  if (g_mapMain != 0) {
    DAT_005f1ac8 = 1;
  }
  return;
}

} /* extern "C" */
