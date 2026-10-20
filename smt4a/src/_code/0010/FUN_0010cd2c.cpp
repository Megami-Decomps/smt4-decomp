/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cd2c` (_code @ 0x10cd2c, 0xa2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(unsigned char [32], unsigned int, unsigned int, unsigned int);
int FUN_002e7614(unsigned char [12], int);
int strInit(unsigned char [32]);
int initVtable00558630(unsigned char [12]);
int strDestroy(...);
int FUN_002f6be2(...);
int operatorDeleteArrayNullable(...);
int FUN_002f6bfc(unsigned char [12], unsigned char [32], unsigned char [12]);
int FUN_002f6c32(int, int, unsigned int);

typedef struct fn_0010cd2c_arg0 fn_0010cd2c_arg0;
struct fn_0010cd2c_arg0 {
    unsigned char pad_0x0[0x8];
    char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x94];
    int field_0xa4; /* +0xa4 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
} param_2_stack;

/* Supplied declaration required: strAssign. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: strInit. */
/* Supplied declaration required: initVtable00558630. */
/* Supplied declaration required: strDestroy. */
extern unsigned int FUN_002eea7c(unsigned int);
extern int FUN_002f6bcc(void);
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: operatorDeleteArrayNullable. */
/* Supplied declaration required: FUN_002f6bfc. */
/* Supplied declaration required: FUN_002f6c32. */


void FUN_0010cd2c(fn_0010cd2c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [2];
  unsigned char temp_v9 [32];
  char *temp_v10 [2];
  unsigned char temp_v11 [12];
  
  temp_v0 = FUN_002f6bcc();
  if (temp_v0 == 0) {
    FUN_002f6be2(param_2,temp_v10);
    temp_v3 = 0;
    temp_v0 = 0;
    for (pcVar2 = temp_v10[0]; temp_v2 = (int)*pcVar2, temp_v2 != 0; pcVar2 = pcVar2 + 1) {
      temp_v0 = temp_v2 + temp_v0;
      temp_v3 = temp_v2 + temp_v3;
    }
    operatorDeleteArrayNullable(temp_v10[0]);
    param_1->field_0x8 = (char)temp_v3;
    param_1->field_0xc = temp_v0;
    if (param_1->field_0xa4 != 0) {
      initVtable00558630(temp_v11);
      strInit(temp_v9);
      FUN_002e7614(temp_v4,0x10);
      FUN_002f6be2(param_2,temp_v8);
      temp_v1 = FUN_002eea7c(param_2);
      strAssign(temp_v9,temp_v8[0],temp_v1,0xffffffff);
      operatorDeleteArrayNullable(temp_v8[0]);
      FUN_002f6bfc(temp_v11,temp_v9,temp_v4);
      FUN_002f6c32(param_1->field_0xa4,temp_v5 + temp_v7,temp_v6);
      strDestroy(temp_v4);
      strDestroy(temp_v9);
    }
  }
  return;
}

} /* extern "C" */
