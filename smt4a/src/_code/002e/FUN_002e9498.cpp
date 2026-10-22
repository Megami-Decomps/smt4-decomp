/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9498` (_code @ 0x2e9498, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012f1f2(int [2], int, int);
int FUN_002e7908(unsigned int, unsigned int [2]);
int _ZN9Obj55aff4D1Ev(...);
int onlineUrlEnsureParsed(int);
int FUN_002e9510(int, unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_0012f1f2. */
/* Supplied declaration required: FUN_002e7908. */
extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, unsigned int);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: onlineUrlEnsureParsed. */
/* Supplied declaration required: FUN_002e9510. */
extern int _ZN9Obj55aff4C1ERKS_(unsigned char *, unsigned int);


void FUN_002e9498(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [8];
  unsigned int temp_v6 [2];
  unsigned int temp_v7;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v8;
  
  temp_v7 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  temp_v8 = param_4;
  onlineUrlEnsureParsed(param_2);
  temp_v0 = _ZN9Obj55aff4C1EPKc(temp_v4,param_3);
  FUN_002e9510(param_2 + 0x28,temp_v0);
  _ZN9Obj55aff4D1Ev(temp_v4);
  temp_v0 = _ZN9Obj55aff4C1EPKc(temp_v5,param_3);
  temp_v1 = _ZN9Obj55aff4C1ERKS_(temp_v3,temp_v0);
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_0012f1f2(temp_v2,param_2 + 0xc,temp_v1);
  _ZN9Obj55aff4D1Ev(temp_v3);
  *(unsigned int *)(temp_v2[0] + 0x18) = temp_v8;
  _ZN9Obj55aff4D1Ev(temp_v5);
  *(unsigned char *)(param_2 + 0x65) = 0;
  temp_v6[0] = 0x10001;
  FUN_002e7908(temp_v7,temp_v6);
  return;
}

} /* extern "C" */
