/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b540` (_code @ 0x12b540, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

extern "C" {

int FUN_0011c9e4(unsigned char [8]);
int FUN_002e7908(int *, unsigned int [2]);
int onlineInstanceTableGetCurrent(void);
int vectorCopyHeader(unsigned int *, int *);
int FUN_002e9c0c(int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(int *, int);
int refIsNonNegative(unsigned int *);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0012b62c; /* 0x12b62c */
extern unsigned char LAB_0012b635; /* 0x12b635 */

/* Supplied declaration required: FUN_0011c9e4. */
extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: refIsNonNegative. */
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_0012b540(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v8 [2];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    puVar4 = (unsigned int *)(param_1 + 0x1d0);
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(&temp_v7,temp_v0);
      vectorCopyHeader(puVar4,&temp_v7);
    }
    if (-1 < *(int *)(param_1 + 0x168) << 0x19) {
      FUN_002e9c0c(temp_v0);
      FUN_0011c9e4(temp_v4);
      temp_v5 = *(unsigned int *)(param_1 + 0x198);
      temp_v6 = refIsNonNegative(puVar4);
      temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x6c) + 0x24))
                        (*(int **)(param_1 + 0x6c),temp_v0,temp_v4);
      if (temp_v1 != 0) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd4);
        temp_v2 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v3);
        onlineJobSetStateWaiting(param_1);
        temp_v1 = operatorNew(0x10);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_002ea3c0(temp_v1,&LAB_0012b635,0,&LAB_0012b62c);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
        return;
      }
      temp_v0 = refIsNonNegative(puVar4);
      if (temp_v0 != 0) {
        temp_v7 = *(unsigned int *)(param_1 + 0x1d0);
        uStack_24 = *(unsigned int *)(param_1 + 0x1d4);
        uStack_20 = *(unsigned int *)(param_1 + 0x1d8);
      }
      else {
        temp_v8[0] = 0x8001000d;
        FUN_002e7908(&temp_v7,temp_v8);
      }
      puVar4 = (unsigned int *)&temp_v7;
    }
  }
  else {
    temp_v8[0] = 0x80010004;
    puVar4 = (unsigned int *)FUN_002e7908(&temp_v7,temp_v8);
  }
  onlineJobFinishValueRequest((OnlineValueJob *)param_1, (const OnlineCallbackResult *)puVar4);
  return;
}

} /* extern "C" */
