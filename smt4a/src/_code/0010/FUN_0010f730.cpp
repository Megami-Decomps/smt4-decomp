/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f730` (_code @ 0x10f730, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117d74(int, int, int);
int onlineStringDestroy(unsigned char [8]);
int vectorCopyHeader(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0010f57d; /* 0x10f57d */
extern unsigned char LAB_0010f7d4; /* 0x10f7d4 */
extern unsigned char LAB_0010f91d; /* 0x10f91d */

/* Supplied declaration required: FUN_00117d74. */
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: vectorCopyHeader. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_0010f730(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [12];
  
  (**(romwright_code **)(**(int **)(param_1 + 0xd8) + 0xc))
            (*(int **)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0x6c));
  temp_v2 = FUN_002ea100(temp_v3,*(unsigned int *)(param_1 + 0x88));
  temp_v0 = *(int *)(param_1 + 0xd8);
  FUN_00117d74(temp_v0,param_1 + 0x158,param_1 + 0x80);
  onlineStringDestroy(temp_v3);
  if (temp_v0 != 1) {
    temp_v2 = 0x8001000d;
    temp_v1 = FUN_002e7908(temp_v5,(unsigned int *)&temp_v2);
    vectorCopyHeader(param_1 + 200,temp_v1);
    temp_v1 = FUN_002ea3c0(temp_v4,&LAB_0010f57d,0,&LAB_0010f7d4);
    FUN_002ea3d0(param_1,temp_v1);
  }
  else {
    onlineJobSetStateWaiting(param_1);
    temp_v0 = operatorNew(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010f91d,0,&LAB_0010f7d4);
    }
    FUN_002f7cba(param_1,param_1 + 0x158,temp_v1);
  }
  return;
}

} /* extern "C" */
