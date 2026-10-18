/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139c68` (_code @ 0x139c68, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005b3c70; /* 0x5b3c70 */

extern unsigned int FUN_00168188(void);
/* Supplied declaration required: FUN_0018d9f0. */


void FUN_00139c68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  DAT_005b3c70 = param_1;
  temp_v0 = FUN_00168188();
  FUN_0018d9f0(&DAT_005b3c70,temp_v0,DAT_005b3c70);
  return;
}
