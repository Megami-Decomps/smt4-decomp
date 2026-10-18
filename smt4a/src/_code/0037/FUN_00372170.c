/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372170` (_code @ 0x372170, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_001ff724. */
/* Supplied declaration required: FUN_0031f924. */


void FUN_00372170(unsigned char param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f28c;
  *(unsigned char *)(DAT_0057f28c + 0x93d) = 1;
  *(unsigned char *)(temp_v0 + 0x945) = param_1;
  FUN_001ff724();
  FUN_0031f924();
  return;
}
