/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123ccc` (_code @ 0x123ccc, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int *);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


unsigned char FUN_00123ccc(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [12];
  int temp_v1 [4];
  
  FUN_002e6e34(temp_v0,param_1 + 0x417);
  (**(romwright_code **)(*param_1 + 0x40))(temp_v1,param_1);
  if (-1 >= temp_v1[0]) {
    _ZN9Obj55b28cD1Ev(temp_v0);
  }
  else {
    *param_2 = param_1[0x425];
    _ZN9Obj55b28cD1Ev(temp_v0);
  }
  return -1 < temp_v1[0];
}

} /* extern "C" */
