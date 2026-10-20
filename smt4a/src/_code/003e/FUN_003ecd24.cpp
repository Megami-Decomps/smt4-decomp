/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecd24` (_code @ 0x3ecd24, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


unsigned short * FUN_003ecd24(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  
  if (*(int *)(param_1 + 0x2284) == 0) {
    return (unsigned short *)0x0;
  }
  temp_v0 = FUN_001a6f60(*(int *)(param_1 + 0x2284),0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar5 = (unsigned short *)(temp_v1 + temp_v3 * 0xc);
      if (*puVar5 == param_2) {
        return puVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (unsigned short *)0x0;
}

} /* extern "C" */
