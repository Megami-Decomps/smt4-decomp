/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8fe0` (_code @ 0x3a8fe0, 0x318 bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char LAB_003a9340; /* 0x3a9340 */
extern unsigned char LAB_003a9358; /* 0x3a9358 */
extern unsigned char LAB_003a9370; /* 0x3a9370 */
extern unsigned char LAB_003ac6e8; /* 0x3ac6e8 */
extern unsigned char LAB_003ac710; /* 0x3ac710 */
extern unsigned char LAB_003aca2c; /* 0x3aca2c */
extern unsigned char LAB_003acdec; /* 0x3acdec */
extern unsigned char DAT_00422394; /* 0x422394 */
extern unsigned char DAT_00422434; /* 0x422434 */
extern int *DAT_0043d990; /* 0x43d990 */

/* Supplied declaration required: FUN_0022dde8. */
/* Supplied declaration required: FUN_0022e2fc. */
/* Supplied declaration required: FUN_0023266c. */
/* Supplied declaration required: FUN_00233228. */
/* Supplied declaration required: FUN_0023346c. */
/* Supplied declaration required: FUN_00233670. */
extern int FUN_00233718(int *);
/* Supplied declaration required: FUN_00240cec. */
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_0029dd7c. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
extern int FUN_003420f4(int);
/* Supplied declaration required: FUN_003a8aa0. */
/* Supplied declaration required: FUN_003aab40. */


void FUN_003a8fe0(int *param_1)

{
/* irregular: 15 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned short *)(param_1 + 0x296c) = 0xffff;
  *(unsigned char *)((int)param_1 + 0xa6be) = 0xff;
  FUN_0022e2fc();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_0029dd7c(6);
  if ((char)param_1[0x169] == '\x01') {
    FUN_00240cec(0);
  }
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,4,1);
  DAT_0043d990 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003a9340;
  FUN_002c5788(&LAB_003a9340,2,0,0,&LAB_003ac6e8,&LAB_003ac710,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003a9358;
  FUN_002c4a08(&LAB_003a9358,0x6f,1,0,&LAB_003aca2c,0,DAT_0043d990,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003a9370;
  FUN_002c4a08(&LAB_003a9370,0xe6,1,0,&LAB_003acdec,0,DAT_0043d990,param_1[1]);
  param_1[3] = (int)puVar2;
  temp_v0 = 0x68;
  if ((char)param_1[0x169] != '\0') {
    FUN_002c222c();
    puVar5 = (unsigned int *)0x0;
    if (temp_v0 != 0) {
      puVar5 = (unsigned int *)FUN_00233228();
      *puVar5 = (unsigned int)&DAT_00422394;
    }
    param_1[0x164] = (int)puVar5;
    puVar5[0x19] = (unsigned int)(param_1 + 0x32);
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233670(param_1 + 0x157,0x1c,0x1030,temp_v0);
    *(unsigned char *)(param_1 + 0x15b) = 1;
    temp_v0 = 1;
    *(unsigned short *)((int)param_1 + 0xa6ba) = 0;
    do {
      temp_v1 = FUN_003420f4(temp_v0);
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
    FUN_002c222c();
    piVar1 = (int *)0x0;
    if (temp_v0 != 0) {
      piVar1 = (int *)FUN_00233228();
      *piVar1 = (int)&DAT_00422434;
    }
    param_1[0x164] = (int)piVar1;
    (**(romwright_code **)(*piVar1 + 8))();
    *(unsigned short *)(param_1[0x164] + 4) = *(unsigned short *)(param_1[0x164] + 4) | 0x1000;
    *(int **)(param_1[0x164] + 100) = param_1 + 0x32;
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233670(param_1 + 0x157,0x1d,0x40e,temp_v0);
    *(unsigned char *)(param_1 + 0x15b) = 1;
  }
  FUN_003a8aa0(param_1);
  FUN_003aab40((int)param_1 + 0x96);
  FUN_0022dde8((int)param_1 + 0x96,0);
  temp_v0 = FUN_00233718(param_1 + 8);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      if ((short)param_1[temp_v1 * 8 + 0x16b] != 0) {
        FUN_0022dde8((int)param_1 + 0x96,(short)param_1[temp_v1 * 8 + 0x16b]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_0023346c(param_1 + 0x37);
  FUN_00297410(0x22);
  if ((char)param_1[0x169] != '\0') {
    FUN_0023266c(param_1 + 0x32,0x140,0,0x1c);
  }
  else {
    FUN_0023266c(param_1 + 0x32,0x140,0,0x1d);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
