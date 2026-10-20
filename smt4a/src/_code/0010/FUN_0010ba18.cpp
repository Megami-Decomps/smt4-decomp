/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ba18` (_code @ 0x10ba18, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineJobSetStateTimed(int, int);
int FUN_002f5898(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int wordRefsEqual_002ea42c(int, unsigned int);
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: FUN_002f5898. */


void FUN_0010ba18(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [12];
  int temp_v4;
  unsigned char temp_v5 [12];
  unsigned int temp_v6 [2];
  
  FUN_002e6e34(temp_v2,param_1 + 0x7c);
  temp_v4 = 0x80010001;
  temp_v0 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
  temp_v1 = wordRefsEqual_002ea42c(param_1 + 0x6c,temp_v0);
  if (temp_v1 != 0) {
    onlineJobSetStateTimed(param_1,10);
  }
  else {
    temp_v6[0] = 0x80010004;
    temp_v0 = FUN_002e7908(temp_v5,temp_v6);
    FUN_002f5898(param_1,temp_v0);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
