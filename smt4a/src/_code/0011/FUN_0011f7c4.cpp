/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f7c4` (_code @ 0x11f7c4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00310784(int, int *);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00310784. */


void FUN_0011f7c4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x164);
  temp_v1 = *(unsigned int *)(param_1 + 0x168);
  temp_v2 = *(unsigned int *)(param_1 + 0x16c);
  FUN_00310784(param_1,&temp_v0);
  return;
}

} /* extern "C" */
