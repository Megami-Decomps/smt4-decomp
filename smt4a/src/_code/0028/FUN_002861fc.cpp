/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002861fc` (_code @ 0x2861fc, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned short *FUN_00192798(void);


unsigned short * FUN_002861fc(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x24,1);
  puVar2 = (unsigned short *)FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
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
