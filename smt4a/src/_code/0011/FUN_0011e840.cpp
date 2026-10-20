/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e840` (_code @ 0x11e840, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012f618(int *, int *, int *, int *);
int FUN_002e6e14(...);
int FUN_00307140(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055ab2c; /* 0x55ab2c */

/* Supplied declaration required: FUN_0012f618. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307140. */


void FUN_0011e840(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  piVar3 = (int *)(param_1 + 0x20);
  *param_1 = (unsigned int)&DAT_0055ab2c;
  temp_v2 = param_1[0x24];
  temp_v1 = param_2;
  temp_v0 = param_3;
  uStack_10 = param_4;
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_0012f618(&uStack_10,piVar3,&temp_v1,&temp_v2);
    temp_v0 = param_1[0x24];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[0x21];
    param_1[0x21] = temp_v0;
    while (piVar2 = (int *)*piVar3, temp_v0 = temp_v2, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  temp_v2 = temp_v0;
  FUN_00307140(param_1);
  return;
}

} /* extern "C" */
