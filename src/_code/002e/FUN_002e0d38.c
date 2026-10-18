/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0d38` (_code @ 0x2e0d38, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00263534. */
/* Supplied declaration required: FUN_00358874. */


void FUN_002e0d38(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00464fac[6];
  FUN_00263534(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (-1 < temp_v0) {
    FUN_00358874(DAT_00464fac[6],0);
    FUN_002390dc(DAT_00464fac[6]);
    return;
  }
  return;
}
