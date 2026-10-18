/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010564c` (_code @ 0x10564c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0012eaea. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002ebcc8. */


unsigned long long FUN_0010564c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int uStack_10;
  
  piVar2 = (int *)(param_1 + 4);
  temp_v1 = *(int *)(param_1 + 0x14);
  temp_v0 = param_2;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 8);
    uStack_10 = param_4;
    FUN_0012eaea(&uStack_10,piVar2,&temp_v0,&temp_v1);
    FUN_002ebcc8(piVar2,*(unsigned int *)(param_1 + 0x14),0);
    while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
      *piVar2 = *piVar1;
      FUN_002e6e14(piVar1[2]);
      FUN_002e6e14(piVar1);
    }
  }
  return romwright_piece_4_4(temp_v0,param_1);
}
