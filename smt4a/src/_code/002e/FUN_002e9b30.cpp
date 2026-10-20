/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9b30` (_code @ 0x2e9b30, 0xd6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7232(int *);
int FUN_002e9a92(int);
int FUN_002e9afe(...);
int FUN_002e9b0c(int *);

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9a92. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002e9b0c. */
extern int FUN_002e9b20(int **, int *);


void FUN_002e9b30(int *param_1,int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *temp_v2;
  romwright_code *temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  unsigned char temp_v7 [12];
  int temp_v8;
  int *piStack_24;
  int iStack_20;
  unsigned int *temp_v9;
  int iStack_18;
  
  piStack_24 = param_1;
  iStack_20 = param_2;
  temp_v9 = param_3;
  iStack_18 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v6,temp_v0 + 0x58);
  if (param_4 != 0) {
    FUN_002e9a92(param_2);
  }
  temp_v2 = param_1 + 0xe;
  if ((param_2 != 1) && (param_2 == 0)) {
    temp_v8 = 0x80010001;
    temp_v1 = FUN_002e7908(temp_v7,(unsigned int *)&temp_v8);
    FUN_002e9afe(temp_v2,temp_v1);
  }
  if (((char)param_1[4] == '\x01') && (param_1[0x11] != 0)) {
    FUN_002e9b0c(param_1);
  }
  temp_v3 = (romwright_code *)*temp_v9;
  temp_v4 = temp_v9[1];
  temp_v5 = temp_v9[2];
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2,&temp_v3,param_4);
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_4 != 0) {
    FUN_002e9afe(temp_v2,temp_v9);
  }
  FUN_002e6e5c(temp_v6);
  temp_v0 = FUN_002e9a92(param_2);
  if (temp_v0 != 0) {
    temp_v2 = *(int **)param_1[9];
    while( 1 ) {
      temp_v5 = param_1[9];
      temp_v0 = FUN_002e9b20(&temp_v2,&temp_v5);
      if (temp_v0 == 0) break;
      temp_v3 = (romwright_code *)temp_v2[2];
      temp_v4 = temp_v2[3];
      (*temp_v3)(param_1,&temp_v4);
      temp_v2 = (int *)*temp_v2;
    }
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    if (-1 < ~param_1[3] << 0x1e) {
      FUN_002e7232(param_1);
    }
  }
  return;
}

} /* extern "C" */
