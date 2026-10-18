/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7288` (_code @ 0x2a7288, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00230b9c. */


void FUN_002a7288(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = DAT_00588fe8;
  if (*(int *)(DAT_00588fe8 + 0x518) != 0) {
    FUN_00230b9c(2,0xffffffff,0);
    temp_v0 = DAT_00588fe8;
    *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
    temp_v1 = *(unsigned int *)(temp_v0 + 0x518);
    *(unsigned int *)(temp_v0 + 0x518) = 2;
    *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
    *(unsigned int *)(temp_v2 + 0x520) = 0;
    *(unsigned char *)(temp_v2 + 0x514) = 0;
    temp_v2 = 0;
    if (*(char *)(temp_v0 + 0x59a) != '\0') {
      do {
        FUN_001641c4();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x59a));
    }
    *(unsigned char *)(temp_v0 + 0x59a) = 0;
    FUN_001b4a90(temp_v0 + 0x544,0x54,0xffffffff);
    return;
  }
  return;
}
