/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f400` (_code @ 0x20f400, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00224e7c. */
extern int FUN_002a63f8(unsigned int, int);


unsigned int FUN_0020f400(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x20);
  if (temp_v3 != 0) {
    temp_v1 = 0;
    temp_v2 = temp_v1;
    do {
      temp_v0 = FUN_002a63f8(0x14,temp_v1);
      if (temp_v0 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    temp_v1 = 0;
    do {
      temp_v0 = FUN_002a63f8(0x15,temp_v1);
      if (temp_v0 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    if (temp_v2 >= 9) {
      FUN_00224e7c(temp_v3,0);
      return 0;
    }
  }
  return 0;
}
