/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a63f8` (_code @ 0x3a63f8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e068; /* 0x44e068 */

extern unsigned int fileSlotFree(unsigned int);


unsigned int FUN_003a63f8(void)

{
  unsigned int temp_v0;
  
  (*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) = (*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) - 1;
  if ((*(int *)((unsigned char *)&DAT_0044e068 + 0x4)) < 1) {
    temp_v0 = fileSlotFree(0x17);
    return temp_v0;
  }
  return 1;
}

} /* extern "C" */
