/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254298` (_code @ 0x254298, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned short *FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned short * FUN_00254298(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ec4(0x24,1);
  puVar2 = (unsigned short *)FUN_002c0e9c();
  temp_v1 = FUN_002c0e4c(temp_v0);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if (*puVar2 == param_1) {
        return puVar2;
      }
      temp_v2 = temp_v2 + 1;
      puVar2 = puVar2 + 0x20;
    } while (temp_v2 < temp_v1);
  }
  return (unsigned short *)0x0;
}
