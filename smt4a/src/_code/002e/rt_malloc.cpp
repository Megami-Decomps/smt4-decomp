/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_malloc` (_code @ 0x2e6dac, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */

extern unsigned int *flagBlockRunCallback(int);


unsigned int * rt_malloc(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)flagBlockRunCallback(((unsigned int)(param_1 * -0x40000000) >> 0x1e) + param_1 + 8);
  *puVar1 = (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x50));
  return puVar1 + 2;
}

} /* extern "C" */
