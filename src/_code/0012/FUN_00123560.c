/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123560` (_code @ 0x123560, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */


void FUN_00123560(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_004c6330;
  if (DAT_004c6330 == 0) {
    return;
  }
  FUN_0013b608();
  if (DAT_004c62a1 == '\0') {
    DAT_004c62a2 = DAT_004c62a1;
  }
  else {
    *(unsigned char *)(*(int *)(temp_v0 + 0x18) + (*(int *)(temp_v0 + 0x24) * 0x1c - 0x1a)) = 1;
    DAT_004c62a8 = 1;
  }
  FUN_0013b618();
  return;
}
