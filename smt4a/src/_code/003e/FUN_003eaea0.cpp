/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaea0` (_code @ 0x3eaea0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern short *FUN_00192798(void);


int FUN_003eaea0(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00187180(0x4d,1);
  psVar2 = (short *)FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if (*psVar2 == param_2) {
        return (int)psVar2[1];
      }
      temp_v2 = temp_v2 + 1;
      psVar2 = psVar2 + 2;
    } while (temp_v2 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
