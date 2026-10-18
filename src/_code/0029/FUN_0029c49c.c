/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c49c` (_code @ 0x29c49c, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8a08(void);
extern int FUN_003bcbe0(int);


int FUN_0029c49c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002a8a08();
  temp_v1 = FUN_002a8a08();
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v1 + temp_v2 + 0x90f0) < '\0') break;
    temp_v2 = temp_v2 + 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v2 < 0x18);
  if (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x910b)) {
    temp_v0 = FUN_002a8a08();
    temp_v1 = 0;
    do {
      temp_v2 = FUN_003bcbe0(temp_v0 + temp_v1 * 0x604 + 0x90);
      if (temp_v2 == 0) {
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return -1;
}
