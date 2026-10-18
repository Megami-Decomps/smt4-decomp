/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ec68` (_code @ 0x14ec68, 0x2d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0014ec68_arg0 fn_0014ec68_arg0;
struct fn_0014ec68_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8c];
    int field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x8];
    int field_0xa0; /* +0xa0 */
    int field_0xa4; /* +0xa4 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002a51dc. */
/* Supplied declaration required: FUN_002bd610. */
extern int FUN_002c1a48(int, char *, unsigned int);
/* Supplied declaration required: FUN_002c2430. */
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int);


void FUN_0014ec68(fn_0014ec68_arg0 *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int unaff_r4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  int temp_v4;
  unsigned short *unaff_r7;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar10;
  int *piVar11;
  unsigned char temp_v7;
  unsigned int temp_v8 [2];
  int temp_v9;
  fn_0014ec68_arg0 *pfStack_30;
  int temp_v10;
  int temp_v11;
  
  if (param_1->field_0xa0 != 0) {
    unaff_r4 = 0;
  }
  if (0 < param_1->field_0xa0) {
    do {
      temp_v3 = param_1->field_0xa4 + unaff_r4 * 0xc;
      FUN_002c2430(*(unsigned int *)(temp_v3 + 8));
      *(unsigned int *)(temp_v3 + 8) = 0;
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < param_1->field_0xa0);
  }
  if (param_1->field_0xa4 != 0) {
    FUN_002c4360();
    param_1->field_0xa4 = 0;
  }
  param_1->field_0xa0 = 0;
  temp_v10 = *(int *)((int)param_1->field_0x4 + 0xc);
  temp_v4 = 0;
  piVar11 = &param_1->field_0x94;
  param_1->field_0xa0 = 0;
  temp_v3 = param_1->field_0x94;
  temp_v6 = 0;
  pfStack_30 = param_1;
  temp_v11 = param_2;
  if (0 < temp_v3) {
    do {
      temp_v3 = temp_v10;
      temp_v0 = FUN_002c1a48(temp_v10,"ATBC",4);
      if (temp_v0 == 0) {
        temp_v5 = *(int *)(temp_v3 + 8);
        temp_v7 = temp_v5 == 0;
        temp_v0 = temp_v5;
        if (0 < temp_v5) {
          temp_v0 = temp_v5 - temp_v4;
          temp_v7 = temp_v5 == temp_v4;
        }
        if (!temp_v7 && temp_v0 < 0 == (0 < temp_v5 && SBORROW4(temp_v5,temp_v4))) {
          temp_v0 = 0;
          temp_v3 = temp_v3 + *(int *)(temp_v3 + 0x10);
          do {
            temp_v1 = FUN_002c1a48(temp_v3,"EPLSIGN",7);
            if (temp_v1 != 0) break;
            FUN_002bd610(temp_v3,temp_v8,0x10);
            unaff_r7 = (unsigned short *)(temp_v3 + 0x10);
            if (temp_v4 == temp_v0) break;
            temp_v0 = temp_v0 + 1;
            temp_v3 = temp_v3 + temp_v9;
          } while (temp_v5 != 0);
        }
      }
      if (((*(unsigned int *)(unaff_r7 + 6) & 1) == 0) && (*(int *)(unaff_r7 + 8) == temp_v11)) {
        temp_v6 = ((unsigned int)unaff_r7[1] - (unsigned int)*unaff_r7) + temp_v6 + 1;
      }
      temp_v3 = *piVar11;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v3);
  }
  if (temp_v6 == 0) {
    temp_v3 = 0;
  }
  param_1->field_0xa0 = temp_v6;
  if (temp_v6 == 0) {
    param_1->field_0xa4 = temp_v3;
  }
  else {
    temp_v8[0] = 1;
    temp_v3 = FUN_002c4b84(0x100,0x100,0,param_1->field_0xa0 * 0xc);
    param_1->field_0xa4 = temp_v3;
    temp_v3 = 0;
    temp_v4 = 0;
    if (temp_v4 < *piVar11) {
      do {
        temp_v6 = temp_v10;
        temp_v0 = FUN_002c1a48(temp_v10,"ATBC",4);
        if (temp_v0 == 0) {
          temp_v5 = *(int *)(temp_v6 + 8);
          temp_v7 = temp_v5 == 0;
          temp_v0 = temp_v5;
          if (0 < temp_v5) {
            temp_v0 = temp_v5 - temp_v4;
            temp_v7 = temp_v5 == temp_v4;
          }
          if (!temp_v7 && temp_v0 < 0 == (0 < temp_v5 && SBORROW4(temp_v5,temp_v4))) {
            temp_v0 = 0;
            temp_v6 = temp_v6 + *(int *)(temp_v6 + 0x10);
            do {
              temp_v1 = FUN_002c1a48(temp_v6,"EPLSIGN",7);
              if (temp_v1 != 0) break;
              FUN_002bd610(temp_v6,temp_v8,0x10);
              unaff_r7 = (unsigned short *)(temp_v6 + 0x10);
              if (temp_v4 == temp_v0) break;
              temp_v0 = temp_v0 + 1;
              temp_v6 = temp_v6 + temp_v9;
            } while (temp_v5 != 0);
          }
        }
        puVar10 = (unsigned short *)0x0;
        if (unaff_r7 != (unsigned short *)0x0) {
          puVar10 = unaff_r7 + 10;
        }
        if ((((*(unsigned int *)(unaff_r7 + 6) & 1) == 0) && (*(int *)(unaff_r7 + 8) == temp_v11)) &&
           (temp_v2 = (unsigned int)*unaff_r7, temp_v2 <= unaff_r7[1])) {
          do {
            puVar6 = (unsigned int *)(param_1->field_0xa4 + temp_v3 * 0xc);
            puVar3 = puVar10;
            FUN_002a51dc();
            puVar6[1] = temp_v2;
            puVar6[2] = (unsigned int)puVar3;
            temp_v2 = temp_v2 + 1;
            temp_v3 = temp_v3 + 1;
            *puVar6 = *(unsigned int *)(unaff_r7 + 6);
          } while ((int)temp_v2 <= (int)(unsigned int)unaff_r7[1]);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *piVar11);
    }
  }
  return;
}
