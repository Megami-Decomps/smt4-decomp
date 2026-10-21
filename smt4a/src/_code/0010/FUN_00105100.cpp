/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105100` (_code @ 0x105100, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match2_ReferenceList.h"

extern "C" {

int FUN_001047fc(unsigned int *);
int FUN_0010cf68(int);
int FUN_00120d42(void);
int FUN_0012df0c(unsigned char [8], int *, int *, int *);
ReferenceList* FUN_00132b14(ReferenceList*);
int asdOperatorDeleteArray(...);
int FUN_002e6e34(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineInstantiationContextGetCurrent(void);
int FUN_002ea734(int *);
int onlineMutexLockIfNeeded(void);
int onlineMutexUnlockIfNeeded(unsigned int *);
int FUN_002eb46c(unsigned int *, int);
int FUN_002eb638(int);
int constructObj0055a284(int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_00558658; /* 0x558658 */

/* Supplied declaration required: FUN_001047fc. */
/* Supplied declaration required: FUN_0010cf68. */
extern int FUN_0011c900(int);
/* Supplied declaration required: FUN_00120d42. */
/* Supplied declaration required: FUN_0012df0c. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int vectorDestroyWords(int);
/* Supplied declaration required: onlineInstantiationContextGetCurrent. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002ea734. */
extern int wordRefsDiffer_002ea764(int *, unsigned int *);
/* Supplied declaration required: onlineMutexLockIfNeeded. */
/* Supplied declaration required: onlineMutexUnlockIfNeeded. */
/* Supplied declaration required: FUN_002eb46c. */
extern int FUN_002eb624(unsigned int *);
/* Supplied declaration required: FUN_002eb638. */
/* Supplied declaration required: constructObj0055a284. */


void FUN_00105100(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [8];
  
  *param_1 = (unsigned int)&DAT_00558658;
  onlineInstantiationContextGetCurrent();
  FUN_00120d42();
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_001047fc(param_1);
  }
  *(unsigned char *)(param_1 + 0x24) = 1;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v4,temp_v0);
  onlineMutexLockIfNeeded();
  temp_v5 = *(int *)(param_1[0x19] + 8);
  while( 1 ) {
    temp_v3 = param_1[0x19];
    temp_v1 = wordRefsDiffer_002ea764(&temp_v5,(unsigned int *)&temp_v3);
    if (temp_v1 == 0) break;
    if (*(int **)(temp_v5 + 0x34) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v5 + 0x34) + 4))();
    }
    FUN_002ea734(&temp_v5);
  }
  onlineMutexUnlockIfNeeded(param_1 + 0x3e);
  FUN_002eb46c(param_1,1);
  _ZN9Obj55b28cD1Ev(temp_v4);
  temp_v1 = FUN_002eb624(param_1 + 0x3e);
  temp_v1 = vectorDestroyWords(temp_v1 - 0x14);
  temp_v1 = temp_v1 - 0x1c;
  FUN_002eb638(temp_v1);
  temp_v1 = temp_v1 - 0x1c;
  FUN_002eb638(temp_v1);
  temp_v2 = FUN_0011c900(temp_v1 - 0x10);
  temp_v2 = temp_v2 - 0x2c;
  temp_v2 = reinterpret_cast<int>(FUN_00132b14(reinterpret_cast<ReferenceList*>(temp_v2)));
  piVar5 = (int *)(temp_v2 - 0x1c);
  temp_v1 = *(int *)(temp_v2 - 0xc);
  if (temp_v1 != 0) {
    temp_v6 = *(unsigned int *)(temp_v1 + 8);
    temp_v7 = temp_v1;
    FUN_0012df0c(temp_v8,piVar5,&temp_v6,&temp_v7);
    temp_v1 = *(int *)(temp_v2 - 0xc);
    *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v2 - 0x18);
    *(int *)(temp_v2 - 0x18) = temp_v1;
    while (piVar4 = (int *)*piVar5, piVar4 != (int *)0x0) {
      *piVar5 = *piVar4;
      asdOperatorDeleteArray(piVar4[2]);
      asdOperatorDeleteArray(piVar4);
    }
  }
  temp_v2 = temp_v2 - 0x5c;
  FUN_0010cf68(temp_v2);
  constructObj0055a284(temp_v2 - 0x14);
  return;
}

} /* extern "C" */
