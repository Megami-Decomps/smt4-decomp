/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1b7c` (_code @ 0x3a1b7c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_002b3b58(int, int, int, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_005c1f28; /* 0x5c1f28 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002b3b58. */


int * FUN_003a1b7c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  
  piVar1 = (int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,*(int *)(param_1 + 0x38) * 0x2c + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  FUN_002b3b58(temp_v0,3,5,&DAT_005c1f28,0x48);
  piVar1[1] = temp_v0;
  return piVar1;
}

} /* extern "C" */
