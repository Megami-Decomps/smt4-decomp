/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d660` (_code @ 0x20d660, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002532f8(void);
int FUN_0027e774(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002532f8. */
/* Supplied declaration required: FUN_0027e774. */


void FUN_0020d660(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned char *)(DAT_00447a78 + 0x18) = 1;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_002532f8();
  FUN_0027e774(0,1);
  return;
}

} /* extern "C" */
