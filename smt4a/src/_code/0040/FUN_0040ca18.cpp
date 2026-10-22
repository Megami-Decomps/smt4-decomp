/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ca18` (_code @ 0x40ca18, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c8d8c(int, void *, int);
int FUN_004c8e30(int, int, int);
int FUN_004c9160(int, int, int, int);
int FUN_004e699c(int, int, int);
int FUN_004ea5e8(void);

typedef struct fn_0040ca18_arg0 fn_0040ca18_arg0;
typedef struct fn_0040ca18_arg1 fn_0040ca18_arg1;
typedef struct fn_0040ca18_arg1_p28 fn_0040ca18_arg1_p28;
struct fn_0040ca18_arg0 {
    unsigned char pad_0x0[0x2];
    unsigned char field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x15];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0xb];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x1fd3];
    undefined4 field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x2000[0x25a0];
    undefined4 field_0x45a0; /* +0x45a0 */
    undefined4 field_0x45a4; /* +0x45a4 */
};
struct fn_0040ca18_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x14];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    short field_0x24; /* +0x24 */
    unsigned char pad_0x26[0x2];
    fn_0040ca18_arg1_p28 *field_0x28; /* +0x28 */
};
struct fn_0040ca18_arg1_p28 {
    unsigned char pad_0x0[0x2];
    ushort field_0x2; /* +0x2 */
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x6];
    undefined4 field_0xc; /* +0xc */
};

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_005712f8; /* 0x5712f8 */
extern unsigned int DAT_005712fc; /* 0x5712fc */
extern unsigned int DAT_00571328; /* 0x571328 */
extern unsigned int DAT_0057132c; /* 0x57132c */
extern unsigned int DAT_00571358; /* 0x571358 */
extern unsigned int DAT_0057135c; /* 0x57135c */
extern unsigned int DAT_00571368; /* 0x571368 */
extern unsigned int DAT_0057136c; /* 0x57136c */

extern int btlGetMainState(void);
extern int infoWinIsActive(void);
extern int FUN_002c7bf4(fn_0040ca18_arg1_p28 *);
extern int FUN_004c600c(int);
extern int FUN_004c86ec(fn_0040ca18_arg1_p28 *);
/* Supplied declaration required: FUN_004c8d8c. */
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004e699c. */
extern int FUN_004e8300(int);
/* Supplied declaration required: FUN_004ea5e8. */
extern int btlUnitGet(int);


void FUN_0040ca18(fn_0040ca18_arg0 *param_1,fn_0040ca18_arg1 *param_2)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  short temp_v6;
  short temp_v7;
  unsigned short temp_v8;
  unsigned int temp_v9;
  void *temp_v10;
  
  temp_v2 = btlGetMainState();
  if (((DAT_00571368 | DAT_00571358) & *(unsigned int *)(temp_v2 + 0x45a0)) != 0 ||
      ((DAT_0057136c | DAT_0057135c) & *(unsigned int *)(temp_v2 + 0x45a4)) != 0) {
    param_2->field_0x2 = 0;
    return;
  }
  if (param_2->field_0x24 != 0) {
    if ((param_2->field_0x24 == 1) && (temp_v2 = infoWinIsActive(), temp_v2 == 0)) {
      param_2->field_0x2 = 0;
      return;
    }
  }
  else {
    temp_v7 = 0;
    temp_v0 = 0;
    temp_v3 = FUN_004e8300(g_btlScriptUnit);
    temp_v10 = (void *)0x0;
    temp_v1 = 1;
    temp_v8 = 0;
    temp_v4 = btlUnitGet(g_btlScriptUnit);
    if (temp_v3 != 5) {
      temp_v5 = FUN_002c7bf4(param_2->field_0x28);
      if (temp_v5 == 0) {
        return;
      }
      temp_v9 = *(unsigned int *)(temp_v5 + 0xc);
      if (((temp_v9 & 0x20) != 0) && ((*(unsigned short *)(*(int *)(temp_v4 + 0x20) + 0x274) & 0x10) == 0)) {
        return;
      }
      if (temp_v3 == 1) {
        return;
      }
      if (temp_v3 != 2) {
        if (temp_v3 != 3) {
          temp_v6 = *(short *)(temp_v5 + 2);
          if (temp_v6 != 0) {
            temp_v8 = *(unsigned short *)(temp_v5 + 4);
            temp_v7 = temp_v6;
            if ((temp_v6 == 0) && (*(short *)(temp_v5 + 2) != 0)) {
              temp_v8 = *(unsigned short *)(temp_v5 + 4);
              temp_v7 = *(short *)(temp_v5 + 2);
            }
          }
        }
        else {
          temp_v6 = *(short *)(temp_v5 + 6);
          if (temp_v6 != 0) {
            temp_v8 = *(unsigned short *)(temp_v5 + 8);
            temp_v7 = temp_v6;
            if ((temp_v6 == 0) && (*(short *)(temp_v5 + 2) != 0)) {
              temp_v8 = *(unsigned short *)(temp_v5 + 4);
              temp_v7 = *(short *)(temp_v5 + 2);
            }
          }
          else if (*(short *)(temp_v5 + 2) != 0) {
            temp_v8 = *(unsigned short *)(temp_v5 + 4);
            temp_v7 = *(short *)(temp_v5 + 2);
          }
        }
      }
      else {
        temp_v6 = *(short *)(temp_v5 + 10);
        if (temp_v6 != 0) {
          temp_v7 = temp_v6;
          if ((temp_v6 == 0) && (*(short *)(temp_v5 + 2) != 0)) {
            temp_v8 = *(unsigned short *)(temp_v5 + 4);
            temp_v7 = *(short *)(temp_v5 + 2);
          }
        }
        else if (*(short *)(temp_v5 + 2) != 0) {
          temp_v8 = *(unsigned short *)(temp_v5 + 4);
          temp_v7 = *(short *)(temp_v5 + 2);
        }
      }
      if ((temp_v9 & 1) != 0) {
        temp_v10 = param_2->field_0x18;
      }
      if ((temp_v9 & 0x10) != 0) {
        temp_v10 = param_2->field_0x18;
      }
      if ((temp_v9 & 8) != 0) {
        temp_v3 = 0;
        do {
          puVar7 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v3 * 0x408);
          if (*(short *)((int)param_2->field_0x18 + 0x6e) != *(short *)((int)puVar7 + 0x6e)) {
            if ((((*puVar7 & DAT_005712f8) == 0 && (puVar7[1] & DAT_005712fc) == 0) ||
                ((puVar7[1] & DAT_0057132c) != 0 || (*puVar7 & DAT_00571328) != 0)) ||
               ((puVar7[0x9d] & 0x10) == 0)) goto LAB_0040cc5c;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 4);
        temp_v7 = 0x21;
        temp_v1 = 0;
      }
LAB_0040cc5c:
      if ((temp_v9 & 0x40) != 0) {
        temp_v3 = FUN_004c86ec(param_2->field_0x28);
        temp_v4 = FUN_004c600c((int)*(short *)((int)param_2->field_0x18 + 0x6e));
        if ((temp_v3 != 0) && (temp_v4 >= 0)) {
          FUN_004c9160(0x3e,*(int *)(temp_v2 + 0x1ffc) + temp_v4 * 0x408,temp_v8,1);
        }
        else if (temp_v1) {
          FUN_004c8d8c(temp_v7,temp_v10,temp_v8);
        }
        else {
          FUN_004c8e30(temp_v7,temp_v8,1);
        }
      }
      else if (temp_v1) {
        FUN_004c8d8c(temp_v7,temp_v10,temp_v8);
      }
      else {
        FUN_004c8e30(temp_v7,temp_v8,1);
      }
    }
    else {
      temp_v7 = 0x25;
      temp_v2 = g_btlScriptUnit;
      FUN_004ea5e8();
      temp_v0 = temp_v2 < 2;
      FUN_004e699c(g_btlScriptUnit,(int)*(short *)(*(int *)(temp_v4 + 0x20) + 0x6e),5);
      FUN_004c8e30(temp_v7,temp_v8,1);
    }
    if (temp_v0) {
      return;
    }
    param_2->field_0x24 = param_2->field_0x24 + 1;
  }
  param_2->field_0x2 = 1;
  return;
}

} /* extern "C" */
