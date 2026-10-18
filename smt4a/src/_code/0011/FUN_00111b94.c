/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111b94` (_code @ 0x111b94, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00111bf8; /* 0x111bf8 */
extern int *DAT_00594a04; /* 0x594a04 */

/* Supplied declaration required: FUN_002e9acc. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002fd546. */


void FUN_00111b94(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_002e9acc(&temp_v1,*(unsigned int *)(param_1 + 0x98));
  *(unsigned int *)(param_1 + 0x174) = temp_v2;
  *(unsigned int *)(param_1 + 0x170) = temp_v1;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_002fd546(param_1);
  }
  (**(romwright_code **)(*DAT_00594a04 + 0xc))(DAT_00594a04,param_1 + 0x118,*(int *)(param_1 + 0x1ac) + 8);
  temp_v0 = FUN_002ea3c0(temp_v3,0x111edd,0,&LAB_00111bf8);
  FUN_002ea3d0(param_1,temp_v0);
  return;
}
