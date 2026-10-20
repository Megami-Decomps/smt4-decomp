/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a5f4` (_code @ 0x11a5f4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b270(int, int, unsigned int, unsigned int);
int FUN_001174c0(int, int, unsigned int, unsigned int);
int vectorCopyHeader(int, unsigned int);
int FUN_002e9c64(int, unsigned char *, int [2], int);
int onlineJobSetStateDone(int);
int onlineJobSetStateWaiting(int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00103579; /* 0x103579 */

/* Supplied declaration required: FUN_0010b270. */
/* Supplied declaration required: FUN_001174c0. */
extern unsigned int FUN_002e7908(int *, int *);
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002e9c64. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: onlineJobSetStateWaiting. */


void FUN_0011a5f4(int param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3 [2];
  int temp_v4 [2];
  unsigned int temp_v5;
  int temp_v6 [2];
  int temp_v7 [2];
  int temp_v8;
  
  temp_v8 = param_1 + 0x280;
  temp_v2 = *(int *)(*(int *)(param_1 + 0x1a0) + 4);
  temp_v5 = *(unsigned int *)(*(int *)(temp_v2 + 0x20) + 0xc);
  temp_v4[0] = param_1 + 0x40;
  if (((*(int *)(param_1 + 0x2b0) != 0) && (*(int *)(param_1 + 0xb8) == 0)) &&
     (*(char *)(param_1 + 0x50) == '\0')) {
    temp_v6[0] = param_1;
    FUN_002e9c64(temp_v4[0],&LAB_00103579,temp_v6,1);
    temp_v3[0] = param_1 + 0xb8;
    temp_v0 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x18);
    FUN_0010b270(temp_v0,temp_v4[0],temp_v5,*(unsigned int *)(temp_v8 + 0x30));
    if (temp_v0 == 0) goto LAB_0011a6a6;
  }
  temp_v3[0] = param_1 + 0x1a8;
  temp_v6[0] = param_1 + 200;
  if ((*(int *)(param_1 + 0x1bc) == 0) && (*(char *)(param_1 + 0xd8) == '\0')) {
    temp_v7[0] = param_1;
    FUN_002e9c64(temp_v6[0],&LAB_00103579,temp_v7,1);
    temp_v2 = *(int *)(temp_v2 + 0x1c);
    FUN_001174c0(temp_v2,temp_v6[0],*(unsigned int *)(temp_v8 + 0x34),*(unsigned int *)(temp_v8 + 0x30)
                );
    if (temp_v2 == 0) goto LAB_0011a6a6;
  }
  if ((*(char *)(temp_v4[0] + 0x10) == '\x01') || (*(char *)(temp_v6[0] + 0x10) == '\x01')) {
    *(unsigned char *)(param_1 + 0x3b) = 2;
    onlineJobSetStateWaiting(param_1);
    return;
  }
LAB_0011a6a6:
  temp_v3[0] = -0x7ffefff3;
  temp_v1 = FUN_002e7908(temp_v4,temp_v3);
  vectorCopyHeader(param_1 + 0x228,temp_v1);
  *(unsigned char *)(param_1 + 0x3b) = 5;
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
