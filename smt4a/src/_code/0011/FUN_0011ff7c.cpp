/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ff7c` (_code @ 0x11ff7c, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(...);
int FUN_002f67bc(unsigned int *);
int FUN_003106f0(int *, int *, int *, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055acc0; /* 0x55acc0 */

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f67bc. */
/* Supplied declaration required: FUN_003106f0. */


void FUN_0011ff7c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_0055acc0;
  piVar1 = (int *)(param_1 + 0x10);
  temp_v1 = *(unsigned int *)(param_1[0x14] + 8);
  temp_v2 = param_1[0x14];
  uStack_10 = param_4;
  FUN_003106f0(&uStack_10,piVar1,&temp_v1,&temp_v2);
  temp_v0 = param_1[0x14];
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 8);
    temp_v2 = temp_v0;
    FUN_003106f0(&uStack_10,piVar1,&temp_v1,&temp_v2);
    temp_v0 = param_1[0x14];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[0x11];
    param_1[0x11] = temp_v0;
    while (piVar3 = (int *)*piVar1, piVar3 != (int *)0x0) {
      *piVar1 = *piVar3;
      FUN_002e6e14(piVar3[2]);
      FUN_002e6e14(piVar3);
    }
  }
  FUN_002f67bc(param_1);
  return;
}

} /* extern "C" */
