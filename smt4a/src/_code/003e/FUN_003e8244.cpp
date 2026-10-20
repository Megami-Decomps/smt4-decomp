/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8244` (_code @ 0x3e8244, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00187180. */
extern short FUN_00192748(void);
extern int FUN_00192798(void);


int FUN_003e8244(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  FUN_00187180(0x4d,0);
  temp_v1 = FUN_00192798();
  temp_v4 = 0;
  FUN_00187180(0x4d,0);
  temp_v0 = FUN_00192748();
  if (param_2 < temp_v0) {
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v1 = temp_v1 + param_2 * 0x18;
    do {
      if (*(short *)(temp_v1 + temp_v2 * 2) == 0) break;
      temp_v2 = temp_v2 + 1;
      temp_v3 = temp_v3 + 1;
    } while (temp_v2 < 0xc);
    if (0 < temp_v3) {
      temp_v4 = FUN_0014bef4((temp_v3 - 1U) & 0xffff);
      temp_v4 = (int)*(short *)(temp_v1 + temp_v4 * 2);
    }
  }
  return temp_v4;
}

} /* extern "C" */
