/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108ea8` (_code @ 0x108ea8, 0x196 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(...);
int operatorNew(...);
int FUN_002eb108(...);
int FUN_002eb164(...);
int FUN_002eb7e0(int *, int, int, int, int, int);
int FUN_002ef34c(...);
int FUN_002f091c(int, int);
int FUN_002f0a5c(int);
int FUN_002f0ab8(int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: operatorNew. */
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002eb164. */
extern int *FUN_002eb7d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eb7e0. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002ef34c. */
/* Supplied declaration required: FUN_002f091c. */
/* Supplied declaration required: FUN_002f0a5c. */
/* Supplied declaration required: FUN_002f0ab8. */
extern int FUN_002f14a8(int, unsigned int);


void FUN_00108ea8(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned short temp_v4;
  unsigned char temp_v5 [4];
  unsigned short temp_v6;
  int temp_v7;
  unsigned char temp_v8 [12];
  int temp_v9;
  unsigned char temp_v10 [16];
  int temp_v11;
  int iStack_18;
  
  temp_v7 = param_2 + 0x60;
  temp_v1 = *(unsigned short *)(param_2 + 0x3c) & 0xf;
  temp_v11 = param_1;
  iStack_18 = param_2;
  if (temp_v1 != 1) {
    if (((temp_v1 == 2) && (*(int *)(param_2 + 0xd8) != 0)) &&
       (temp_v2 = FUN_002f14a8(*(int *)(param_2 + 0xd8),4), temp_v2 != 0)) {
      piVar3 = (int *)FUN_002eb7d0(0x150,0);
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_002eb7e0(piVar3,temp_v11,*(unsigned short *)(param_2 + 0x3c) & 0xf,0x10,0,0);
      if (piVar3 == (int *)0x0) {
        return;
      }
      temp_v2 = FUN_002eb83c();
      if (temp_v2 == 0) {
        (**(romwright_code **)(*piVar3 + 4))(piVar3);
        return;
      }
    }
    else {
      piVar3 = (int *)operatorNew(0x150);
      if (piVar3 != (int *)0x0) {
        FUN_002eb108(piVar3,temp_v11,*(unsigned short *)(param_2 + 0x3c) & 0xf,0x10,0,0);
      }
      else {
        piVar3 = (int *)0x0;
      }
    }
    *(unsigned char *)(piVar3 + 9) = *(unsigned char *)(param_1 + 0x14c);
  }
  else {
    piVar3 = (int *)operatorNew(0x150);
    if (piVar3 != (int *)0x0) {
      FUN_002eb108(piVar3,temp_v11,*(unsigned short *)(param_2 + 0x3c) & 0xf,0x10,
                   *(unsigned int *)(param_2 + 0xd8),0);
    }
    else {
      piVar3 = (int *)0x0;
    }
    temp_v0 = *(unsigned char *)(param_2 + 0x24);
    *(unsigned char *)(param_1 + 0x14c) = temp_v0;
    *(unsigned char *)(piVar3 + 9) = temp_v0;
    *(unsigned int *)(param_1 + 0x150) = *(unsigned int *)(param_2 + 0x8c);
    FUN_002f0a5c(temp_v11);
    FUN_002f091c(temp_v11,*(unsigned char *)(temp_v7 + 7));
    piVar3[0x23] = *(int *)(param_1 + 0x150);
    *(char *)((int)piVar3 + 0x67) = (char)*(unsigned short *)(temp_v11 + 0x104);
    FUN_002f0ab8(temp_v11,piVar3);
  }
  FUN_002eb164(temp_v5,param_2);
  *(unsigned short *)(piVar3 + 0x11) = temp_v6;
  *(unsigned char *)(piVar3 + 0x19) = *(unsigned char *)(temp_v7 + 4);
  *(int *)(temp_v11 + 0x2ec) = *(int *)(temp_v11 + 0x2ec) + 1;
  FUN_002ef34c(temp_v8,temp_v11,piVar3);
  if ((*(unsigned short *)(piVar3 + 0xf) & 0xf) == 3) {
    temp_v9 = 0;
    do {
      temp_v2 = operatorNew(0x150);
      if (temp_v2 != 0) {
        FUN_002eb108(temp_v2,temp_v11,3,0x10,0,0);
      }
      FUN_002eb164(temp_v3,param_2);
      *(unsigned short *)(temp_v2 + 0x44) = temp_v4;
      *(unsigned char *)(temp_v2 + 100) = *(unsigned char *)(temp_v7 + 4);
      *(unsigned char *)(temp_v2 + 0x24) = *(unsigned char *)(param_1 + 0x14c);
      FUN_002ef34c(temp_v10,temp_v11,temp_v2);
      sharedRefRelease(temp_v2);
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 2);
  }
  sharedRefRelease(piVar3);
  return;
}

} /* extern "C" */
