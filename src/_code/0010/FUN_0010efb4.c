/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010efb4` (_code @ 0x10efb4, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043e18c; /* 0x43e18c */
extern signed char DAT_00493829; /* 0x493829 */

extern int FUN_002c17d4(unsigned int);
/* Supplied declaration required: FUN_002c1830. */


unsigned int FUN_0010efb4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c1830(0,1);
  if ((((temp_v0 == 0) && (temp_v0 = FUN_002c1830(9,2), temp_v0 == 0)) &&
      (temp_v0 = FUN_002c17d4(6), temp_v0 == 0)) &&
     ((temp_v0 = FUN_002c1830(10,2), temp_v0 == 0 && (DAT_00493829 == '\0')))) {
    temp_v2 = *(int *)(DAT_0043e18c + 4) != param_1;
    temp_v1 = DAT_0043e18c;
    if (!temp_v2) {
      temp_v1 = (unsigned int)*(unsigned char *)(DAT_0043e18c + 0xa34);
    }
    if ((temp_v2 || temp_v1 != 1) || (temp_v0 = FUN_002c1830(1), temp_v0 == 0)) {
      return 0;
    }
  }
  return 1;
}
