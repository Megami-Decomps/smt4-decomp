/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ba70` (_code @ 0x10ba70, 0x96 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int _ZN12OnlineResultC1ERKj(unsigned char [12], int *);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateTimed(int, int);
int FUN_002f5898(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
} param_1_stack;

extern unsigned char LAB_0010bb0c; /* 0x10bb0c */

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int wordRefsEqual_002ea42c(int, unsigned int);
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: FUN_002f5898. */


void FUN_0010ba70(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned char temp_v6 [12];
  int temp_v7;
  unsigned char temp_v8 [20];
  
  _ZN9Obj55b28cC1EPv(temp_v3,param_1 + 0x7c);
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  temp_v2 = param_1 + 0x6c;
  if (temp_v0 != 0) {
    temp_v7 = 0x80010001;
    temp_v1 = _ZN12OnlineResultC1ERKj(temp_v6,&temp_v7);
    temp_v0 = wordRefsEqual_002ea42c(temp_v2,temp_v1);
    if (temp_v0 != 0) {
      onlineJobSetStateTimed(param_1,10);
      _ZN9Obj55b28cD1Ev(temp_v3);
      return;
    }
  }
  else {
    temp_v5 = 0x80010001;
    temp_v1 = _ZN12OnlineResultC1ERKj(temp_v4,&temp_v5);
    temp_v0 = wordRefsEqual_002ea42c(temp_v2,temp_v1);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v8,0x10ba19,0,&LAB_0010bb0c);
      FUN_002ea3d0(param_1,temp_v1);
      _ZN9Obj55b28cD1Ev(temp_v3);
      return;
    }
    temp_v5 = 0x80010004;
    temp_v2 = _ZN12OnlineResultC1ERKj(temp_v4,&temp_v5);
  }
  FUN_002f5898(param_1,temp_v2);
  _ZN9Obj55b28cD1Ev(temp_v3);
  return;
}

} /* extern "C" */
