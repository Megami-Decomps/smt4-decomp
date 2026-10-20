/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ed30` (_code @ 0x20ed30, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039309c(void);

/* Supplied declaration required: FUN_0039309c. */


unsigned int FUN_0020ed30(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *param_1;
  temp_v0 = *(char *)(temp_v1 + 0x1a);
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x1c);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_0039309c();
    }
  }
  return 0;
}

} /* extern "C" */
