/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029933c` (_code @ 0x29933c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c0b94. */


unsigned int FUN_0029933c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e190;
  temp_v1 = FUN_002c0b94();
  if (*(int *)(temp_v1 + 0x1f454) != 0) {
    temp_v1 = FUN_002c0b94(*(int *)(temp_v1 + 0x1f454));
    *(unsigned int *)(temp_v0 + 0x9c) = *(unsigned int *)(temp_v1 + 0x1f454);
    *(unsigned char *)(temp_v0 + 0xa1) = 1;
    *(unsigned char *)(temp_v0 + 0xa0) = 1;
    temp_v1 = temp_v0 + 0x86c;
    FUN_002bdb2c(temp_v1,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
    FUN_002b90e0(temp_v1,0x16);
    FUN_002bf030(temp_v1,6);
  }
  return 1;
}
