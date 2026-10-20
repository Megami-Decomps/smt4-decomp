/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ee42` (_code @ 0x30ee42, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002fb208(void);
int FUN_0030ceb8(void);
int FUN_0030cf36(int, int *);
int FUN_0030cfae(int *, int, int *);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned int FUN_002e6e34(unsigned char *, int);
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002fb208. */
/* Supplied declaration required: FUN_0030ceb8. */
/* Supplied declaration required: FUN_0030cf36. */
extern int wordRefsEqual_0030cf7c(int *, unsigned int *);
/* Supplied declaration required: FUN_0030cfae. */


int FUN_0030ee42(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v0 = FUN_002e6e34(temp_v4,param_1 + 0x24);
  FUN_002fb208();
  temp_v3 = param_1 + 0x54;
  temp_v7 = temp_v0;
  FUN_0030cfae(&temp_v6,temp_v3,&temp_v7);
  temp_v8 = *(unsigned int *)(param_1 + 100);
  temp_v1 = wordRefsEqual_0030cf7c(&temp_v6,(unsigned int *)&temp_v8);
  if (temp_v1 != 0) {
    FUN_002fb208();
    temp_v2 = temp_v3;
    temp_v5 = temp_v1;
    FUN_0030cf36(temp_v3,&temp_v5);
    FUN_0030ceb8();
    FUN_002fb208();
    temp_v5 = temp_v2;
    FUN_0030cf36(temp_v3,&temp_v5);
  }
  else {
    temp_v3 = temp_v6 + 0x14;
  }
  _ZN9Obj55b28cD1Ev(temp_v4);
  return temp_v3;
}

} /* extern "C" */
