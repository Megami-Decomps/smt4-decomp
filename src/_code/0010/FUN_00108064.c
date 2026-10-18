/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108064` (_code @ 0x108064, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00117970. */
/* Supplied declaration required: FUN_001191e8. */
extern int FUN_002c0ac8(void);


unsigned int FUN_00108064(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = FUN_002c0ac8();
  temp_v3 = *(char *)(temp_v1 + 0xe8c) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v1 + 0xe8d);
  }
  if (temp_v3 && temp_v0 != '\0') {
    temp_v3 = *(char *)(temp_v1 + 0xe95) != '\0';
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(temp_v1 + 0xfdc);
    }
    if ((temp_v3 && temp_v2 != 0) && (*(char *)(temp_v1 + 0xfd8) == '\0')) {
      if (*(char *)(temp_v1 + 0xfe0) != '\0') {
        FUN_001191e8();
      }
      else {
        FUN_00117970(1);
      }
    }
  }
  return 0;
}
