/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f974` (_code @ 0x30f974, 0x156 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(...);
int FUN_002e7228(int *);
int FUN_002e78d0(int, int *, int);
int FUN_002eb588(unsigned int *);
int FUN_0030f824(int, int [2]);
int wordMoveOut_0030f836(int [2], int *[2], int);
int FUN_0030f846(int *[2]);
int FUN_0030f89a(...);
int FUN_0030f90c(int **, int, int *[2]);
int FUN_0030facc(int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7228. */
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002eb588. */
extern int wordRefsDiffer_0030f814(int **, int **);
/* Supplied declaration required: FUN_0030f824. */
/* Supplied declaration required: wordMoveOut_0030f836. */
/* Supplied declaration required: FUN_0030f846. */
extern int wordRefsDiffer_0030f88a(int **, int);
/* Supplied declaration required: FUN_0030f89a. */
/* Supplied declaration required: FUN_0030f90c. */
/* Supplied declaration required: FUN_0030facc. */


unsigned int FUN_0030f974(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3 [2];
  int *temp_v4 [2];
  unsigned int temp_v5;
  unsigned int temp_v6;
  int *temp_v7;
  unsigned char temp_v8 [12];
  unsigned char temp_v9 [12];
  unsigned char temp_v10 [12];
  int temp_v11;
  int *temp_v12;
  unsigned int *temp_v13;
  
  temp_v2 = 0;
  FUN_002eb588(&temp_v5);
  FUN_002e6e34(temp_v8,param_1 + 0x58);
  FUN_002e6e34(temp_v9,param_1 + 0x88);
  FUN_002e6e34(temp_v10,param_1 + 0xb8);
  FUN_0030f846(temp_v4);
  while( 1 ) {
    temp_v12 = *(int **)(param_1 + 0x120);
    temp_v1 = wordRefsDiffer_0030f814(temp_v4,&temp_v12);
    if (temp_v1 == 0) break;
    piVar3 = (int *)temp_v4[0][6];
    temp_v13 = (unsigned int *)(temp_v4[0] + 4);
    if ((((*(char *)(param_1 + 0x140) == '\0') ||
         (temp_v1 = (**(romwright_code **)(*piVar3 + 0x20))(piVar3), temp_v1 == 0)) &&
        (*(char *)((int)piVar3 + 0x22) != '\x05')) &&
       (temp_v6 <= temp_v13[1] && (unsigned int)(*temp_v13 <= temp_v5) <= temp_v6 - temp_v13[1])) break;
    wordMoveOut_0030f836(temp_v3,temp_v4,0);
    FUN_0030f824(param_1 + 0x110,temp_v3);
    if (*(char *)((int)piVar3 + 0x22) != '\x01') {
      FUN_0030facc(param_1,piVar3);
    }
    else {
      FUN_002e7228(piVar3);
      FUN_002e78d0(param_1,piVar3,0);
      temp_v2 = 1;
    }
  }
  temp_v3[0] = param_1 + 0xfc;
  temp_v7 = *(int **)(param_1 + 0x100);
  temp_v11 = param_1 + 0x108;
  while (temp_v1 = wordRefsDiffer_0030f88a(&temp_v7,temp_v11), piVar3 = temp_v7, temp_v1 != 0) {
    temp_v0 = *(char *)((int)temp_v7 + 0x22);
    if (temp_v0 == '\x02') {
      (**(romwright_code **)(*temp_v7 + 0x10))(temp_v7);
      temp_v0 = *(char *)((int)piVar3 + 0x22);
    }
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        if (temp_v0 == '\x05') {
          temp_v4[0] = temp_v7;
          FUN_0030f90c(&temp_v12,temp_v3[0],temp_v4);
          temp_v7 = temp_v12;
          FUN_0030facc(param_1,piVar3);
        }
      }
      else {
        temp_v4[0] = temp_v7;
        FUN_0030f90c(&temp_v12,temp_v3[0],temp_v4);
        temp_v7 = temp_v12;
        FUN_002e78d0(param_1,piVar3,0);
        temp_v2 = 1;
      }
    }
    else {
      FUN_0030f89a(&temp_v7);
    }
  }
  FUN_002e6e5c(temp_v10);
  FUN_002e6e5c(temp_v9);
  FUN_002e6e5c(temp_v8);
  return temp_v2;
}

} /* extern "C" */
