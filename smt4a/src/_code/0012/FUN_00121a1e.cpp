/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121a1e` (_code @ 0x121a1e, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_0030fe74(unsigned char [4], int, unsigned int **);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern int FUN_00123728(unsigned int *, unsigned int);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int wordRefsDiffer_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_0030fe74. */


unsigned int FUN_00121a1e(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [12];
  unsigned int *temp_v2;
  int temp_v3;
  unsigned int *temp_v4;
  unsigned char temp_v5 [4];
  
  _ZN9Obj55b28cC1EPv(temp_v1,param_1 + 0x58);
  temp_v2 = *(unsigned int **)(param_1 + 0x98);
  do {
    temp_v2 = (unsigned int *)*temp_v2;
    temp_v3 = *(unsigned int *)(param_1 + 0x98);
    temp_v0 = wordRefsDiffer_002ee774(&temp_v2,(unsigned int *)&temp_v3);
    if (temp_v0 == 0) {
      _ZN9Obj55b28cD1Ev(temp_v1);
      return 0;
    }
    temp_v0 = FUN_00123728(temp_v2 + 2,param_2);
  } while (temp_v0 == 0);
  temp_v4 = temp_v2;
  FUN_0030fe74(temp_v5,param_1 + 0x54,&temp_v4);
  _ZN9Obj55b28cD1Ev(temp_v1);
  return 1;
}

} /* extern "C" */
