/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f2ec` (_code @ 0x15f2ec, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016780c(unsigned int, unsigned int, int);
int FUN_00176480(void);
int FUN_001764f4(unsigned int);

extern int jobGetWork(void);
/* Supplied declaration required: FUN_0016780c. */
extern unsigned int FUN_0016a0f0(unsigned int);
/* Supplied declaration required: FUN_00176480. */
/* Supplied declaration required: FUN_001764f4. */


unsigned int FUN_0015f2ec(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobGetWork();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x754);
  if ((temp_v1 & 1) != 0) {
    if (((temp_v1 & 8) == 0) || ((temp_v1 & 2) != 0)) {
      if (((temp_v1 & 4) != 0) && ((temp_v1 & 2) == 0)) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0xd54);
        temp_v2 = FUN_0016a0f0(0x41);
        FUN_0016780c(temp_v2,temp_v3,0);
        FUN_00176480();
        *(unsigned int *)(temp_v0 + 0x754) = *(unsigned int *)(temp_v0 + 0x754) & 0xfffffff8;
      }
    }
    else {
      FUN_001764f4(*(unsigned int *)(temp_v0 + 0xd60));
      *(unsigned int *)(temp_v0 + 0x754) = *(unsigned int *)(temp_v0 + 0x754) & 0xfffffff0;
    }
  }
  return 0;
}

} /* extern "C" */
