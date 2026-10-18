/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc26c` (_code @ 0x2bc26c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004c5634; /* 0x4c5634 */

extern int FUN_002c1a28(unsigned int);


unsigned int FUN_002bc26c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  
  temp_v1 = 0;
  while( 1 ) {
    if (temp_v1 >= 4) {
      puVar3 = (unsigned char *)0x0;
    }
    else {
      puVar3 = &DAT_004c5634 + temp_v1 * 0x78;
    }
    temp_v0 = FUN_002c1a28(*(unsigned int *)(puVar3 + 0x48));
    if (temp_v0 != 0) break;
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v1 >= 4) {
      return 0;
    }
  }
  if (puVar3 == (unsigned char *)0x0) {
    return 0;
  }
  return 1;
}
