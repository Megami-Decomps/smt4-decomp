/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276078` (_code @ 0x276078, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028975c. */
extern int FUN_002c2950(void);


void FUN_00276078(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002c2950();
  temp_v2 = 0;
  if ('\0' < *(char *)(temp_v0 + 0xde3)) {
    do {
      if ((*(char *)(temp_v0 + temp_v2 + 0xde4) != '\0') &&
         (temp_v1 = temp_v0 + temp_v2 * 2, *(short *)(temp_v1 + 0xe04) == param_1)) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0xde4) = 0;
        temp_v1 = (int)*(short *)(temp_v1 + 0xdf4);
        if (temp_v1 != 0) {
          FUN_0028975c(temp_v1,1);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(char *)(temp_v0 + 0xde3));
  }
  return;
}
