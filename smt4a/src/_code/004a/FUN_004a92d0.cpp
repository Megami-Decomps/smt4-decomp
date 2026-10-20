/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a92d0` (_code @ 0x4a92d0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231cdc(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00231cdc. */


void FUN_004a92d0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned int *)(DAT_0057a9c8 + 0x74a0) = 0xb;
  FUN_00231cdc(temp_v0 + 0x28c4,param_2,0xffffffff,param_3);
  return;
}

} /* extern "C" */
