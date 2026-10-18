/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016345c` (_code @ 0x16345c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0061978c; /* 0x61978c */

extern int FUN_001681a4(unsigned int);


unsigned int FUN_0016345c(void)

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
      puVar3 = &DAT_0061978c + temp_v1 * 0x78;
    }
    temp_v0 = FUN_001681a4(*(unsigned int *)(puVar3 + 0x48));
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
