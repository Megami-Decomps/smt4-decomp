/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f680` (_code @ 0x10f680, 0xa6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117dec(int, int, int, unsigned int);
int FUN_002e9318(unsigned char [8]);
int FUN_002e9afe(int, int *);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(int *, int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0010f57d; /* 0x10f57d */
extern unsigned char LAB_0010f72c; /* 0x10f72c */
extern unsigned char LAB_0010f91d; /* 0x10f91d */

/* Supplied declaration required: FUN_00117dec. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9afe. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_0010f680(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int iStack_3c;
  int iStack_38;
  unsigned int temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [20];
  
  (**(romwright_code **)(**(int **)(param_1 + 0xd8) + 0xc))
            (*(int **)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0x6c));
  temp_v0 = FUN_002ea100(temp_v5,*(unsigned int *)(param_1 + 0x88));
  temp_v4 = *(unsigned int *)(param_1 + 0xb4);
  temp_v3 = *(unsigned int *)(param_1 + 0x8c);
  iStack_38 = param_1 + 0xac;
  iStack_3c = param_1 + 0x90;
  temp_v2 = *(int *)(param_1 + 0xd8);
  temp_v1 = param_1 + 0x158;
  FUN_00117dec(temp_v2,temp_v1,param_1 + 0x80,temp_v0);
  FUN_002e9318(temp_v5);
  if (temp_v2 != 1) {
    FUN_002ea41e(&temp_v3,temp_v1);
    FUN_002e9afe(param_1 + 200,&temp_v3);
    temp_v0 = FUN_002ea3c0(temp_v6,&LAB_0010f57d,0,&LAB_0010f72c);
    FUN_002ea3d0(param_1,temp_v0);
  }
  else {
    FUN_002f7cb0(param_1);
    temp_v2 = FUN_002e760a(0x10);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_002ea3c0(temp_v2,&LAB_0010f91d,0,&LAB_0010f72c);
    }
    FUN_002f7cba(param_1,temp_v1,temp_v0);
  }
  return;
}

} /* extern "C" */
