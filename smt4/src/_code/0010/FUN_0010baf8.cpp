/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010baf8` (_code @ 0x10baf8, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4e98(unsigned int);

typedef int romwright_code(...);
extern int DAT_004e3cf4; /* 0x4e3cf4 */
extern int DAT_004e3cf8; /* 0x4e3cf8 */

/* Supplied declaration required: FUN_002c4e98. */
extern int FUN_002c5210(void);


void FUN_0010baf8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c5210();
  if ((temp_v0 == 1) && (temp_v0 = 0, 0 < DAT_004e3cf8)) {
    do {
      for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v0 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c)) {
        if (*(char *)(temp_v1 + 0x98) == '\x03') {
          if (*(romwright_code **)(temp_v1 + 100) != (romwright_code *)0x0) {
            (**(romwright_code **)(temp_v1 + 100))(*(unsigned int *)(temp_v1 + 0x28));
          }
          else {
            FUN_002c4e98(*(unsigned int *)(temp_v1 + 0x60));
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < DAT_004e3cf8);
  }
  return;
}

} /* extern "C" */
