/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab770` (_code @ 0x3ab770, 0x1b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_003ab964; /* 0x3ab964 */
extern unsigned char LAB_003ab980; /* 0x3ab980 */
extern unsigned char LAB_003ab99c; /* 0x3ab99c */
extern unsigned char LAB_003ad034; /* 0x3ad034 */
extern unsigned char LAB_003ad05c; /* 0x3ad05c */
extern unsigned char LAB_003ad288; /* 0x3ad288 */
extern unsigned char LAB_003ad588; /* 0x3ad588 */
extern unsigned char DAT_0042207c; /* 0x42207c */
extern int *DAT_0043d9f8; /* 0x43d9f8 */

/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_00232800. */
extern unsigned int *FUN_002333bc(void);
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_00233804. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002c23f8. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_003ab0d0. */
/* Supplied declaration required: FUN_003acd48. */
/* Supplied declaration required: FUN_003ad300. */


void FUN_003ab770(int *param_1)

{
/* irregular: 12 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned char *)(param_1 + 0x296c) = 0;
  FUN_0022e490(param_1 + 0x16a);
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_003acd48();
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,4,1);
  DAT_0043d9f8 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003ab964;
  FUN_002c5978(&LAB_003ab964,2,0,0,&LAB_003ad034,&LAB_003ad05c,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003ab980;
  FUN_002c4c00(&LAB_003ab980,0x6f,1,0,&LAB_003ad288,0,DAT_0043d9f8,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003ab99c;
  FUN_002c4c00(&LAB_003ab99c,0xe6,1,0,&LAB_003ad588,0,DAT_0043d9f8,param_1[1]);
  param_1[3] = (int)puVar2;
  FUN_00232800(param_1 + 0x32,0x140,0,0x1d);
  FUN_00233600(param_1 + 0x37);
  FUN_002333d4(param_1 + 0x37,0);
  FUN_002333d4(param_1 + 0x37,1);
  temp_v0 = 0x68;
  FUN_002c23f8();
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)FUN_002333bc();
    *puVar5 = (unsigned int)&DAT_0042207c;
  }
  param_1[0x164] = (int)puVar5;
  puVar5[0x19] = (unsigned int)(param_1 + 0x32);
  FUN_003ab0d0(param_1);
  FUN_00233804(param_1 + 0x157,0x1d,0x40e,10);
  *(unsigned char *)(param_1 + 0x15b) = 1;
  FUN_0029f10c(0,0x323232ff);
  FUN_003ad300();
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}
