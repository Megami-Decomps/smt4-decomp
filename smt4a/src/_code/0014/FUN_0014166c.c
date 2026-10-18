/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014166c` (_code @ 0x14166c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00640118; /* 0x640118 */
extern int DAT_0064011c; /* 0x64011c */

/* Supplied declaration required: FUN_00167eb0. */
extern int FUN_001696f4(void);


void FUN_0014166c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001696f4();
  if ((temp_v0 == 1) && (temp_v0 = 0, 0 < DAT_0064011c)) {
    do {
      for (temp_v1 = *(int *)(DAT_00640118 + temp_v0 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c)) {
        if (*(char *)(temp_v1 + 0x98) == '\x03') {
          if (*(romwright_code **)(temp_v1 + 100) != (romwright_code *)0x0) {
            (**(romwright_code **)(temp_v1 + 100))(*(unsigned int *)(temp_v1 + 0x28));
          }
          else {
            FUN_00167eb0(*(unsigned int *)(temp_v1 + 0x60));
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < DAT_0064011c);
  }
  return;
}
