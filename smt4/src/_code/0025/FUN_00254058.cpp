/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254058` (_code @ 0x254058, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned short *FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned short * FUN_00254058(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x24,1);
  puVar2 = (unsigned short *)FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v0);
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

} /* extern "C" */
