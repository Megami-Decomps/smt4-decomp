/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7ad8` (_code @ 0x3a7ad8, 0x210 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_003a7d28; /* 0x3a7d28 */
extern unsigned char LAB_003a7d40; /* 0x3a7d40 */
extern unsigned char LAB_003a7d54; /* 0x3a7d54 */
extern unsigned char LAB_003aaf08; /* 0x3aaf08 */
extern unsigned char LAB_003aaf30; /* 0x3aaf30 */
extern unsigned char LAB_003ac958; /* 0x3ac958 */
extern unsigned char LAB_003acc74; /* 0x3acc74 */
extern unsigned char DAT_0042207c; /* 0x42207c */
extern int *DAT_0043d9c8; /* 0x43d9c8 */
extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_0022d33c. */
/* Supplied declaration required: FUN_0022d5c8. */
/* Supplied declaration required: FUN_0022df7c. */
/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_00232800. */
extern unsigned int *FUN_002333bc(void);
/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_00233804. */
extern int FUN_002338ac(int *);
/* Supplied declaration required: FUN_0029e01c. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002c23f8. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002e32c8. */
/* Supplied declaration required: FUN_003aad60. */


void FUN_003a7ad8(int *param_1)

{
/* irregular: 14 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  
  *(unsigned char *)((int)param_1 + 0x5a5) = 1;
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned short *)((int)param_1 + 0xa5b2) = 0xffff;
  *(unsigned char *)(param_1 + 0x296c) = 0;
  FUN_0022e490();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_0029e01c(2);
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,4,1);
  DAT_0043d9c8 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003a7d28;
  FUN_002c5978(&LAB_003a7d28,2,0,0,&LAB_003aaf08,&LAB_003aaf30,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003a7d40;
  FUN_002c4c00(&LAB_003a7d40,0x6f,1,0,&LAB_003ac958,0,DAT_0043d9c8,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003a7d54;
  FUN_002c4c00(&LAB_003a7d54,0xe6,1,0,&LAB_003acc74,0,DAT_0043d9c8,param_1[1]);
  param_1[3] = (int)puVar2;
  FUN_00232800(param_1 + 0x32,0x140,0,0x1d);
  temp_v0 = 0x68;
  FUN_002c23f8();
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)FUN_002333bc();
    *puVar5 = (unsigned int)&DAT_0042207c;
  }
  param_1[0x164] = (int)puVar5;
  puVar5[0x19] = (unsigned int)(param_1 + 0x32);
  FUN_0022d5c8(param_1);
  FUN_003aad60((int)param_1 + 0x96);
  FUN_0022df7c((int)param_1 + 0x96,0);
  temp_v0 = FUN_002338ac(param_1 + 8);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      if ((short)param_1[temp_v1 * 8 + 0x16b] != 0) {
        FUN_0022df7c((int)param_1 + 0x96,(short)param_1[temp_v1 * 8 + 0x16b]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_00233600(param_1 + 0x37);
  temp_v0 = param_1[10];
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_00233804(param_1 + 0x157,0x1d,0x40e,temp_v0);
  *(unsigned char *)(param_1 + 0x15b) = 1;
  FUN_0029f10c(0,0x323232ff);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_002e32c8();
  DAT_0043d9cc = 0xffffffff;
  FUN_0022d33c(param_1);
  return;
}
