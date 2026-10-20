/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb194` (_code @ 0x3bb194, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014bef4(unsigned int);
extern int FUN_00187168(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003e4a00(void);
extern int FUN_003e4d68(unsigned int);


unsigned int FUN_003bb194(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  
  temp_v4 = 0xad;
  temp_v0 = FUN_003e4a00();
  if (0 < temp_v0) {
    temp_v0 = FUN_0014bef4((temp_v0 + 1U) & 0xffff);
    temp_v3 = 0;
    do {
      temp_v1 = FUN_003e4d68(temp_v3 & 0xffff);
      temp_v2 = FUN_00187168();
      if (temp_v2 != 0) {
        if (temp_v0 == 0) {
          temp_v4 = *(unsigned short *)(temp_v1 + 300);
          break;
        }
        temp_v0 = temp_v0 - 1;
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0xc);
  }
  FUN_003283ac(temp_v4);
  return 1;
}

} /* extern "C" */
