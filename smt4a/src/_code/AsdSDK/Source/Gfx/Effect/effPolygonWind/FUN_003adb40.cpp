/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adb40` (_code @ 0x3adb40, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_00180070(void);
int FUN_002124f0(int, unsigned int);
int FUN_00390164(int, unsigned int, unsigned char *, int, int);
int FUN_003c82d8(int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_005c1ec8; /* 0x5c1ec8 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00180070. */
/* Supplied declaration required: FUN_002124f0. */
extern unsigned int FUN_0037a834(unsigned int);
/* Supplied declaration required: FUN_00390164. */
/* Supplied declaration required: FUN_003c82d8. */


int * FUN_003adb40(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = (int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,*(int *)(param_1 + 0x38) * 0x30 + 0xc,0x10,1);
  *piVar1 = (int)(piVar1 + 3);
  piVar1[2] = (int)piVar1;
  temp_v2 = *(unsigned int *)(param_1 + 0x8c);
  if (temp_v2 < 4) {
    temp_v2 = 3;
  }
  *(unsigned int *)(param_1 + 0x8c) = temp_v2;
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  FUN_00390164(temp_v0,temp_v2 & 0xffff,&DAT_005c1ec8,4,0x4c);
  piVar1[1] = temp_v0;
  if (param_2 != 0) {
    FUN_00180070();
  }
  else {
    temp_v1 = FUN_0037a834(0x14);
    FUN_002124f0(piVar1[1],temp_v1);
  }
  FUN_003c82d8(piVar1,param_1);
  return piVar1;
}

} /* extern "C" */
