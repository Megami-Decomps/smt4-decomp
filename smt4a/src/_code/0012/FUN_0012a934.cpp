/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a934` (_code @ 0x12a934, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int onlineJobCompleteWithResult(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0012a6e5; /* 0x12a6e5 */
extern unsigned char LAB_0012a9dc; /* 0x12a9dc */

extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(int *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: onlineJobCompleteWithResult. */


void FUN_0012a934(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar5;
  int temp_v3 [3];
  unsigned int temp_v4 [2];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    if (*(char *)(param_1 + 0x184) != '\0') {
      temp_v3[0] = param_1 + 0x14c;
      piVar2 = *(int **)(param_1 + 0x70);
      pcVar5 = *(romwright_code **)(*piVar2 + 0x14);
    }
    else {
      piVar2 = *(int **)(param_1 + 0x70);
      pcVar5 = *(romwright_code **)(*piVar2 + 0xc);
    }
    temp_v0 = (*pcVar5)(piVar2,param_1 + 0x98);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0xdc);
      temp_v1 = onlineInstanceTableGetCurrent();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x6c),temp_v2);
      onlineJobSetStateWaiting(param_1);
      temp_v0 = _Znwj(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0012a6e5,0,&LAB_0012a9dc);
      }
      FUN_002f7cba(param_1,param_1 + 0x98,temp_v1);
      return;
    }
    temp_v4[0] = 0x8001000d;
  }
  else {
    temp_v4[0] = 0x80010004;
  }
  temp_v1 = _ZN12OnlineResultC1ERKj(temp_v3,temp_v4);
  onlineJobCompleteWithResult(param_1,temp_v1);
  return;
}

} /* extern "C" */
