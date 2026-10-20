/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116b1c` (_code @ 0x116b1c, 0xaa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001068e4(int *, int, char [23], int);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7908(unsigned int, int *);
int FUN_002e9598(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002f12d0(unsigned int, unsigned char [4]);

typedef int romwright_code(...);
/* stack frame of param_7: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned char sp50; /* 0x50: local_50 */
} param_7_stack;

extern unsigned char LAB_00116bd0; /* 0x116bd0 */
extern unsigned char LAB_00116ebd; /* 0x116ebd */
extern unsigned char DAT_00558950; /* 0x558950 */
extern char s__V_V_V_V___00589588[23]; /* 0x589588 */

/* Supplied declaration required: FUN_001068e4. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int *FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9598. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f12d0. */


void FUN_00116b1c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [24];
  unsigned int temp_v6;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v6 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v4,temp_v0 + 0x58);
  *(unsigned int *)(param_2 + 0x6c) = param_3;
  FUN_002e9598(param_2 + 0x70,param_4);
  *(unsigned char *)(param_2 + 0x78) = param_5;
  *(unsigned int *)(param_2 + 0x7c) = param_6;
  *(unsigned int *)(param_2 + 0x104) = param_7;
  piVar2 = (int *)FUN_002e760a(8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)&DAT_00558950;
    *(unsigned char *)(piVar2 + 1) = 1;
  }
  else {
    piVar2 = (int *)0x0;
  }
  piVar3 = piVar2;
  FUN_001068e4(piVar2,param_2 + 0x108,s__V_V_V_V___00589588,4);
  if (piVar2 != (int *)0x0) {
    (**(romwright_code **)(*piVar2 + 4))(piVar2);
  }
  if (piVar3 != (int *)0x0) {
    temp_v1 = FUN_002ea3c0(temp_v5,&LAB_00116ebd,0,&LAB_00116bd0);
    FUN_002ea3d0(param_2,temp_v1);
    temp_v2[0] = 1;
    FUN_002f12d0(temp_v6,temp_v2);
  }
  else {
    temp_v3 = 0x80690009;
    FUN_002e7908(temp_v6,&temp_v3);
  }
  FUN_002e6e5c(temp_v4);
  return;
}

} /* extern "C" */
