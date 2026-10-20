/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ae94` (_code @ 0x16ae94, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018878c(unsigned char *, unsigned char [512]);
int FUN_0018a924(float *, float [5]);
int FUN_0018ab54(unsigned char [64], int *);
int FUN_0018ee0c(unsigned char [512], int);
int FUN_0018f0ac(unsigned char [512], int, unsigned char [64]);

typedef struct fn_0016ae94_arg0 fn_0016ae94_arg0;
struct fn_0016ae94_arg0 {
    unsigned char pad_0x0[0x18];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xb0];
    int field_0xcc; /* +0xcc */
    unsigned char pad_0xd0[0xc0];
    byte field_0x190; /* +0x190 */
    byte field_0x191; /* +0x191 */
    byte field_0x192; /* +0x192 */
    byte field_0x193; /* +0x193 */
};

/* stack frame of param_2: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

/* Supplied declaration required: FUN_0018878c. */
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_0018ab54. */
/* Supplied declaration required: FUN_0018ee0c. */
/* Supplied declaration required: FUN_0018f0ac. */


void FUN_0016ae94(fn_0016ae94_arg0 *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned char temp_v3 [512];
  int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20 [64];
  float temp_v21;
  float temp_v22 [5];
  
  puVar1 = (unsigned char *)param_1->field_0x18;
  temp_v0 = *(float *)(param_2 + 0x2c);
  temp_v1 = *(float *)(param_2 + 0x30);
  if (param_1->field_0xcc < 0) {
    FUN_0018ee0c(temp_v3,param_1->field_0x193);
  }
  else {
    temp_v2 = *(float *)(param_2 + 0x34);
    FUN_0018a924(&temp_v21,temp_v22);
    temp_v5 = temp_v22[0] / temp_v21;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v16 = 0;
    temp_v14 = 1.0f / (temp_v1 - temp_v0);
    temp_v17 = 0;
    temp_v18 = 0xbf800000;
    temp_v19 = 0;
    temp_v15 = temp_v1 * temp_v0 * temp_v14;
    temp_v14 = temp_v1 * temp_v14;
    temp_v4 = 0;
    temp_v8 = -(temp_v5 / temp_v2);
    temp_v9 = 0x80000000;
    temp_v10 = 0x80000000;
    temp_v11 = 0x80000000;
    FUN_0018ab54(temp_v20,&temp_v4);
    FUN_0018f0ac(temp_v3,param_1->field_0x193,temp_v20);
  }
  FUN_0018878c(puVar1,temp_v3);
  puVar1[2] = param_1->field_0x190;
  puVar1[3] = param_1->field_0x191;
  puVar1[4] = param_1->field_0x192;
  *puVar1 = 1;
  puVar1[1] = 0;
  return;
}

} /* extern "C" */
