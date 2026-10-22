/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104e12` (_code @ 0x104e12, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002eb300(unsigned char [4], int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002eb300. */


void FUN_00104e12(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  
  temp_v0 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(temp_v1,temp_v0);
  temp_v2 = param_2;
  temp_v3 = param_3;
  FUN_002eb300(temp_v4,param_1 + 0xac,&temp_v2);
  _ZN9Obj55b28cD1Ev(temp_v1);
  return;
}

} /* extern "C" */
