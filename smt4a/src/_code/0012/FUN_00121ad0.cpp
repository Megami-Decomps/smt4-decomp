/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121ad0` (_code @ 0x121ad0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int FUN_002ee938(...);
int FUN_0030fe74(unsigned char [8], int, unsigned int **);
int FUN_0030fe84(int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
} param_2_stack;

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern int wordRefsDiffer_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_0030fe74. */
/* Supplied declaration required: FUN_0030fe84. */


unsigned int FUN_00121ad0(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [12];
  unsigned int *temp_v2;
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [8];
  int temp_v5;
  unsigned int *temp_v6;
  unsigned char temp_v7 [8];
  
  _ZN9Obj55b28cC1EPv(temp_v1,param_1 + 0x58);
  temp_v2 = *(unsigned int **)(param_1 + 0x98);
  do {
    temp_v2 = (unsigned int *)*temp_v2;
    temp_v5 = *(unsigned int *)(param_1 + 0x98);
    temp_v0 = wordRefsDiffer_002ee774(&temp_v2,(unsigned int *)&temp_v5);
    if (temp_v0 == 0) {
      _ZN9Obj55b28cD1Ev(temp_v1);
      return 0;
    }
    FUN_002ee938(temp_v4,param_2);
    FUN_002ee938(temp_v3,temp_v2 + 2);
    temp_v0 = FUN_002ee96a(temp_v3,temp_v4);
    _ZN9Obj55aff4D1Ev(temp_v3);
    _ZN9Obj55aff4D1Ev(temp_v4);
  } while (temp_v0 == 0);
  temp_v6 = temp_v2;
  FUN_0030fe74(temp_v7,param_1 + 0x54,&temp_v6);
  FUN_0030fe84(param_1 + 0x54,param_2);
  _ZN9Obj55b28cD1Ev(temp_v1);
  return 1;
}

} /* extern "C" */
