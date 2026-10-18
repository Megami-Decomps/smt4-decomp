/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d9480` (_code @ 0x1d9480, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027ddb0. */
extern int FUN_002f3470(void);
/* Supplied declaration required: FUN_00397cc0. */
/* Supplied declaration required: FUN_0039916c. */


unsigned int FUN_001d9480(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v2 + 0xd);
  if (temp_v0 == '\0') {
    *(unsigned char *)(temp_v2 + 0xd) = 1;
  }
  else {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          return 0;
        }
        temp_v2 = FUN_002f3470();
        if (temp_v2 != 0) {
          FUN_0027ddb0();
        }
        return 0xffffffff;
      }
      FUN_00397cc0(temp_v2 + 0x10);
      temp_v1 = 3;
      *(unsigned char *)(temp_v2 + 0xc) = 1;
    }
    else {
      FUN_0039916c(temp_v2 + 0x10);
      if (*(char *)(temp_v2 + 0x10) == '\0') {
        return 0;
      }
      temp_v1 = 2;
    }
    *(unsigned char *)(temp_v2 + 0xd) = temp_v1;
  }
  return 0;
}
