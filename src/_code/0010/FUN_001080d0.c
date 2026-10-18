/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001080d0` (_code @ 0x1080d0, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00117970. */
/* Supplied declaration required: FUN_001191e8. */
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);


int FUN_001080d0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = FUN_002c00e8(0);
  if (((temp_v1 == 0) && (*(char *)(temp_v0 + 0xe8c) != '\0')) && (*(char *)(temp_v0 + 0xe8d) != '\0')) {
    temp_v2 = *(char *)(temp_v0 + 0xe96) == '\0';
    temp_v1 = 0;
    if (!temp_v2) {
      temp_v1 = *(int *)(temp_v0 + 0xfdc);
    }
    if (temp_v2 || temp_v1 == 0) {
      return temp_v1;
    }
    if (*(char *)(temp_v0 + 0xfd8) == '\0') {
      if (*(char *)(temp_v0 + 0xfe0) != '\0') {
        FUN_001191e8();
      }
      else {
        FUN_00117970(0);
      }
    }
  }
  return 0;
}
