/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004139ec` (_code @ 0x4139ec, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103f54(unsigned int, unsigned int *, int, int);
int holderSetFlagBits(unsigned int, int);
int FUN_00110b28(unsigned char [16], unsigned char **);
int FUN_0011b63e(int, unsigned int, unsigned char [5], int);
int operatorNew(int);
int FUN_00432b10(unsigned char [5]);
int _ZN9Obj55a5a8D1Ev(unsigned char [5]);

/* stack frame of param_1: 7 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned short sp74; /* 0x74: local_74 */
    unsigned char sp93; /* 0x93: local_93 */
} param_1_stack;

extern int FUN_0041460c(...); /* 0x41460c */
extern unsigned char DAT_00558760; /* 0x558760 */
extern unsigned char DAT_0055cacc; /* 0x55cacc */

/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: FUN_00110b28. */
/* Supplied declaration required: FUN_0011b63e. */
/* Supplied declaration required: operatorNew. */
extern unsigned int FUN_002fafd8(int, unsigned int);
/* Supplied declaration required: FUN_00432b10. */
/* Supplied declaration required: _ZN9Obj55a5a8D1Ev. */


void FUN_004139ec(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [5];
  unsigned char temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5 [16];
  unsigned char temp_v6;
  unsigned char *temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  FUN_00432b10(temp_v2);
  temp_v3 = 1;
  temp_v4 = 999;
  temp_v8 = 0;
  temp_v10 = 0x14;
  temp_v6 = 5;
  temp_v9 = 0xffffffff;
  temp_v7 = &DAT_00558760;
  FUN_00110b28(temp_v5,&temp_v7);
  temp_v0 = operatorNew(0x78);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002fafd8(temp_v0,0);
  }
  puVar2 = (unsigned int *)operatorNew(0x14);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = param_1;
    puVar2[2] = (unsigned int)FUN_0041460c;
    puVar2[3] = 0;
    *puVar2 = (unsigned int)&DAT_0055cacc;
    puVar2[4] = temp_v1;
    holderSetFlagBits(temp_v1,2);
    FUN_00103f54(temp_v1,puVar2,0,1);
  }
  FUN_0011b63e(param_1 + 4,temp_v1,temp_v2,param_1 + 0xdc);
  _ZN9Obj55a5a8D1Ev(temp_v2);
  return;
}

} /* extern "C" */
