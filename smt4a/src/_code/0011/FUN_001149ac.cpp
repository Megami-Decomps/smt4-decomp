/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001149ac` (_code @ 0x1149ac, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_listenerTable; /* 0x594ad8 */


unsigned int FUN_001149ac(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (((*(int * *)((unsigned char *)&g_listenerTable + 0x50)) != (int *)0x0) && (param_1 <= (unsigned int)(*(int * *)((unsigned char *)&g_listenerTable + 0x50))[2])) {
    temp_v0 = 0;
    while( 1 ) {
      if ((unsigned int)(*(int * *)((unsigned char *)&g_listenerTable + 0x50))[1] <= temp_v0) {
        return 0;
      }
      if (param_1 <= *(unsigned int *)(*(*(int * *)((unsigned char *)&g_listenerTable + 0x50)) + temp_v0 * 0x34 + 8)) break;
      temp_v0 = temp_v0 + 1;
    }
    return *(unsigned int *)(*(*(int * *)((unsigned char *)&g_listenerTable + 0x50)) + temp_v0 * 0x34 + 8);
  }
  return 0;
}

} /* extern "C" */
