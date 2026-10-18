/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9200` (_code @ 0x3a9200, 0x318 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_003a9560; /* 0x3a9560 */
extern unsigned char LAB_003a9578; /* 0x3a9578 */
extern unsigned char LAB_003a9590; /* 0x3a9590 */
extern unsigned char LAB_003ac908; /* 0x3ac908 */
extern unsigned char LAB_003ac930; /* 0x3ac930 */
extern unsigned char LAB_003acc4c; /* 0x3acc4c */
extern unsigned char LAB_003ad00c; /* 0x3ad00c */
extern unsigned char DAT_00421fdc; /* 0x421fdc */
extern unsigned char DAT_0042207c; /* 0x42207c */
extern int *DAT_0043d990; /* 0x43d990 */

/* Supplied declaration required: FUN_0022df7c. */
/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_00232800. */
/* Supplied declaration required: FUN_002333bc. */
/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_00233804. */
extern int FUN_002338ac(int *);
/* Supplied declaration required: FUN_00240e1c. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_0029e01c. */
/* Supplied declaration required: FUN_002c23f8. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
extern int FUN_0034232c(int);
/* Supplied declaration required: FUN_003a8cc0. */
/* Supplied declaration required: FUN_003aad60. */


void FUN_003a9200(int *param_1)

{
/* irregular: 14 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned short *)(param_1 + 0x296c) = 0xffff;
  *(unsigned char *)((int)param_1 + 0xa6be) = 0xff;
  FUN_0022e490();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_0029e01c(6);
  if ((char)param_1[0x169] == '\x01') {
    FUN_00240e1c(0);
  }
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,4,1);
  DAT_0043d990 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003a9560;
  FUN_002c5978(&LAB_003a9560,2,0,0,&LAB_003ac908,&LAB_003ac930,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003a9578;
  FUN_002c4c00(&LAB_003a9578,0x6f,1,0,&LAB_003acc4c,0,DAT_0043d990,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003a9590;
  FUN_002c4c00(&LAB_003a9590,0xe6,1,0,&LAB_003ad00c,0,DAT_0043d990,param_1[1]);
  param_1[3] = (int)puVar2;
  temp_v0 = 0x68;
  if ((char)param_1[0x169] != '\0') {
    FUN_002c23f8();
    puVar5 = (unsigned int *)0x0;
    if (temp_v0 != 0) {
      puVar5 = (unsigned int *)FUN_002333bc();
      *puVar5 = (unsigned int)&DAT_00421fdc;
    }
    param_1[0x164] = (int)puVar5;
    puVar5[0x19] = (unsigned int)(param_1 + 0x32);
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233804(param_1 + 0x157,0x1c,0x1030,temp_v0);
    *(unsigned char *)(param_1 + 0x15b) = 1;
    temp_v0 = 1;
    *(unsigned short *)((int)param_1 + 0xa6ba) = 0;
    do {
      temp_v1 = FUN_0034232c(temp_v0);
      if (temp_v1 != 0) {
        *(short *)((int)param_1 + *(short *)((int)param_1 + 0xa6ba) * 2 + 0xa5ba) = (short)temp_v0;
        if (param_1[0x296d] == temp_v0) {
          *(unsigned short *)(param_1 + 0x29af) = *(unsigned short *)((int)param_1 + 0xa6ba);
        }
        *(short *)((int)param_1 + 0xa6ba) = *(short *)((int)param_1 + 0xa6ba) + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x3c);
  }
  else {
    FUN_002c23f8();
    piVar1 = (int *)0x0;
    if (temp_v0 != 0) {
      piVar1 = (int *)FUN_002333bc();
      *piVar1 = (int)&DAT_0042207c;
    }
    param_1[0x164] = (int)piVar1;
    (**(romwright_code **)(*piVar1 + 8))();
    *(unsigned short *)(param_1[0x164] + 4) = *(unsigned short *)(param_1[0x164] + 4) | 0x1000;
    *(int **)(param_1[0x164] + 100) = param_1 + 0x32;
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233804(param_1 + 0x157,0x1d,0x40e,temp_v0);
    *(unsigned char *)(param_1 + 0x15b) = 1;
  }
  FUN_003a8cc0(param_1);
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
  FUN_002976ac(0x22);
  if ((char)param_1[0x169] != '\0') {
    FUN_00232800(param_1 + 0x32,0x140,0,0x1c);
  }
  else {
    FUN_00232800(param_1 + 0x32,0x140,0,0x1d);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
