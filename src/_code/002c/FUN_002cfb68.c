/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfb68` (_code @ 0x2cfb68, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002cfb68(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (*(int *)(temp_v0 + 0xc) != 0) {
    FUN_002ae898(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    FUN_002a60cc(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    *(unsigned int *)(temp_v0 + 0xc) = 0;
  }
  if (*(int *)(temp_v0 + 0x84) != -1) {
    FUN_002ae898(*(unsigned int *)(temp_v0 + 0x10));
    FUN_002a60cc(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
    *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x80) = 0;
  }
  FUN_002c415c(temp_v0);
  return;
}
