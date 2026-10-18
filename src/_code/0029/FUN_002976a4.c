/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002976a4` (_code @ 0x2976a4, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam0049397c; /* 0x49397c */
extern int iRam00493980; /* 0x493980 */
extern signed char cRam00493988; /* 0x493988 */

extern int FUN_002c32f0(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002976a4(void)

{
  unsigned int temp_v0;
  
  if (iRam00493980 != 0) {
    temp_v0 = 1;
  }
  else {
    if (cRam00493988 == '\0') {
      iRam00493980 = FUN_002c32f0(uRam0049397c,0x493984,0);
      return 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
