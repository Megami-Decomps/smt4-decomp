/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001194ec` (_code @ 0x1194ec, 0x142 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(...);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int _ZN9Obj55aff4aSERKS_(...);
int FUN_002e9c0c(void);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(...);
int onlineUrlDestroy(...);
int FUN_002ec8f8(unsigned int *);
int FUN_002ee568(unsigned char [104], unsigned int);
int wideBufferAppend(...);
int onlineJobSetStateWaiting(...);
int FUN_002f7cba(...);
int FUN_003054f0(...);
int FUN_0030568e(unsigned int, int);
int FUN_003056a0(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp2AC; /* 0x2ac: local_2ac */
    unsigned int sp2B4; /* 0x2b4: local_2b4 */
    unsigned int sp2B8; /* 0x2b8: local_2b8 */
} param_1_stack;

extern unsigned char LAB_00119630; /* 0x119630 */
extern unsigned char LAB_00119650; /* 0x119650 */
extern unsigned char LAB_0011965c; /* 0x11965c */
extern unsigned char LAB_00119660; /* 0x119660 */
extern unsigned char LAB_00119674; /* 0x119674 */
extern unsigned char LAB_00119680; /* 0x119680 */

extern int FUN_00124130(int);
/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: FUN_002e9c0c. */
extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002ec8f8. */
/* Supplied declaration required: FUN_002ee568. */
/* Supplied declaration required: wideBufferAppend. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
extern unsigned int wideBufferAppendHolderValue(unsigned int, int);
/* Supplied declaration required: FUN_003054f0. */
/* Supplied declaration required: FUN_0030568e. */
extern unsigned long long ownerChildValue(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_003056a0. */


void FUN_001194ec(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned long long temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [104];
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [12];
  
  FUN_002ea2e8(temp_v5);
  temp_v0 = wideBufferAppend(temp_v5,&LAB_00119630);
  temp_v0 = wideBufferAppendHolderValue(temp_v0,param_1 + 0x78);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00119650);
  temp_v0 = FUN_0030568e(temp_v0,*(unsigned short *)(param_1 + 0x80));
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00119660);
  temp_v0 = FUN_0030568e(temp_v0,10);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00119674);
  temp_v0 = FUN_0030568e(temp_v0,1);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_00119680);
  FUN_0030568e(temp_v0,2);
  FUN_002ee568(temp_v9,temp_v6);
  temp_v1 = FUN_00124130(param_1);
  if (temp_v1 != 0) {
    *(int *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x24) = temp_v1;
    (**(romwright_code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x24) + 0x14))();
    temp_v1 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
    temp_v0 = _ZN9Obj55aff4C1EPKc(temp_v10,*(unsigned int *)(param_1 + 0x74));
    _ZN9Obj55aff4aSERKS_(temp_v1 + 0x1c,temp_v0);
    _ZN9Obj55aff4D1Ev(temp_v10);
    _ZN9Obj55aff4aSERKS_(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x14,param_1 + 0x6c);
    FUN_002e9c0c();
    temp_v7 = *(unsigned int *)(param_1 + 0x318);
    temp_v8 = *(unsigned int *)(param_1 + 0x31c);
    puVar3 = (unsigned int *)&temp_v7;
    FUN_002ec8f8(puVar3);
    temp_v2 = ownerChildValue(*(unsigned int *)(param_1 + 0x198),puVar3);
    temp_v3 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
    temp_v1 = *(int *)((int)temp_v2 + 0x18);
    temp_v4 = param_1 + 0x30c;
    FUN_003056a0(temp_v1,param_1 + 0x88,temp_v9,param_1 + 0x310);
    if (temp_v1 != 0) {
      sharedRefAddRef(*(unsigned int *)(param_1 + 0x30c));
      onlineJobSetStateWaiting(param_1);
      temp_v1 = _Znwj(0x10);
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_002ea3c0(temp_v1,0x1193c9,0,&LAB_0011965c);
      }
      FUN_002f7cba(param_1,param_1 + 0x88,temp_v0);
      onlineUrlDestroy(temp_v9);
      FUN_002ea3a8(temp_v5);
      return;
    }
  }
  temp_v3 = 0x8001000d;
  temp_v0 = _ZN12OnlineResultC1ERKj(temp_v11,(unsigned int *)&temp_v3);
  FUN_003054f0(param_1,temp_v0);
  onlineUrlDestroy(temp_v9);
  FUN_002ea3a8(temp_v5);
  return;
}

} /* extern "C" */
