/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b2cc` (_code @ 0x12b2cc, 0x176 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

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
int FUN_00306f3e(int, unsigned char *);
int FUN_00306f9a(unsigned char [8], unsigned char *, int);
int FUN_00306fe0(unsigned int, unsigned int, unsigned int);
int FUN_0030700c(unsigned char [12], unsigned int, int, unsigned char [8]);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0012b484; /* 0x12b484 */
extern unsigned char LAB_0012b494; /* 0x12b494 */
extern unsigned char LAB_0012b4a4; /* 0x12b4a4 */

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
/* Supplied declaration required: FUN_00306f3e. */
/* Supplied declaration required: FUN_00306f9a. */
/* Supplied declaration required: FUN_00306fe0. */
/* Supplied declaration required: FUN_0030700c. */


void FUN_0012b2cc(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [12];
  int temp_v12;
  
  piVar2 = &temp_v4;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) == '\x02') {
      FUN_002e9c0c(temp_v0);
      temp_v1 = operatorNew(0x4c);
      temp_v12 = param_1 + 0x100;
      if (temp_v1 != 0) {
        temp_v7 = *(int *)(param_1 + 0x1c8);
        temp_v9 = *(unsigned int *)(param_1 + 0x88);
        temp_v8 = *(unsigned int *)(param_1 + 0x110);
        if (temp_v7 == 0) {
          temp_v7 = *(int *)(param_1 + 0x1cc);
        }
        temp_v6 = *(unsigned int *)(param_1 + 0x78);
        temp_v4 = param_1 + 0x1bc;
        temp_v5 = *(unsigned int *)(param_1 + 0x7c);
        temp_v2 = FUN_002f7e4c(temp_v1,*(unsigned int *)(param_1 + 0x68),param_1 + 0x1a4,param_1 + 0x1b0);
      }
      else {
        temp_v2 = 0;
      }
      *(unsigned int *)(param_1 + 0x1dc) = temp_v2;
      temp_v1 = param_1 + 0x19c;
      temp_v4 = temp_v1;
      FUN_00306f3e(temp_v1,&LAB_0012b484);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, FUN_00306f3e(temp_v4,&LAB_0012b494), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          puVar5 = &LAB_0012b494;
        }
        else {
          puVar5 = &LAB_0012b484;
        }
        FUN_00306f9a(temp_v10,puVar5,temp_v4);
      }
      else {
        _ZN9Obj55aff4C1ERKS_(temp_v10,temp_v4);
      }
      temp_v2 = *(unsigned int *)(temp_v12 + 0x10);
      FUN_00306fe0(temp_v2,*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x84));
      FUN_002f7e38(temp_v0,temp_v2);
      temp_v4 = *(int *)(param_1 + 0x1dc);
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
          temp_v2 = FUN_002ea3c0(temp_v1,0x12b541,0,&LAB_0012b4a4);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
      }
      else {
        temp_v7 = -0x7ffefff3;
        temp_v2 = FUN_002e7908(&temp_v4,&temp_v7);
        onlineJobFinishValueRequest((OnlineValueJob *)param_1, (const OnlineCallbackResult *)temp_v2);
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
  onlineJobFinishValueRequest((OnlineValueJob *)param_1, (const OnlineCallbackResult *)piVar2);
  return;
}

} /* extern "C" */
