/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe108` (_code @ 0x2fe108, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002fe108(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (*(char *)(temp_v0 + 0x1c) != '\0') {
    FUN_002a7604(0);
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(int *)(temp_v0 + 0x18) != 0) {
    FUN_002a7aa0();
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  FUN_002a5058();
  FUN_002c4360(temp_v0);
  return;
}
