/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a86d4` (_code @ 0x2a86d4, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a60cc(unsigned int, unsigned int, unsigned int);
int asdTMTexTableReleaseNode(unsigned int);

extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */


void FUN_002a86d4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  if (param_1 != 0 && param_2 != -1) {
    if (*(int *)(param_1 + 0x80) != 0) {
      asdTMTexTableReleaseNode(*(unsigned int *)(param_1 + 0x10));
      FUN_002a60cc(g_aocSystem,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x84));
      *(unsigned int *)(param_1 + 0x80) = 0;
      *(unsigned int *)(param_1 + 0x84) = 0xffffffff;
    }
    return;
  }
  return;
}

} /* extern "C" */
