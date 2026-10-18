/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfea4` (_code @ 0x2dfea4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_002dfea4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_00447a78;
  puVar2 = (unsigned char *)(DAT_00447a78 + 0xcbd0);
  FUN_002a775c(*(unsigned int *)(DAT_00447a78 + 0xcbec));
  *(unsigned int *)(temp_v0 + 0xcbec) = 0;
  *puVar2 = 0;
  FUN_002ae898(10,0x25);
  return;
}
