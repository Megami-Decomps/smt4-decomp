/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022100c` (_code @ 0x22100c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024ec64(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
extern unsigned int FUN_0029bf90(unsigned int);
extern int FUN_0029ee4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a89e4. */


unsigned int FUN_0022100c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v4 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0024ec64(temp_v0 & 0xffff);
    if (temp_v1 == 0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v2 = FUN_0029bf90(temp_v0 & 0xffff);
      temp_v3 = FUN_002a89e4();
      temp_v1 = FUN_0029ee4c(temp_v3,10);
      if (temp_v1 == 0) {
        temp_v3 = FUN_002a89e4(temp_v2);
        temp_v1 = FUN_0029ee4c(temp_v3,1);
        if (temp_v1 == 0) {
          temp_v2 = FUN_002a89e4(temp_v2);
          temp_v1 = FUN_0029ee4c(temp_v2,2);
          if (temp_v1 == 0) {
            FUN_0028df54(temp_v4);
            return 1;
          }
        }
      }
      temp_v4 = 1;
    }
  }
  FUN_0028df54(temp_v4);
  return 1;
}
