/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003054f0` (_code @ 0x3054f0, 0xd2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorCopyHeader(...);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002f3dc4(int, int *);
int FUN_002f3dde(int, int *);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_0011935d; /* 0x11935d */
extern unsigned char LAB_003055c4; /* 0x3055c4 */

extern int operatorNew(unsigned int);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int refIsNonNegative(int);
extern int FUN_002f71b0(int, int, unsigned int);
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_003054f0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = param_1 + 0x16c;
  temp_v3 = param_2;
  temp_v4 = param_3;
  temp_v5 = param_4;
  vectorCopyHeader();
  temp_v1 = refIsNonNegative(temp_v0);
  if ((temp_v1 == 0) && (*(int *)(*(int *)(param_1 + 0x198) + 0x78) != 0)) {
    FUN_002e9c0c();
    temp_v1 = FUN_002f71b0(*(int *)(param_1 + 0x198),param_1 + 0x88,
                         *(unsigned int *)(*(int *)(param_1 + 0x198) + 0x78));
    if (temp_v1 != 0) {
      onlineJobSetStateWaiting(param_1);
      temp_v0 = operatorNew(0x10);
      temp_v2 = 0;
      if (temp_v0 != 0) {
        temp_v2 = FUN_002ea3c0(temp_v0,&LAB_0011935d,0,&LAB_003055c4);
      }
      FUN_002f7cba(param_1,param_1 + 0x88,temp_v2);
      return;
    }
  }
  temp_v1 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_1 + 0x68));
  if (temp_v1 != 0) {
    if (*(int *)(param_1 + 0x300) != 0) {
      vectorCopyHeader(*(int *)(param_1 + 0x300),temp_v0);
    }
    temp_v0 = refIsNonNegative(temp_v0);
    if (temp_v0 != 0) {
      **(unsigned int **)(param_1 + 0x84) = *(unsigned int *)(*(int *)(param_1 + 0x198) + 0x78);
      temp_v3 = *(unsigned int *)(param_1 + 0x16c);
      temp_v4 = *(unsigned int *)(param_1 + 0x170);
      temp_v5 = *(unsigned int *)(param_1 + 0x174);
      FUN_002f3dc4(temp_v1,&temp_v3);
    }
    else {
      temp_v3 = *(unsigned int *)(param_1 + 0x16c);
      temp_v4 = *(unsigned int *)(param_1 + 0x170);
      temp_v5 = *(unsigned int *)(param_1 + 0x174);
      FUN_002f3dde(temp_v1,&temp_v3);
    }
  }
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
