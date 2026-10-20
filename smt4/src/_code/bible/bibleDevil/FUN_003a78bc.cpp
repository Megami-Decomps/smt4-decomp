/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a78bc` (_code @ 0x3a78bc, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d1a8(...);
int FUN_0022d434(...);
int FUN_0022dde8(...);
int FUN_0022e2fc(void);
int FUN_0023266c(...);
int FUN_0023346c(...);
int FUN_00233670(...);
int FUN_0029dd7c(int);
int FUN_0029ee6c(...);
int FUN_002c222c(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, unsigned char *, int *);
int FUN_002e333c(void);
int FUN_003aab40(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_003a7b08; /* 0x3a7b08 */
extern unsigned char LAB_003a7b20; /* 0x3a7b20 */
extern unsigned char LAB_003a7b34; /* 0x3a7b34 */
extern unsigned char LAB_003aace8; /* 0x3aace8 */
extern unsigned char LAB_003aad10; /* 0x3aad10 */
extern unsigned char LAB_003ac738; /* 0x3ac738 */
extern unsigned char LAB_003aca54; /* 0x3aca54 */
extern unsigned char DAT_00422434; /* 0x422434 */
extern int *DAT_0043d9c8; /* 0x43d9c8 */
extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_0022d1a8. */
/* Supplied declaration required: FUN_0022d434. */
/* Supplied declaration required: FUN_0022dde8. */
/* Supplied declaration required: FUN_0022e2fc. */
/* Supplied declaration required: FUN_0023266c. */
extern unsigned int *FUN_00233228(void);
/* Supplied declaration required: FUN_0023346c. */
/* Supplied declaration required: FUN_00233670. */
extern int FUN_00233718(int *);
/* Supplied declaration required: FUN_0029dd7c. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002e333c. */
/* Supplied declaration required: FUN_003aab40. */


void FUN_003a78bc(int *param_1)

{
/* irregular: 15 native warning(s); review required */
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
  FUN_0022e2fc();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_0029dd7c(2);
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,4,1);
  DAT_0043d9c8 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003a7b08;
  FUN_002c5788(&LAB_003a7b08,2,0,0,&LAB_003aace8,&LAB_003aad10,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003a7b20;
  FUN_002c4a08(&LAB_003a7b20,0x6f,1,0,&LAB_003ac738,0,DAT_0043d9c8,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003a7b34;
  FUN_002c4a08(&LAB_003a7b34,0xe6,1,0,&LAB_003aca54,0,DAT_0043d9c8,param_1[1]);
  param_1[3] = (int)puVar2;
  FUN_0023266c(param_1 + 0x32,0x140,0,0x1d);
  temp_v0 = 0x68;
  FUN_002c222c();
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)FUN_00233228();
    *puVar5 = (unsigned int)&DAT_00422434;
  }
  param_1[0x164] = (int)puVar5;
  puVar5[0x19] = (unsigned int)(param_1 + 0x32);
  FUN_0022d434(param_1);
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
  temp_v0 = param_1[10];
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_00233670(param_1 + 0x157,0x1d,0x40e,temp_v0);
  *(unsigned char *)(param_1 + 0x15b) = 1;
  FUN_0029ee6c(0,0x323232ff);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_002e333c();
  DAT_0043d9cc = 0xffffffff;
  FUN_0022d1a8(param_1);
  return;
}

} /* extern "C" */
