/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023554c` (_code @ 0x23554c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002b8d24. */
/* Supplied declaration required: FUN_002b90c0. */


void FUN_0023554c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e190;
  if (*(char *)(DAT_0043e190 + 8) != '\0') {
    if (*(char *)(DAT_0043e190 + 0x5f) != '\0') {
      *(unsigned char *)(DAT_0043e190 + 8) = 0;
      FUN_002b90c0(*(unsigned int *)(temp_v0 + 4));
      return;
    }
    if (DAT_0043e190 != 0) {
      FUN_002b8d24(DAT_0043e190,*(unsigned char *)(DAT_0043e190 + 9));
      *(unsigned char *)(temp_v0 + 8) = 3;
      *(unsigned char *)(temp_v0 + 0x35) = 0;
    }
  }
  return;
}
