/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a9d0` (_code @ 0x11a9d0, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b348(unsigned int);
int FUN_002e6e14(...);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7232(void);
int FUN_002ea9dc(void);
int FUN_002eb7c0(int);
int FUN_00306eac(unsigned char [4], int *, int *, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned char DAT_0055a38c; /* 0x55a38c */

/* Supplied declaration required: FUN_0010b348. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002ea00c(unsigned int *);
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002eb7c0. */
extern int FUN_002fb028(int);
/* Supplied declaration required: FUN_00306eac. */


void FUN_0011a9d0(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned int *temp_v3;
  unsigned char temp_v4 [4];
  
  *param_1 = (unsigned int)&DAT_0055a38c;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v1,temp_v0 + 0x58);
  if (param_1[0xae] != 0) {
    FUN_002e7232();
    param_1[0xae] = 0;
  }
  if (param_1[0x2e] != 0) {
    FUN_0010b348(*(unsigned int *)(*(int *)(*(int *)(param_1[0x68] + 4) + 0x18) + 0x18));
    param_1[0x2e] = 0;
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x2f] + 4))();
    param_1[0x2f] = 0;
  }
  piVar2 = (int *)param_1[0x30];
  if (piVar2 != (int *)0x0) {
    (**(romwright_code **)(*piVar2 + 4))();
    param_1[0x30] = 0;
  }
  FUN_002e6e5c(temp_v1);
  param_1 = param_1 + 0x8d;
  FUN_002ea9dc();
  param_1 = param_1 + -0x1d;
  FUN_002ea9dc();
  piVar2 = (int *)(param_1 + -6);
  puVar3 = (unsigned int *)param_1[-2];
  if (puVar3 != (unsigned int *)0x0) {
    temp_v2 = *puVar3;
    temp_v3 = puVar3;
    FUN_00306eac(temp_v4,piVar2,&temp_v2,&temp_v3);
    puVar3 = (unsigned int *)param_1[-2];
    *puVar3 = param_1[-5];
    param_1[-5] = (unsigned int)puVar3;
    while (piVar4 = (int *)*piVar2, piVar4 != (int *)0x0) {
      *piVar2 = *piVar4;
      FUN_002e6e14(piVar4[2]);
      FUN_002e6e14(piVar4);
    }
    param_1[-5] = 0;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  temp_v0 = FUN_002ea00c(param_1 + -0x20);
  temp_v0 = FUN_002fb028(temp_v0 - 0x78);
  temp_v0 = FUN_002fb028(temp_v0 - 0x88);
  FUN_002eb7c0(temp_v0 - 0x40);
  return;
}

} /* extern "C" */
