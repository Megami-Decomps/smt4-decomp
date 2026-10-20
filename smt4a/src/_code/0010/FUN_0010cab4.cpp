/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cab4` (_code @ 0x10cab4, 0x122 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117588(void);
int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002f4dc2(...);
int FUN_002f6758(void);
int FUN_002f678c(...);

typedef int romwright_code(...);
/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Supplied declaration required: FUN_00117588. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int onlineUrlGetAddress(void);
/* Supplied declaration required: FUN_002f4dc2. */
extern int FUN_002f4dea(unsigned char *);
/* Supplied declaration required: FUN_002f6758. */
extern unsigned int FUN_002f6766(void);
/* Supplied declaration required: FUN_002f678c. */


void FUN_0010cab4(int *param_1,unsigned char *param_2,unsigned char *param_3,unsigned char *param_4,
                 unsigned char *param_5,int param_6,unsigned char *param_7)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  romwright_code *pcVar9;
  unsigned char temp_v5 [16];
  int *piStack_24;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned char *temp_v8;
  
  piStack_24 = param_1;
  temp_v6 = param_2;
  temp_v7 = param_3;
  temp_v8 = param_4;
  if (param_7 != (unsigned char *)0x0) {
    if (param_7 != (unsigned char *)0xfffffff8) {
      temp_v0 = onlineUrlGetAddress();
      temp_v1 = *(unsigned int *)(temp_v0 + 8);
      temp_v1 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
              (temp_v1 >> 0x18);
      if (temp_v1 == 0) {
        FUN_002f6758();
        temp_v1 = FUN_002f6766();
      }
    }
    else {
      FUN_002f6758();
      temp_v1 = FUN_002f6766();
    }
    temp_v0 = *(int *)(param_7 + 0x78);
    temp_v2 = *(unsigned int *)(param_7 + 0x7c);
    temp_v3 = FUN_002f6758();
    FUN_002f678c(temp_v3,temp_v2,temp_v0,temp_v1);
    FUN_002f4dc2(param_1,param_7);
  }
  else {
    FUN_002f6758();
    temp_v2 = FUN_002f6766();
    temp_v0 = param_1[0xf];
    temp_v4 = param_1[0xe];
    temp_v3 = FUN_002f6758();
    FUN_002f678c(temp_v3,temp_v4,temp_v0,temp_v2);
  }
  temp_v4 = FUN_002f4dea(param_7);
  if (temp_v4 != 0) {
    temp_v7[0x3b] = 1;
    temp_v8[0x3b] = 1;
  }
  if (~param_1[0xb] << 0x1e >= 0) {
    temp_v4 = (**(romwright_code **)(*param_1 + 0x58))(param_1);
    if (temp_v4 != 0) {
      pcVar9 = *(romwright_code **)(*param_1 + 0x54);
      puVar6 = temp_v6;
      puVar7 = temp_v7;
      puVar8 = temp_v8;
      param_7 = param_5;
      temp_v0 = param_6;
    }
    else {
      pcVar9 = *(romwright_code **)(*param_1 + 0x50);
      puVar6 = temp_v7;
      puVar7 = temp_v8;
      puVar8 = param_5;
    }
    (*pcVar9)(param_1,puVar6,puVar7,puVar8,param_7,temp_v0);
  }
  else {
    temp_v4 = FUN_002e6e26();
    FUN_002e6e34(temp_v5,temp_v4 + 0x58);
    temp_v4 = (**(romwright_code **)(*param_1 + 0x58))(param_1);
    if (temp_v4 != 0) {
      pcVar9 = *(romwright_code **)(*param_1 + 0x54);
      puVar6 = temp_v6;
      puVar7 = temp_v7;
      puVar8 = temp_v8;
      param_7 = param_5;
      temp_v0 = param_6;
    }
    else {
      pcVar9 = *(romwright_code **)(*param_1 + 0x50);
      puVar6 = temp_v7;
      puVar7 = temp_v8;
      puVar8 = param_5;
    }
    (*pcVar9)(param_1,puVar6,puVar7,puVar8,param_7,temp_v0);
    _ZN9Obj55b28cD1Ev(temp_v5);
  }
  FUN_002f4dc2(param_1,0);
  FUN_002f6758();
  FUN_00117588();
  if (-1 < ~param_1[0xb] << 0x1c) {
    *param_5 = 0;
  }
  return;
}

} /* extern "C" */
