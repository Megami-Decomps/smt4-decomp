/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb58c` (_code @ 0x3bb58c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a63f8(unsigned int, int);
/* Supplied declaration required: FUN_002aeb2c. */


unsigned int FUN_003bb58c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    if ((*(char *)(param_1 + temp_v2 + 0xc78) != '\0') &&
       (temp_v0 = FUN_002a63f8(0x2a,temp_v2), temp_v0 != 0)) {
      FUN_002aeb2c(0x2a,temp_v2);
      *(unsigned char *)(param_1 + temp_v2 + 0xc78) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = param_1 + temp_v2;
    temp_v1 = temp_v0 + 0xc00;
    temp_v3 = *(char *)(temp_v0 + 0xc78) == '\0';
    if (temp_v3) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0xc79);
    }
    if (!temp_v3 || temp_v1 != 0) break;
    temp_v2 = temp_v2 + 2;
    if (temp_v2 >= 0x40) {
      return 1;
    }
  }
  return 0;
}
