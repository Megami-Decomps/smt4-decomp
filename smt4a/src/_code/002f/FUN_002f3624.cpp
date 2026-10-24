/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3624` (_code @ 0x2f3624, 0xfa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int *);
int _Znwj(int);
int sharedRefHolderDestroy(unsigned char [8]);
int strHolderAssignBuffer(unsigned char [8], int);
int FUN_002eb108(int *, int, unsigned int, int, unsigned int, int);
int FUN_002eb7d0(int, int);
int FUN_002eb7e0(int *, int, unsigned int, int, unsigned int, int);
int FUN_002ed258(unsigned char [8], int *);
int strHolderAssignU32(unsigned char [8], unsigned int *);
int strHolderAssignOneWide(unsigned char [8], unsigned short [4]);

typedef int romwright_code(...);
/* stack frame of param_3: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: _Znwj. */
extern int *strInit(void);
/* Supplied declaration required: sharedRefHolderDestroy. */
/* Supplied declaration required: strHolderAssignBuffer. */
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002eb7d0. */
/* Supplied declaration required: FUN_002eb7e0. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002ed258. */
/* Supplied declaration required: strHolderAssignU32. */
/* Supplied declaration required: strHolderAssignOneWide. */
extern int *FUN_002eff58(int, int);
extern int FUN_002eff84(void);


int * FUN_002f3624(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5 [4];
  
  if ((param_1 != 0) && (-1 >= (int)((unsigned int)*(unsigned char *)(param_1 + 0x1c) << 0x1d))) {
    temp_v0 = FUN_002eb7d0(0x20,0);
    if (temp_v0 == 0) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_002eff58(temp_v0,*(int *)(param_1 + 0x10) + 6);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    temp_v0 = FUN_002eff84();
    if (temp_v0 == 0) {
      (**(romwright_code **)(*piVar2 + 4))(piVar2);
      return (int *)0x0;
    }
  }
  else {
    temp_v0 = _Znwj(0x20);
    if (temp_v0 != 0) {
      piVar2 = (int *)strInit();
    }
    else {
      piVar2 = (int *)0x0;
    }
  }
  FUN_002ed258(temp_v2,piVar2);
  sharedRefRelease(piVar2);
  temp_v1 = *(unsigned int *)(param_3 + 8);
  temp_v4 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
             (temp_v1 >> 0x18);
  strHolderAssignU32(temp_v2,&temp_v4);
  temp_v5[0] = (*(unsigned short *)(param_3 + 6) << 8) | (*(unsigned short *)(param_3 + 6) >> 8);
  strHolderAssignOneWide(temp_v2,temp_v5);
  strHolderAssignBuffer(temp_v2,param_1);
  if ((param_1 != 0) && ((int)((unsigned int)*(unsigned char *)(param_1 + 0x1c) << 0x1d) < 0)) {
    piVar2 = (int *)FUN_002eb7d0(0x150,0);
    if ((piVar2 != (int *)0x0) &&
       (FUN_002eb7e0(piVar2,0,param_2,0,temp_v3,0), piVar2 != (int *)0x0)) {
      temp_v0 = FUN_002eb83c();
      if (temp_v0 != 0) {
        *(unsigned char *)(piVar2 + 9) = 0;
        sharedRefHolderDestroy(temp_v2);
        return piVar2;
      }
      (**(romwright_code **)(*piVar2 + 4))(piVar2);
    }
    sharedRefHolderDestroy(temp_v2);
    return (int *)0x0;
  }
  piVar2 = (int *)_Znwj(0x150);
  if (piVar2 != (int *)0x0) {
    FUN_002eb108(piVar2,0,param_2,0,temp_v3,0);
  }
  else {
    piVar2 = (int *)0x0;
  }
  *(unsigned char *)(piVar2 + 9) = 0;
  sharedRefHolderDestroy(temp_v2);
  return piVar2;
}

} /* extern "C" */
