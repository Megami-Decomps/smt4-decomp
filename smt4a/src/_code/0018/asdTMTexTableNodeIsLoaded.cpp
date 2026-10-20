/* NON_MATCHING: romwright 0.5.0 decompilation of `asdTMTexTableNodeIsLoaded` (_code @ 0x18206c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableGetNode(void);


unsigned char asdTMTexTableNodeIsLoaded(void)

{
  int temp_v0;
  
  temp_v0 = asdTMTexTableGetNode();
  return (*(unsigned int *)(temp_v0 + 0x10) & 4) != 0;
}

} /* extern "C" */
