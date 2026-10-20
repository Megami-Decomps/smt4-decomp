/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec964` (_code @ 0x2ec964, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00130588(int [2], int, unsigned int *);
int FUN_00130824(int [2], int, int);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002ec728(int, unsigned int);
int destroyObj0055ae64(...);
int FUN_002ec8a8(int, unsigned int);
int strDestroy(...);
int FUN_002ecbdc(unsigned int *, unsigned int);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_4_stack;

/* Supplied declaration required: FUN_00130588. */
/* Supplied declaration required: FUN_00130824. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int strInit(int *);
/* Supplied declaration required: FUN_002ec728. */
extern unsigned int FUN_002ec75c(unsigned char *);
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ecbdc. */
extern int FUN_002ece14(unsigned char *, unsigned int);


void FUN_002ec964(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned char temp_v3 [32];
  int temp_v4 [2];
  unsigned char temp_v5 [32];
  unsigned char temp_v6 [12];
  int temp_v7 [2];
  int iStack_24;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  iStack_24 = param_1;
  temp_v8 = param_2;
  temp_v9 = param_3;
  temp_v10 = param_4;
  FUN_002e6e34(temp_v6,param_1 + 0x3c);
  temp_v0 = strInit(temp_v4);
  temp_v2 = temp_v8;
  temp_v1 = FUN_002ece14(temp_v3,temp_v0);
  FUN_00130824(temp_v7,param_1 + 4,temp_v1 - 4);
  strDestroy(temp_v3);
  strDestroy(temp_v4);
  FUN_002ec8a8(temp_v7[0] + 0x14,temp_v9);
  temp_v0 = FUN_002ec75c(temp_v5);
  puVar3 = (unsigned int *)&temp_v2;
  FUN_002ecbdc(puVar3,temp_v0);
  FUN_00130588(temp_v4,param_1 + 0x20,puVar3 + -1);
  destroyObj0055ae64(&temp_v2);
  destroyObj0055ae64(temp_v5);
  FUN_002ec728(temp_v4[0] + 0x14,temp_v10);
  _ZN9Obj55b28cD1Ev(temp_v6);
  return;
}

} /* extern "C" */
