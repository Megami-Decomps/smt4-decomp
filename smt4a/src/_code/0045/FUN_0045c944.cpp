/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045c944` (_code @ 0x45c944, 0x258 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015fe40(int, unsigned int);
int FUN_001a5e84(unsigned int **, int, int);
int FUN_004619b0(int, unsigned int, int);
int FUN_00466d2c(int, int *, int *);
int FUN_00466dac(int, int, int);
int FUN_00466ea4(int, int, int, int *);

typedef struct fn_0045c944_arg0 fn_0045c944_arg0;
struct fn_0045c944_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x108];
    undefined4 field_0x110; /* +0x110 */
    void *field_0x114; /* +0x114 */
};

typedef int romwright_code(...);
/* stack frame of param_7: 8 slot(s), 29 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
} param_7_stack;

extern unsigned char DAT_00548f3c; /* 0x548f3c */

/* Supplied declaration required: FUN_0015fe40. */
/* Supplied declaration required: FUN_001a5e84. */
extern int FUN_001a8d40(unsigned int **, unsigned int);
/* Supplied declaration required: FUN_004619b0. */
/* Supplied declaration required: FUN_00466d2c. */
/* Supplied declaration required: FUN_00466dac. */
/* Supplied declaration required: FUN_00466ea4. */
extern int vcallSlot5(unsigned int, unsigned int);


unsigned int
FUN_0045c944(fn_0045c944_arg0 *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,
            int param_5,unsigned int param_6,int *param_7)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_74;
  unsigned int *puStack_70;
  unsigned int uStack_6c;
  int temp_v5;
  int temp_v6;
  int iStack_4c;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  fn_0045c944_arg0 *pfStack_34;
  int iStack_30;
  unsigned int *temp_v11;
  unsigned int *puStack_28;
  
  temp_v0 = 0;
  temp_v3 = 0;
  temp_v10 = (unsigned int)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) != 0);
  temp_v6 = 0xffffffff;
  iStack_4c = 0;
  pfStack_34 = param_1;
  iStack_30 = param_2;
  temp_v11 = param_3;
  puStack_28 = param_4;
  if (param_1->field_0x114 != (void *)0x0) {
    temp_v1 = param_1->field_0x4;
    FUN_0015fe40(temp_v1,*(unsigned int *)(param_2 + 0xb0));
    temp_v5 = temp_v1;
    if (temp_v1 != 0) {
      piVar3 = (int *)param_1->field_0x114;
      if ((char)piVar3[1] == '\0') {
        temp_v1 = 0;
      }
      else {
        temp_v4 = 0;
        temp_v1 = (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v1,&DAT_00548f3c,"bxwsd");
      }
      piVar3 = (int *)param_1->field_0x114;
      if ((char)piVar3[1] == '\0') {
        temp_v2 = 0;
      }
      else {
        temp_v4 = 0;
        temp_v2 = (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v5,&DAT_00548f3c,"bxwar");
      }
      if (!(temp_v1 == 0 || temp_v2 == 0)) {
        FUN_001a5e84(&puStack_70,temp_v2,0);
        temp_v3 = FUN_001a8d40(&puStack_70,*param_4);
        if (temp_v3 == 0) {
          temp_v1 = vcallSlot5(param_1->field_0x110,*temp_v11);
        }
      }
      else {
        temp_v1 = vcallSlot5(param_1->field_0x110,*temp_v11);
      }
    }
    else {
      temp_v1 = vcallSlot5(param_1->field_0x110,*temp_v11);
    }
  }
  else {
    temp_v1 = vcallSlot5(param_1->field_0x110,*temp_v11);
  }
  temp_v6 = *(unsigned int *)(param_2 + 0xb0);
  iStack_4c = temp_v1;
  if (temp_v1 != 0) {
    if (temp_v3 == 0) {
      if (param_7 != (int *)0x0) {
        temp_v3 = *param_7;
      }
      else {
        temp_v3 = temp_v1;
        FUN_004619b0(temp_v1,*param_4,param_1->field_0x4);
      }
      if (temp_v3 == 0) {
        if (temp_v10 == 0) {
          return 8;
        }
        temp_v0 = 1;
      }
    }
  }
  else {
    if (temp_v10 == 0) {
      return 7;
    }
    temp_v0 = 1;
  }
  if (param_5 == 0) {
    temp_v8 = 1;
  }
  else if ((param_5 != 1) && (param_5 == 2)) {
    temp_v8 = 0;
  }
  else {
    temp_v8 = 0;
    param_6 = 0;
  }
  temp_v7 = *param_4;
  temp_v9 = param_6;
  if (temp_v0) {
    temp_v4 = param_1->field_0x4;
    uStack_6c = *(unsigned int *)(param_2 + 0x10);
    uStack_74 = param_1->field_0x110;
    puStack_70 = (unsigned int *)&temp_v6;
    FUN_00466d2c(param_2,&temp_v4,&temp_v7);
  }
  else {
    temp_v4 = 0;
    if (param_7 != (int *)0x0) {
      temp_v4 = (int)(char)param_7[1];
    }
    FUN_00466ea4(param_2,temp_v1,temp_v3,&temp_v7);
  }
  FUN_00466dac(param_2,*(unsigned char *)(param_4 + 2),(int)*(char *)((int)param_4 + 9));
  return 0;
}

} /* extern "C" */
