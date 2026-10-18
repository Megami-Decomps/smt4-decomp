/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df5c8` (_code @ 0x2df5c8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057a7b8; /* 0x57a7b8 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_004ab734. */


void FUN_002df5c8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00164a9c();
  temp_v0 = DAT_0057a7b8;
  if (DAT_0057a7b8 != 0) {
    FUN_004ab734(DAT_0057a9c8);
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      FUN_0019c364();
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    FUN_0019a5a0(DAT_0057a7b8);
    DAT_0057a7b8 = 0;
  }
  FUN_001631d0(*(unsigned int *)(temp_v1 + 0x40),0);
  return;
}
