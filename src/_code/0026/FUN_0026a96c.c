/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a96c` (_code @ 0x26a96c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002a8a8c. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_0026a96c(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = DAT_0043da2c;
  temp_v2 = 0;
  do {
    FUN_002bf030(temp_v1 + temp_v2 * 0x8c + 0x34,1);
    temp_v3 = temp_v1 + temp_v2 * 4;
    temp_v0 = *(char *)(temp_v3 + 0x494);
    if (temp_v0 != '\0') {
      if (temp_v0 == '\a' || temp_v0 == '\t') {
        FUN_002a8a8c();
      }
      if (*(char *)(temp_v3 + 0x494) == '\b') {
        FUN_002a8a8c();
        FUN_002a8a8c();
      }
      FUN_002a8a8c();
    }
    temp_v3 = DAT_0043da2c;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  *(unsigned int *)(DAT_0043da2c + 0xc) = 0;
  *(unsigned int *)(temp_v3 + 0x10) = 3;
  return;
}
