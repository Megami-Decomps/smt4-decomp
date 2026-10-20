/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8738` (_code @ 0x3a8738, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);
int FUN_003eaf20(void);

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003a8738(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = FUN_00236038();
  temp_v2 = FUN_0014aa78();
  FUN_003eaf20();
  if (temp_v2 != 0) {
    temp_v0 = *(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x2b6);
    temp_v5 = (temp_v0 & 0xfc00) != 0;
    temp_v4 = temp_v3;
    if (temp_v5) {
      temp_v4 = 2;
    }
    if (!temp_v5 || temp_v4 == temp_v0 >> 10) {
      FUN_003283ac(1);
      return 1;
    }
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
