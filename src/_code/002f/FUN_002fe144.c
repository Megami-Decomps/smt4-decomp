/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe144` (_code @ 0x2fe144, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: FUN_002a775c. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002fe144(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (*(char *)(temp_v0 + 0x1c) != '\0') {
    FUN_002a72c0(0);
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(int *)(temp_v0 + 0x18) != 0) {
    FUN_002a775c();
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  FUN_002a4d14();
  FUN_002c415c(temp_v0);
  return;
}
