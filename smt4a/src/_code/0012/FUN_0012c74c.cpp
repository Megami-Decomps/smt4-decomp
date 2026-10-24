/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c74c` (_code @ 0x12c74c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d590(unsigned char [8]);
int destroyObj0055ad6c(unsigned char [8]);
int FUN_00135a7c(unsigned char [12], int);
int onlineInstanceTableGetCurrent(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0030c720(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0012c53d; /* 0x12c53d */
extern unsigned char LAB_0012c838; /* 0x12c838 */
extern unsigned char LAB_0012ca1d; /* 0x12ca1d */

/* Supplied declaration required: FUN_0011d590. */
/* Supplied declaration required: destroyObj0055ad6c. */
extern int FUN_00132206(unsigned char *);
/* Supplied declaration required: FUN_00135a7c. */
extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c720. */


void FUN_0012c74c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [12];
  int temp_v6;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_0011d590(temp_v3);
    for (temp_v0 = *(int *)(param_1 + 0x110); *(int *)(param_1 + 0x114) != temp_v0; temp_v0 = temp_v0 + 0x18
        ) {
      if (*(int *)(temp_v0 + 0x10) != 0 || *(int *)(temp_v0 + 0x14) != 0) {
        FUN_00135a7c(temp_v4,temp_v0 + 0x10);
      }
    }
    temp_v0 = FUN_00132206(temp_v4);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v5,&LAB_0012c53d,0,&LAB_0012c838);
      FUN_002ea3d0(param_1,temp_v1);
    }
    else {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x70) + 0x70))
                        (*(int **)(param_1 + 0x70),param_1 + 0x80,temp_v3,param_1 + 0x3fc);
      if (temp_v0 != 0) {
        temp_v2 = *(unsigned int *)(param_1 + 0xc4);
        temp_v1 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x68),temp_v2);
        onlineJobSetStateWaiting(param_1);
        temp_v0 = _Znwj(0x10);
        temp_v1 = 0;
        if (temp_v0 != 0) {
          temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0012ca1d,0,&LAB_0012c838);
        }
        FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
      }
      else {
        temp_v6 = 0x8001000d;
        temp_v1 = _ZN12OnlineResultC1ERKj(temp_v5,(unsigned int *)&temp_v6);
        FUN_0030c720(param_1,temp_v1);
      }
    }
    destroyObj0055ad6c(temp_v3);
  }
  else {
    temp_v6 = 0x80010004;
    temp_v1 = _ZN12OnlineResultC1ERKj(temp_v5,(unsigned int *)&temp_v6);
    FUN_0030c720(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
