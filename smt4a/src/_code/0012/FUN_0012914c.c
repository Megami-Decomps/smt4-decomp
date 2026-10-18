/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012914c` (_code @ 0x12914c, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00559038; /* 0x559038 */

/* Supplied declaration required: FUN_001290ba. */
/* Supplied declaration required: FUN_00130664. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002f5966(unsigned int *);
/* Supplied declaration required: FUN_00303350. */
/* Supplied declaration required: FUN_0030cdc0. */
/* Supplied declaration required: FUN_0030cde0. */


void FUN_0012914c(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_00559038;
  temp_v1 = param_2;
  temp_v2 = param_3;
  uStack_10 = param_4;
  FUN_001290ba(param_1);
  piVar3 = (int *)(param_1 + 0x15);
  temp_v0 = param_1[0x19];
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 8);
    temp_v2 = temp_v0;
    FUN_00130664(&uStack_10,piVar3,&temp_v1,&temp_v2);
    FUN_0030cde0(piVar3,param_1[0x19],0);
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  temp_v0 = FUN_002f5966(param_1 + 9);
  temp_v0 = temp_v0 - 0x18;
  FUN_00303350(temp_v0);
  FUN_0030cdc0(temp_v0 - 0xc);
  return;
}
