/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104f5a` (_code @ 0x104f5a, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002eb390(int *, int, int *);
int FUN_002eb3f2(int, int *);
int FUN_002eb422(int *);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002eb390. */
/* Supplied declaration required: FUN_002eb3f2. */
/* Supplied declaration required: FUN_002eb422. */
extern int wordRefsDiffer_002eb452(int *, unsigned int *);


unsigned int FUN_00104f5a(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int iStack_18;
  int temp_v6;
  int iStack_10;
  
  iStack_18 = param_1;
  temp_v6 = param_2;
  iStack_10 = param_3;
  temp_v0 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(temp_v2,temp_v0);
  FUN_002eb390(&temp_v3,param_1 + 0xac,&temp_v6);
  while( 1 ) {
    temp_v4 = *(unsigned int *)(param_1 + 0xbc);
    temp_v1 = wordRefsDiffer_002eb452(&temp_v3,(unsigned int *)&temp_v4);
    if ((temp_v1 == 0) || (*(int *)(temp_v3 + 0x10) != temp_v6)) break;
    if (*(int *)(temp_v3 + 0x14) == param_3) {
      temp_v5 = temp_v3;
      FUN_002eb3f2(param_1 + 0xac,&temp_v5);
      _ZN9Obj55b28cD1Ev(temp_v2);
      return 1;
    }
    FUN_002eb422(&temp_v3);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return 0;
}

} /* extern "C" */
