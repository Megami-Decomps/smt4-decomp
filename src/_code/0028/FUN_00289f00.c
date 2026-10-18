/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289f00` (_code @ 0x289f00, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002a8a8c. */
/* Supplied declaration required: FUN_002aa268. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_00289f00(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043da2c;
  temp_v2 = 0;
  do {
    FUN_002bf030(temp_v0 + temp_v2 * 0x8c + 0x34,1);
    temp_v1 = temp_v0 + temp_v2 * 4;
    if (*(char *)(temp_v1 + 0x494) != '\0') {
      if (param_1 != 0) {
        *(unsigned char *)(temp_v1 + 0x494) = 0;
      }
      FUN_002a8a8c();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 0x8c + 0x37c;
    if (*(char *)(temp_v0 + 0x4c8) != '\x01') {
      FUN_002aa268(temp_v1,0,1);
    }
    else {
      FUN_002bdac0(temp_v1,3,0);
    }
    temp_v1 = DAT_0043da2c;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  *(unsigned int *)(DAT_0043da2c + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 3;
  return;
}
