/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012165c` (_code @ 0x12165c, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121808(...);
int FUN_002e9ec8(...);
int FUN_002ea446(...);
int FUN_002eda5a(...);
int FUN_002edb54(...);
int FUN_002f17e4(...);
int FUN_0030ff06(...);

typedef struct fn_0012165c_arg0 fn_0012165c_arg0;
struct fn_0012165c_arg0 {
    unsigned char pad_0x0[0x68];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x3];
    void *field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x18];
    unsigned char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    void *field_0x8c; /* +0x8c */
    void *field_0x90; /* +0x90 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

/* Supplied declaration required: FUN_00121808. */
extern int *FUN_002e7908(unsigned int **, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002eda5a. */
/* Supplied declaration required: FUN_002edb54. */
/* Supplied declaration required: FUN_002f17e4. */
extern int FUN_002fc046(int *);
/* Supplied declaration required: FUN_0030ff06. */


void FUN_0012165c(fn_0012165c_arg0 *param_1)

{
/* irregular: 5 unstructured edge(s); 2 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int *temp_v4 [3];
  int temp_v5;
  int temp_v6 [2];
  unsigned int *temp_v7;
  unsigned int temp_v8;
  int temp_v9 [3];
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = FUN_002e9af4();
  FUN_002e9ec8(temp_v2,*(unsigned int *)&param_1->field_0x68);
  if (temp_v2 != 0) {
    temp_v12 = 0;
    while( 1 ) {
      temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x6c + 0x18))();
      if (temp_v2 == 0) break;
      temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x6c + 0x20))();
      if (temp_v2 != 0) break;
      temp_v3 = temp_v12 + 1;
      temp_v0 = temp_v12 >= 101;
      temp_v12 = temp_v3;
      if (temp_v0) break;
      puVar5 = (unsigned int *)(**(romwright_code **)(*(int *)param_1->field_0x6c + 0x38))();
      puVar6 = (unsigned int *)param_1->field_0x90;
      if (puVar5 < puVar6) {
        puVar6 = (unsigned int *)(**(romwright_code **)(*(int *)param_1->field_0x6c + 0x38))();
      }
      temp_v7 = puVar6;
      if (puVar6 == (unsigned int *)0x0) break;
      FUN_002f17e4(&temp_v10,puVar6);
      temp_v8 = temp_v8 & 0xffffff00;
      temp_v4[0] = &temp_v8;
      temp_v4[0] = (unsigned int *)(**(romwright_code **)(*(int *)param_1->field_0x8c + 0xc))
                                      (param_1->field_0x8c,param_1->field_0x6c,temp_v10,
                                       temp_v11 - temp_v10);
      if (temp_v7 < temp_v4[0]) {
        temp_v5 = 0x80010004;
        piVar7 = (int *)FUN_002e7908(temp_v4,(unsigned int *)&temp_v5);
        FUN_0030ff06(param_1,piVar7);
        FUN_002eda5a(&temp_v10);
        return;
      }
      temp_v2 = FUN_002e9af4();
      FUN_002e9ec8(temp_v2,*(unsigned int *)&param_1->field_0x68);
      if (temp_v2 == 0) {
        temp_v5 = 0x80010004;
        piVar7 = (int *)FUN_002e7908(temp_v4,(unsigned int *)&temp_v5);
        FUN_0030ff06(param_1,piVar7);
        FUN_002eda5a(&temp_v10);
        return;
      }
      FUN_002edb54(&temp_v10,temp_v4[0],0);
      temp_v2 = FUN_002fc046(&temp_v10);
      if ((temp_v2 == 0) &&
         ((**(romwright_code **)(*(int *)param_1->field_0x6c + 0x34))
                    (temp_v6,param_1->field_0x6c,temp_v10,temp_v11 - temp_v10), temp_v6[0] < 0)) {
        piVar7 = temp_v6;
        FUN_0030ff06(param_1,piVar7);
        FUN_002eda5a(&temp_v10);
        return;
      }
      if ((char)temp_v8 != '\0') {
        (**(romwright_code **)(*(int *)param_1->field_0x6c + 0x1c))();
        FUN_002eda5a(&temp_v10);
        break;
      }
      if (temp_v4[0] == (unsigned int *)0x0) {
        FUN_002eda5a(&temp_v10);
        break;
      }
      FUN_002eda5a(&temp_v10);
    }
    if (param_1->field_0x88 != '\0') {
LAB_001217d0:
      FUN_00121808(temp_v9,param_1);
      if (temp_v9[0] == -0x7ffaffea) {
        FUN_002ea446(param_1,*(unsigned int *)(param_1 + 1));
        return;
      }
      piVar7 = temp_v9;
      FUN_0030ff06(param_1,piVar7);
      return;
    }
    (**(romwright_code **)(*(int *)param_1->field_0x6c + 0x40))(temp_v6);
    if (temp_v6[0] >= 0) {
      param_1->field_0x88 = 1;
      temp_v2 = (**(romwright_code **)(*(int *)param_1->field_0x6c + 0x2c))(param_1->field_0x6c,&temp_v8);
      if ((-temp_v2 & temp_v8) == 0) {
        temp_v1 = 0x8005000b;
        temp_v5 = temp_v1;
        piVar7 = (int *)FUN_002e7908(temp_v4,(unsigned int *)&temp_v5);
        FUN_0030ff06(param_1,piVar7);
        return;
      }
      (**(romwright_code **)(*(int *)param_1->field_0x8c + 0x10))(param_1->field_0x8c,param_1->field_0x6c);
      temp_v2 = FUN_002e9af4();
      FUN_002e9ec8(temp_v2,*(unsigned int *)&param_1->field_0x68);
      if (temp_v2 == 0) goto LAB_001217f2;
      goto LAB_001217d0;
    }
    if (temp_v6[0] == -0x7ffeffff) {
      FUN_002ea446(param_1,*(unsigned int *)(param_1 + 1));
      return;
    }
    temp_v1 = 0x80050002;
    if (temp_v6[0] != -0x7ffafffe) {
      piVar7 = temp_v6;
      FUN_0030ff06(param_1,piVar7);
      return;
    }
  }
  else {
LAB_001217f2:
    temp_v5 = 0x80010004;
    temp_v1 = temp_v5;
  }
  temp_v5 = temp_v1;
  piVar7 = (int *)FUN_002e7908(temp_v4,(unsigned int *)&temp_v5);
  FUN_0030ff06(param_1,piVar7);
  return;
}

} /* extern "C" */
