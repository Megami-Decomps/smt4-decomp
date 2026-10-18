/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010812c` (_code @ 0x10812c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00117a70. */
/* Supplied declaration required: FUN_001192c8. */
extern int FUN_002bff10(unsigned int);
extern int FUN_002c08f0(void);


int FUN_0010812c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bff10(0);
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
        FUN_001192c8();
      }
      else {
        FUN_00117a70(0);
      }
    }
  }
  return 0;
}
