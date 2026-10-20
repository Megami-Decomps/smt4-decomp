/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034913c` (_code @ 0x34913c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00165088(int, int);
int FUN_00166f80(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_00165088. */
/* Supplied declaration required: FUN_00166f80. */


void FUN_0034913c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  if (*(char *)(DAT_0057f590 + 8) != '\0') {
    if (*(char *)(DAT_0057f590 + 0x6d) != '\0') {
      *(unsigned char *)(DAT_0057f590 + 8) = 0;
      FUN_00166f80(*(unsigned int *)(temp_v0 + 4));
      return;
    }
    if (DAT_0057f590 != 0) {
      FUN_00165088(DAT_0057f590,*(unsigned char *)(DAT_0057f590 + 9));
      *(unsigned char *)(temp_v0 + 8) = 3;
      *(unsigned char *)(temp_v0 + 0x35) = 0;
    }
  }
  return;
}

} /* extern "C" */
