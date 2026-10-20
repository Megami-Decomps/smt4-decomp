/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004070b4` (_code @ 0x4070b4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(...);
int asdOperatorDelete(...);
int rt_vec_dtor(...);
int FUN_00406a1c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00522df0(...); /* 0x522df0 */
extern unsigned char DAT_00557b70; /* 0x557b70 */

/* Supplied declaration required: FUN_001006ec. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: FUN_00406a1c. */


void FUN_004070b4(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557b70;
  FUN_00406a1c(param_1);
  rt_vec_dtor(param_1 + 0x45,FUN_00522df0,0xc,8);
  FUN_001006ec(param_1[0x42],(int)(param_1[0x44] - param_1[0x42]) >> 3,0);
  asdOperatorDelete(param_1);
  return;
}

} /* extern "C" */
