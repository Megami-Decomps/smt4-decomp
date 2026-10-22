/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011aab8` (_code @ 0x11aab8, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(...);
int _ZN9Obj55aff4D1Ev(...);
int _ZN9Obj55aff4C1ERKS_(unsigned char [8], int);
int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(...);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002f7e38(int, unsigned int);
int FUN_00306ef8(...);
int FUN_00306f3e(int, unsigned char *);
int FUN_00306f9a(unsigned char [8], unsigned char *, int);
int FUN_00306fe0(unsigned int, unsigned int, unsigned int);
int FUN_0030700c(unsigned char [12], unsigned int, int, unsigned char [8]);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0011ac70; /* 0x11ac70 */
extern unsigned char LAB_0011ac80; /* 0x11ac80 */
extern unsigned char LAB_0011ac90; /* 0x11ac90 */

extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4C1ERKS_. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
extern int refIsNonNegative(unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e38. */
extern unsigned int FUN_002f7e4c(int, unsigned int, int, int);
/* Supplied declaration required: FUN_00306ef8. */
/* Supplied declaration required: FUN_00306f3e. */
/* Supplied declaration required: FUN_00306f9a. */
/* Supplied declaration required: FUN_00306fe0. */
/* Supplied declaration required: FUN_0030700c. */


void FUN_0011aab8(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [12];
  
  piVar2 = &temp_v4;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) == '\x02') {
      FUN_002e9c0c(temp_v0);
      temp_v1 = operatorNew(0x4c);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v9 = *(unsigned int *)(param_1 + 0x88);
        temp_v7 = *(int *)(param_1 + 0x170);
        temp_v8 = *(unsigned int *)(param_1 + 0x118);
        if (temp_v7 == 0) {
          temp_v7 = *(int *)(param_1 + 0x174);
        }
        temp_v6 = *(unsigned int *)(param_1 + 0x78);
        temp_v4 = param_1 + 0x164;
        temp_v5 = *(unsigned int *)(param_1 + 0x7c);
        temp_v2 = FUN_002f7e4c(temp_v1,*(unsigned int *)(param_1 + 0x68),param_1 + 0x14c,param_1 + 0x158);
      }
      temp_v5 = param_1 + 0x180;
      *(unsigned int *)(param_1 + 0x184) = temp_v2;
      temp_v1 = param_1 + 0x144;
      temp_v4 = temp_v1;
      FUN_00306f3e(temp_v1,&LAB_0011ac70);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, FUN_00306f3e(temp_v4,&LAB_0011ac80), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          puVar5 = &LAB_0011ac80;
        }
        else {
          puVar5 = &LAB_0011ac70;
        }
        FUN_00306f9a(temp_v10,puVar5,temp_v4);
      }
      else {
        _ZN9Obj55aff4C1ERKS_(temp_v10,temp_v4);
      }
      temp_v2 = *(unsigned int *)(param_1 + 0x118);
      FUN_00306fe0(temp_v2,*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x84));
      FUN_002f7e38(temp_v0,temp_v2);
      temp_v4 = *(int *)(temp_v5 + 4);
      temp_v5 = *(unsigned int *)(param_1 + 0x8c);
      FUN_0030700c(temp_v11,*(unsigned int *)(param_1 + 0x70),temp_v0,temp_v10);
      temp_v1 = refIsNonNegative(temp_v11);
      if (temp_v1 != 0) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd4);
        temp_v2 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v3);
        onlineJobSetStateWaiting(param_1);
        temp_v1 = operatorNew(0x10);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_002ea3c0(temp_v1,0x11ad2d,0,&LAB_0011ac90);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
      }
      else {
        temp_v7 = -0x7ffefff3;
        temp_v2 = FUN_002e7908(&temp_v4,&temp_v7);
        FUN_00306ef8(param_1,temp_v2);
      }
      _ZN9Obj55aff4D1Ev(temp_v10);
      return;
    }
    FUN_002ea41e(&temp_v4,temp_v0);
    FUN_002ea41e(&temp_v4,temp_v0,temp_v4);
  }
  else {
    temp_v7 = -0x7ffefffc;
    piVar2 = (int *)FUN_002e7908(&temp_v4,&temp_v7);
  }
  FUN_00306ef8(param_1,piVar2);
  return;
}

} /* extern "C" */
