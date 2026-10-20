/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334e1c` (_code @ 0x334e1c, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(...);
int FUN_00183bb0(...);
int FUN_00184e64(...);
int FUN_0019d880(...);
int FUN_00230a50(...);
int FUN_002f752c(...);
int FUN_0039c9f0(...);
int FUN_003b7960(...);
int FUN_003c4250(...);

typedef struct fn_00334e1c_arg0 fn_00334e1c_arg0;
struct fn_00334e1c_arg0 {
    unsigned char pad_0x0[0xa];
    short field_0xa; /* +0xa */
    unsigned char pad_0xc[0x1384];
    unsigned char field_0x1390; /* +0x1390 */
    unsigned char pad_0x1391[0xc82];
    char field_0x2013; /* +0x2013 */
    unsigned char pad_0x2014[0x3];
    byte field_0x2017; /* +0x2017 */
};

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: FUN_00230a50. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_002f752c. */
/* Supplied declaration required: FUN_0039c9f0. */
/* Supplied declaration required: FUN_003b7960. */
/* Supplied declaration required: FUN_003c4250. */


void FUN_00334e1c(fn_00334e1c_arg0 *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10 [2];
  int temp_v11 [11];
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10[0] = 0;
  FUN_00184e64(0xffffffff);
  FUN_00230a50(&temp_v7,&temp_v8,param_2 + 0x12);
  FUN_0019d880();
  FUN_001677c0();
  FUN_002f752c(param_1,&temp_v9,temp_v10,param_2,(int)param_1->field_0x2013);
  if (param_1->field_0x2013 != '\0') {
    temp_v6 = 0;
    temp_v11[0] = 0;
    FUN_002f752c(param_1,&temp_v6,temp_v11,param_2,0);
    temp_v3 = temp_v6;
    if (temp_v9 < temp_v6) {
      temp_v3 = -0x23f0eb01;
    }
    if (temp_v9 == temp_v6) {
      temp_v3 = -1;
    }
    if (temp_v6 < temp_v9) {
      FUN_00184e64(0x72e027ff);
    }
    else {
      FUN_00184e64(temp_v3);
    }
    temp_v3 = temp_v9 - temp_v6;
    temp_v4 = temp_v10[0] - temp_v11[0];
  }
  temp_v6 = temp_v3;
  FUN_0039c9f0(param_1,param_2,temp_v7,temp_v8,temp_v9);
  temp_v1 = temp_v9;
  temp_v3 = temp_v8;
  temp_v0 = temp_v7;
  if ((param_1->field_0x2017 != 0xe) &&
     (((temp_v5 = temp_v10[0], param_1->field_0x2017 != 7 ||
       (temp_v2 = FUN_0026264c(*(unsigned short *)&param_1->field_0x1390), temp_v2 != 0)) &&
      (param_1->field_0x2017 != 0x10)))) {
    FUN_0019d880();
    temp_v2 = FUN_001834a4(0x12,param_2 + 0x7b);
    if (temp_v1 < 200) {
      temp_v6 = temp_v4;
      FUN_003c4250(param_1,temp_v0,*(short *)(temp_v2 + 10) + temp_v3,temp_v1,temp_v5);
    }
    else if (temp_v1 == 999) {
      FUN_003b7960(param_1,temp_v0,*(short *)(temp_v2 + 10) + temp_v3,0x75,0x74);
    }
    else {
      FUN_003b7960(param_1,temp_v0,*(short *)(temp_v2 + 10) + temp_v3,0x73,0x72);
    }
    FUN_001677c0();
  }
  FUN_001677c0();
  FUN_00183bb0();
  return;
}

} /* extern "C" */
