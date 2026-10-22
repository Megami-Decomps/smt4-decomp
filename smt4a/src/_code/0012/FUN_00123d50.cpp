/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123d50` (_code @ 0x123d50, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(unsigned int, unsigned int);
int asdOperatorDeleteArray(unsigned int);
int _ZN9Obj55b28cC1EPv(unsigned char [12], int *);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineStringSetFromRaw(unsigned int, unsigned int);
int FUN_0030eef0(...);

typedef int romwright_code(...);
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int rt_malloc(unsigned int);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineStringSetFromRaw. */
/* Supplied declaration required: FUN_0030eef0. */


int FUN_00123d50(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4 [3];
  int temp_v5;
  int *temp_v6;
  
  _ZN9Obj55b28cC1EPv(temp_v3,param_1 + 0x417);
  (**(romwright_code **)(*param_1 + 0x40))(temp_v4,param_1);
  if (-1 < temp_v4[0]) {
    param_1 = param_1 + 0xe;
    temp_v5 = 0;
    temp_v6 = param_1;
    FUN_0030eef0(param_1,param_2,0,0,&temp_v5);
    if ((-1 < (int)param_1) && (temp_v1 = temp_v5 + 1, temp_v1 < 0x1001)) {
      temp_v0 = rt_malloc(temp_v1);
      rt_memclr(temp_v0,temp_v1);
      piVar2 = temp_v6;
      FUN_0030eef0(temp_v6,param_2,temp_v0,temp_v1,0);
      temp_v2 = ((int)piVar2 >> 0x1f) + 1;
      if (temp_v2 != 0) {
        onlineStringSetFromRaw(param_3,temp_v0);
      }
      asdOperatorDeleteArray(temp_v0);
      _ZN9Obj55b28cD1Ev(temp_v3);
      return temp_v2;
    }
  }
  _ZN9Obj55b28cD1Ev(temp_v3);
  return 0;
}

} /* extern "C" */
