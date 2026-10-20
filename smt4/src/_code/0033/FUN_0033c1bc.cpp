/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c1bc` (_code @ 0x33c1bc, 0x2a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00288790(int, int, int, int);
int FUN_0029a17c(int, int, int, int, int);
int aeabi_idivmod(int, int);

typedef struct fn_0033c1bc_arg0 fn_0033c1bc_arg0;
struct fn_0033c1bc_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x2];
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x9];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    void *field_0x34; /* +0x34 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00288790. */
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_002a8740(void);
extern int FUN_002b63ac(void);
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0033c1bc(fn_0033c1bc_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  short temp_v9;
  unsigned int temp_v10;
  int *piVar10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  
  temp_v5 = 0x12;
  if (param_1->field_0x22 != 0) {
    temp_v5 = 0x50;
  }
  temp_v3 = FUN_002bf4f8(0x19,temp_v5);
  temp_v11 = 0;
  temp_v13 = 0;
  temp_v9 = 0;
  temp_v2 = 0;
  if ((int)param_1->field_0x34 < 0) {
    temp_v4 = FUN_002b63ac();
    temp_v0 = *(unsigned short *)(temp_v4 + 0x72);
  }
  else {
    temp_v4 = FUN_002a8740();
    temp_v0 = *(unsigned short *)(temp_v4 + 0x44);
  }
  temp_v10 = (unsigned int)temp_v0;
  temp_v6 = 1;
  temp_v1 = 0;
  temp_v4 = 5;
  do {
    temp_v12 = temp_v11;
    if ((temp_v10 & (1 << (temp_v6 & 0xff))) != 0) {
      temp_v12 = temp_v11 + 1;
      if (param_1->field_0x1c == temp_v11) {
        temp_v9 = temp_v1 + 1;
        temp_v12 = temp_v11 + 1;
      }
    }
    temp_v11 = temp_v12;
    if ((temp_v10 & (1 << ((temp_v6 + 1) & 0xff))) != 0) {
      temp_v11 = temp_v12 + 1;
      if (param_1->field_0x1c == temp_v12) {
        temp_v9 = temp_v1 + 2;
        temp_v11 = temp_v12 + 1;
      }
    }
    temp_v4 = temp_v4 - 1;
    temp_v6 = temp_v6 + 2;
    temp_v1 = temp_v1 + 2;
  } while (temp_v4 != 0);
  if (temp_v11 == 1) {
    FUN_00288790((int)temp_v9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x7e);
    return;
  }
  if (temp_v11 >= 2) {
    if (param_1->field_0x18 < 0x14) {
      FUN_00288790((int)temp_v9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x7e)
      ;
      return;
    }
    temp_v6 = 1;
    temp_v1 = 0;
    temp_v4 = 5;
    do {
      temp_v12 = temp_v13;
      if ((temp_v10 & (1 << (temp_v6 & 0xff))) != 0) {
        aeabi_idivmod(param_1->field_0x1c + 1,temp_v11);
        temp_v12 = temp_v13 + 1;
        if (temp_v7 == temp_v13) {
          temp_v2 = temp_v1 + 1;
          temp_v12 = temp_v13 + 1;
        }
      }
      temp_v13 = temp_v12;
      if ((temp_v10 & (1 << ((temp_v6 + 1) & 0xff))) != 0) {
        aeabi_idivmod(param_1->field_0x1c + 1,temp_v11);
        temp_v13 = temp_v12 + 1;
        if (temp_v8 == temp_v12) {
          temp_v2 = temp_v1 + 2;
          temp_v13 = temp_v12 + 1;
        }
      }
      temp_v12 = DAT_0044ea00;
      temp_v4 = temp_v4 - 1;
      temp_v6 = temp_v6 + 2;
      temp_v1 = temp_v1 + 2;
    } while (temp_v4 != 0);
    piVar10 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v11 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = 3;
    if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v11 != 3) {
      (**(romwright_code **)(temp_v12 + 0x1328))();
      *(unsigned char *)(temp_v12 + 0x1324) = 0;
    }
    FUN_0029a17c(*(int *)&param_1->field_0x2c + (int)*(short *)(temp_v3 + 8),
                 *(int *)&param_1->field_0x30 + (int)*(short *)(temp_v3 + 10),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1],1);
    temp_v11 = (param_1->field_0x18 - 0x14) * -3;
    FUN_00288790((int)temp_v9,(int)*(short *)(temp_v3 + 8) + temp_v11 + param_2,
                 *(short *)(temp_v3 + 10) + param_3,0x7e);
    FUN_00288790((int)temp_v2,(int)*(short *)(temp_v3 + 8) + param_2 + temp_v11 + 0xd,
                 *(short *)(temp_v3 + 10) + param_3,0x7e);
    temp_v11 = DAT_0044ea00;
    piVar10 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v13 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = 0;
    if (*(char *)(temp_v11 + 0x1324) != '\0' || temp_v13 != 0) {
      (**(romwright_code **)(temp_v11 + 0x1328))();
      *(unsigned char *)(temp_v11 + 0x1324) = 0;
    }
  }
  return;
}

} /* extern "C" */
