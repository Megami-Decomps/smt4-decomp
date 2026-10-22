/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f012e` (_code @ 0x2f012e, 0x96 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int *);
int FUN_002eb108(int *, int, int, int, int, int);
int FUN_002eb7e0(int *, int, int, int, int, int);
int FUN_002ef34c(unsigned char [12], int, int *);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: sharedRefRelease. */
extern int *operatorNew(unsigned int);
/* Supplied declaration required: FUN_002eb108. */
extern int *FUN_002eb7d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eb7e0. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002ef34c. */
extern int _ZN9Obj55933cC1Et(unsigned char *, unsigned int);


void FUN_002f012e(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1 [12];
  unsigned char temp_v2 [8];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v3;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  if ((int)((unsigned int)*(unsigned char *)(param_2 + 0x1c) * 0x20000000) < 0) {
    piVar1 = (int *)FUN_002eb7d0(0x150,0);
    if (piVar1 == (int *)0x0) {
      return;
    }
    FUN_002eb7e0(piVar1,param_1,2,0x2000,param_2,0);
    if (piVar1 == (int *)0x0) {
      return;
    }
    temp_v0 = FUN_002eb83c();
    if (temp_v0 == 0) {
      (**(romwright_code **)(*piVar1 + 4))(piVar1);
      return;
    }
  }
  else {
    piVar1 = (int *)operatorNew(0x150);
    if (piVar1 != (int *)0x0) {
      FUN_002eb108(piVar1,param_1,2,0x2000,param_2,0);
    }
    else {
      piVar1 = (int *)0x0;
    }
  }
  *(unsigned char *)(piVar1 + 9) = *(unsigned char *)(param_1 + 0x14c);
  temp_v0 = _ZN9Obj55933cC1Et(temp_v2,temp_v3);
  *(unsigned short *)(piVar1 + 0x11) = *(unsigned short *)(temp_v0 + 4);
  *(char *)(piVar1 + 0x21) = (char)param_4;
  FUN_002ef34c(temp_v1,param_1,piVar1);
  sharedRefRelease(piVar1);
  return;
}

} /* extern "C" */
