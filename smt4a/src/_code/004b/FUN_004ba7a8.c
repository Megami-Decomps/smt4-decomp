/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba7a8` (_code @ 0x4ba7a8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018206c(unsigned int, int);
/* Supplied declaration required: FUN_0019a7f4. */


unsigned int FUN_004ba7a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    if ((*(char *)(param_1 + temp_v2 + 0x1034) != '\0') &&
       (temp_v0 = FUN_0018206c(0x1f,temp_v2), temp_v0 != 0)) {
      FUN_0019a7f4(0x1f,temp_v2);
      *(unsigned char *)(param_1 + temp_v2 + 0x1034) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = param_1 + temp_v2;
    temp_v1 = temp_v0 + 0x1000;
    temp_v3 = *(char *)(temp_v0 + 0x1034) == '\0';
    if (temp_v3) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0x1035);
    }
    if (!temp_v3 || temp_v1 != 0) break;
    temp_v2 = temp_v2 + 2;
    if (temp_v2 >= 0x40) {
      return 1;
    }
  }
  return 0;
}
