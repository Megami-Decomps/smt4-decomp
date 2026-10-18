/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001174c0` (_code @ 0x1174c0, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char DAT_00594ea1; /* 0x594ea1 */

/* Supplied declaration required: FUN_0011ebc0. */


void FUN_001174c0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int uStack_c;
  unsigned int temp_v0 [2];
  
  uStack_c = param_3;
  temp_v0[0] = param_4;
  FUN_0011ebc0(param_1 + 0x10,param_2,&DAT_00594ea1,&uStack_c,temp_v0,param_5);
  return;
}
