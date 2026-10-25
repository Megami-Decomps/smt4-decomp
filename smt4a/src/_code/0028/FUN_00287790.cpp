/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287790` (_code @ 0x287790, 0x904 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "mapnavi/naviMain.h"

extern "C" {

int FUN_0035e03c(...);

int recordGetScaledMaximum(...);
int FUN_002b4dcc(void);
int FUN_002b4e7c(void);
int playerSyncPair2A(void);
int playerClearFlagMask(...);
int FUN_004bcb54(int);
int bitsAt60Test(...);
int bitsAt60Set(int, int);
int bitsAt60Clear(...);
int SBORROW4(unsigned int, int);

typedef struct fn_00287790_arg0 fn_00287790_arg0;
typedef struct fn_00287790_arg1 fn_00287790_arg1;
struct fn_00287790_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x18];
    short field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0xc];
    ushort field_0x2a; /* +0x2a */
};
struct fn_00287790_arg1 {
    unsigned char pad_0x0[0x32];
    ushort field_0x32; /* +0x32 */
    ushort field_0x34; /* +0x34 */
    unsigned char field_0x36; /* +0x36 */
    unsigned char pad_0x37[0x1];
    byte field_0x38; /* +0x38 */
    unsigned char field_0x39; /* +0x39 */
    byte field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0x7];
    unsigned char field_0x42; /* +0x42 */
    unsigned char pad_0x43[0x25];
    uint field_0x68; /* +0x68 */
};

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int btlGetMainState(void);
extern int btlMainIsRunning(void);
/* Supplied declaration required: recordGetScaledMaximum. */
extern int gameGetPlayerData(void);
extern int gameGetSlotRecord(void);
extern int btlMainGetUnk14(void);
extern int FUN_00291e14(void);
/* Supplied declaration required: FUN_002b4dcc. */
/* Supplied declaration required: FUN_002b4e7c. */
/* Supplied declaration required: FUN_0035e03c. */
extern fn_00287790_arg0 *FUN_003b7430(fn_00287790_arg0 *, fn_00287790_arg1 *, int);
extern int FUN_003d2b2c(fn_00287790_arg1 *, unsigned short);
/* Supplied declaration required: playerSyncPair2A. */
/* Supplied declaration required: playerHasFlagBit. */
/* Supplied declaration required: playerClearFlagMask. */
extern int FUN_003e0164(void);
/* Supplied declaration required: FUN_004bcb54. */
/* Supplied declaration required: bitsAt60Test. */
/* Supplied declaration required: bitsAt60Set. */
/* Supplied declaration required: bitsAt60Clear. */


int FUN_00287790(fn_00287790_arg0 *param_1,fn_00287790_arg1 *param_2,int param_3,unsigned int *param_4,
                unsigned int *param_5)

{
/* irregular: 8 goto(s); 12 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  fn_00287790_arg0 *pfVar10;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  fn_00287790_arg0 *temp_v11;
  fn_00287790_arg1 *pfStack_30;
  int iStack_2c;
  unsigned int *puStack_28;
  
  if (param_2->field_0x32 != 0) {
    return 1;
  }
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v11 = param_1;
  pfStack_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if ((int)param_1 < 0) {
    temp_v3 = btlMainIsRunning();
    if ((temp_v3 != 0) && (temp_v3 = FUN_00291e14(), temp_v3 != 0)) {
      temp_v7 = btlMainGetUnk14();
    }
    else {
      temp_v6 = gameGetPlayerData();
    }
  }
  else {
    temp_v7 = gameGetSlotRecord();
    if (temp_v7 == 0) {
      return 1;
    }
    temp_v3 = bitsAt60Test(temp_v7,10);
    if (temp_v3 != 0) {
      return 1;
    }
  }
  pfVar10 = (fn_00287790_arg0 *)0x1;
  if ((param_2 == (fn_00287790_arg1 *)0x0) ||
     (temp_v0 = param_2->field_0x3a & 0x7f, !(temp_v0 == 0x18 || temp_v0 == 1))) {
    if ((param_2->field_0x68 & 4) != 0) {
      temp_v10 = 0x50001;
      uStack_48 = 0x70006;
      uStack_44 = 0x90008;
      uStack_40 = 0xc000b;
      uStack_3c = 0xd;
      if (temp_v6 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = btlGetMainState();
        if (temp_v3 == 0) {
          temp_v3 = (int)*(short *)(temp_v6 + 0x1c);
        }
        else {
          temp_v3 = temp_v6;
          FUN_002b4e7c();
        }
      }
      if (temp_v7 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = btlGetMainState();
        if (temp_v4 != 0) {
          temp_v4 = FUN_002b4dcc();
        }
        else {
          temp_v4 = recordGetScaledMaximum(temp_v7);
        }
      }
      temp_v9 = 0;
      if (temp_v6 != 0) {
        temp_v7 = 0;
        do {
          temp_v4 = playerHasFlagBit(*(unsigned short *)((int)&temp_v10 + temp_v7 * 2));
          if (temp_v4 != 0) {
            pfVar10 = (fn_00287790_arg0 *)0x0;
            temp_v9 = 1;
            break;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 10);
        if (*(short *)(temp_v6 + 0x2a) < temp_v3) {
          pfVar10 = (fn_00287790_arg0 *)0x0;
          temp_v9 = 1;
        }
        temp_v7 = FUN_003e0164();
        if (*(short *)(temp_v6 + 0x2c) < temp_v7) {
          pfVar10 = (fn_00287790_arg0 *)0x0;
          temp_v9 = 1;
        }
        if (param_3 != 0) {
          if (param_4 != (unsigned int *)0x0) {
            *param_4 = temp_v3 - *(short *)(temp_v6 + 0x2a);
          }
          if (param_5 != (unsigned int *)0x0) {
            temp_v7 = FUN_003e0164();
            *param_5 = temp_v7 - *(short *)(temp_v6 + 0x2c);
          }
        }
        else if (temp_v9) {
          playerSyncPair2A();
        }
      }
      else {
        temp_v6 = 0;
        do {
          temp_v3 = bitsAt60Test(temp_v7,*(unsigned short *)((int)&temp_v10 + temp_v6 * 2));
          if (temp_v3 != 0) {
            pfVar10 = (fn_00287790_arg0 *)0x0;
            temp_v9 = 1;
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 10);
        if (*(short *)(temp_v7 + 0x2a) < temp_v4) {
          pfVar10 = (fn_00287790_arg0 *)0x0;
          temp_v9 = 1;
        }
        if (*(short *)(temp_v7 + 0x2c) < *(short *)(temp_v7 + 0x10)) {
          pfVar10 = (fn_00287790_arg0 *)0x0;
          temp_v9 = 1;
        }
        if (param_3 != 0) {
          if (param_4 != (unsigned int *)0x0) {
            *param_4 = temp_v4 - *(short *)(temp_v7 + 0x2a);
          }
          if (param_5 != (unsigned int *)0x0) {
            *param_5 = (int)*(short *)(temp_v7 + 0x10) - (int)*(short *)(temp_v7 + 0x2c);
          }
        }
        else if (temp_v9) {
          temp_v6 = bitsAt60Test(temp_v7,2);
          if (temp_v6 != 0) {
            FUN_004bcb54(temp_v7);
            bitsAt60Set(temp_v7,2);
          }
          else {
            FUN_004bcb54(temp_v7);
          }
        }
      }
    }
    else {
      if (temp_v6 != 0) {
        temp_v3 = playerHasFlagBit(1);
      }
      else {
        temp_v3 = bitsAt60Test(temp_v7,1);
      }
      if (temp_v3 != 0) {
        return 1;
      }
      if ((param_2->field_0x42 & 2) != 0) {
        pfVar10 = (fn_00287790_arg0 *)FUN_003b7430(temp_v11,param_2,param_3);
      }
      if (temp_v6 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = btlGetMainState();
        if (temp_v3 == 0) {
          temp_v3 = (int)*(short *)(temp_v6 + 0x1c);
        }
        else {
          temp_v3 = temp_v6;
          FUN_002b4e7c();
        }
      }
      if (temp_v7 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = btlGetMainState();
        if (temp_v4 != 0) {
          temp_v4 = FUN_002b4dcc();
        }
        else {
          temp_v4 = recordGetScaledMaximum(temp_v7);
        }
      }
      if (temp_v6 != 0) {
        temp_v7 = FUN_003d2b2c(param_2,*(unsigned short *)(temp_v6 + 0x5e));
        if (temp_v7 != 0) {
          if (param_3 == 0) {
            playerClearFlagMask();
          }
          pfVar10 = (fn_00287790_arg0 *)0x0;
        }
        temp_v8 = (unsigned int)param_2->field_0x34;
        if (temp_v8 == 0) {
          if (param_2->field_0x38 != 0) {
            temp_v8 = (int)((unsigned int)param_2->field_0x38 * (int)(short)temp_v3) / 100;
            if (temp_v8 != 0) goto LAB_00287dec;
            temp_v8 = 1;
            goto LAB_00287df4;
          }
        }
        else {
LAB_00287dec:
          if (temp_v8 != 0) {
LAB_00287df4:
            temp_v7 = playerHasFlagBit(3);
            temp_v9 = temp_v7 != 0;
            temp_v4 = (int)*(short *)(temp_v6 + 0x2a);
            temp_v7 = 0;
            if (temp_v9) {
              temp_v7 = temp_v8 - 1;
            }
            if ((temp_v9 && temp_v8 != 1) && temp_v7 < 0 == (temp_v9 && SBORROW4(temp_v8,1))) {
              temp_v8 = 1;
            }
            if (temp_v4 < temp_v3) {
              if (param_3 == 0) {
                temp_v4 = temp_v4 + temp_v8;
                *(short *)(temp_v6 + 0x2a) = (short)temp_v4;
              }
              if (param_3 != 0 && param_4 != (unsigned int *)0x0) {
                if (temp_v3 - temp_v4 < (int)temp_v8) {
                  temp_v8 = temp_v3 - temp_v4;
                }
                *param_4 = temp_v8;
              }
              pfVar10 = (fn_00287790_arg0 *)0x0;
            }
          }
        }
        temp_v8 = (unsigned int)*(unsigned short *)&param_2->field_0x36;
        if (temp_v8 == 0) {
          if ((unsigned char)param_2->field_0x39 != 0) {
            temp_v8 = (int)((unsigned int)(unsigned char)param_2->field_0x39 * (int)*(short *)(temp_v6 + 0x1e)) / 100;
            if (temp_v8 != 0) goto LAB_00287e74;
            temp_v8 = 1;
            goto LAB_00287e7c;
          }
        }
        else {
LAB_00287e74:
          if (temp_v8 != 0) {
LAB_00287e7c:
            temp_v7 = playerHasFlagBit(3);
            temp_v9 = temp_v7 != 0;
            temp_v4 = (int)*(short *)(temp_v6 + 0x2c);
            temp_v7 = 0;
            if (temp_v9) {
              temp_v7 = temp_v8 - 1;
            }
            if ((temp_v9 && temp_v8 != 1) && temp_v7 < 0 == (temp_v9 && SBORROW4(temp_v8,1))) {
              temp_v8 = 1;
            }
            if (temp_v4 < *(short *)(temp_v6 + 0x1e)) {
              if (param_3 == 0) {
                temp_v4 = temp_v4 + temp_v8;
                *(short *)(temp_v6 + 0x2c) = (short)temp_v4;
              }
              if (param_3 != 0 && param_5 != (unsigned int *)0x0) {
                temp_v5 = *(short *)(temp_v6 + 0x1e) - temp_v4;
                if ((int)temp_v5 < (int)temp_v8) {
                  temp_v8 = temp_v5;
                }
                *param_5 = temp_v8;
              }
              pfVar10 = (fn_00287790_arg0 *)0x0;
            }
          }
        }
        if (*(short *)(temp_v6 + 0x2a) <= temp_v3) {
          temp_v3 = (int)*(short *)(temp_v6 + 0x2a);
        }
        *(short *)(temp_v6 + 0x2a) = (short)temp_v3;
        temp_v2 = *(short *)(temp_v6 + 0x1e);
        if (*(short *)(temp_v6 + 0x2c) <= *(short *)(temp_v6 + 0x1e)) {
          temp_v2 = *(short *)(temp_v6 + 0x2c);
        }
        *(short *)(temp_v6 + 0x2c) = temp_v2;
      }
      else {
        temp_v6 = FUN_003d2b2c(param_2,*(unsigned short *)(temp_v7 + 0x60));
        if (temp_v6 != 0) {
          if (param_3 == 0) {
            bitsAt60Clear(temp_v7);
          }
          pfVar10 = (fn_00287790_arg0 *)0x0;
        }
        temp_v8 = (unsigned int)param_2->field_0x34;
        if (temp_v8 == 0) {
          if (param_2->field_0x38 != 0) {
            temp_v8 = (int)((unsigned int)param_2->field_0x38 * (int)(short)temp_v4) / 100;
            if (temp_v8 != 0) goto LAB_00287f54;
            temp_v8 = 1;
            goto LAB_00287f5c;
          }
        }
        else {
LAB_00287f54:
          if (temp_v8 != 0) {
LAB_00287f5c:
            temp_v6 = bitsAt60Test(temp_v7,3);
            temp_v9 = temp_v6 != 0;
            temp_v3 = (int)*(short *)(temp_v7 + 0x2a);
            temp_v6 = 0;
            if (temp_v9) {
              temp_v6 = temp_v8 - 1;
            }
            if ((temp_v9 && temp_v8 != 1) && temp_v6 < 0 == (temp_v9 && SBORROW4(temp_v8,1))) {
              temp_v8 = 1;
            }
            if (temp_v3 < temp_v4) {
              if (param_3 == 0) {
                temp_v3 = temp_v3 + temp_v8;
                *(short *)(temp_v7 + 0x2a) = (short)temp_v3;
              }
              if (param_3 != 0 && param_4 != (unsigned int *)0x0) {
                if (temp_v4 - temp_v3 < (int)temp_v8) {
                  temp_v8 = temp_v4 - temp_v3;
                }
                *param_4 = temp_v8;
              }
              pfVar10 = (fn_00287790_arg0 *)0x0;
            }
          }
        }
        temp_v8 = (unsigned int)*(unsigned short *)&param_2->field_0x36;
        if (temp_v8 == 0) {
          if ((unsigned char)param_2->field_0x39 != 0) {
            temp_v8 = (int)((unsigned int)(unsigned char)param_2->field_0x39 * (int)*(short *)(temp_v7 + 0x10)) / 100;
            if (temp_v8 != 0) goto LAB_00287fe4;
            temp_v8 = 1;
            goto LAB_00287fec;
          }
        }
        else {
LAB_00287fe4:
          if (temp_v8 != 0) {
LAB_00287fec:
            temp_v6 = bitsAt60Test(temp_v7,3);
            temp_v9 = temp_v6 != 0;
            temp_v3 = (int)*(short *)(temp_v7 + 0x2c);
            temp_v6 = 0;
            if (temp_v9) {
              temp_v6 = temp_v8 - 1;
            }
            if ((temp_v9 && temp_v8 != 1) && temp_v6 < 0 == (temp_v9 && SBORROW4(temp_v8,1))) {
              temp_v8 = 1;
            }
            if (temp_v3 < *(short *)(temp_v7 + 0x10)) {
              if (param_3 == 0) {
                temp_v3 = temp_v3 + temp_v8;
                *(short *)(temp_v7 + 0x2c) = (short)temp_v3;
              }
              if (param_3 != 0 && param_5 != (unsigned int *)0x0) {
                temp_v5 = *(short *)(temp_v7 + 0x10) - temp_v3;
                if ((int)temp_v5 < (int)temp_v8) {
                  temp_v8 = temp_v5;
                }
                *param_5 = temp_v8;
              }
              pfVar10 = (fn_00287790_arg0 *)0x0;
            }
          }
        }
        temp_v6 = (int)*(short *)(temp_v7 + 0x2a);
        if (temp_v4 < *(short *)(temp_v7 + 0x2a)) {
          temp_v6 = temp_v4;
        }
        *(short *)(temp_v7 + 0x2a) = (short)temp_v6;
        temp_v2 = *(short *)(temp_v7 + 0x2c);
        if (*(short *)(temp_v7 + 0x10) < *(short *)(temp_v7 + 0x2c)) {
          temp_v2 = *(short *)(temp_v7 + 0x10);
        }
        *(short *)(temp_v7 + 0x2c) = temp_v2;
      }
    }
  }
  else {
    if (temp_v6 == 0) {
      temp_v2 = 0;
    }
    else {
      temp_v3 = btlGetMainState();
      if (temp_v3 == 0) {
        temp_v2 = *(short *)(temp_v6 + 0x1c);
      }
      else {
        temp_v3 = temp_v6;
        FUN_002b4e7c();
        temp_v2 = (short)temp_v3;
      }
    }
    if (temp_v7 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v3 = btlGetMainState();
      if (temp_v3 != 0) {
        temp_v1 = FUN_002b4dcc();
      }
      else {
        temp_v1 = recordGetScaledMaximum(temp_v7);
      }
    }
    if (temp_v6 != 0) {
      temp_v7 = playerHasFlagBit(1);
      if (temp_v7 == 0) {
        if ((param_2->field_0x42 & 2) != 0) {
          FUN_0035e03c(temp_v11,param_2,pfVar10,param_3);
          pfVar10 = temp_v11;
        }
        return (int)pfVar10;
      }
      if (param_3 != 0) {
        if (param_4 != (unsigned int *)0x0) {
          temp_v7 = playerHasFlagBit(3);
          if (temp_v7 != 0) {
            *param_4 = 1;
          }
          else {
            temp_v8 = (unsigned int)param_2->field_0x34;
            if (temp_v8 == 0) {
              temp_v8 = 0;
              if (param_2->field_0x38 != 0) {
                temp_v7 = (unsigned int)param_2->field_0x38 * (int)temp_v2;
                temp_v8 = temp_v7 / 100;
                if (temp_v8 == 0) {
                  temp_v8 = 1;
                }
              }
            }
            *param_4 = temp_v8;
          }
        }
      }
      else {
        playerClearFlagMask(2);
        temp_v7 = playerHasFlagBit(3);
        if (temp_v7 != 0) {
          temp_v2 = *(short *)(temp_v6 + 0x2a) + 1;
        }
        else {
          temp_v8 = (unsigned int)param_2->field_0x34;
          if (temp_v8 == 0) {
            temp_v8 = 0;
            if ((param_2->field_0x38 != 0) &&
               (temp_v8 = (int)((unsigned int)param_2->field_0x38 * (int)temp_v2) / 100, temp_v8 == 0)) {
              temp_v8 = 1;
            }
          }
          temp_v2 = (short)temp_v8 + *(short *)(temp_v6 + 0x2a);
        }
        *(short *)(temp_v6 + 0x2a) = temp_v2;
        if (temp_v2 < 1) {
          *(unsigned short *)(temp_v6 + 0x2a) = 1;
        }
      }
      pfVar10 = (fn_00287790_arg0 *)0x0;
    }
    else {
      temp_v6 = bitsAt60Test(temp_v7,1);
      if (temp_v6 != 0) {
        if (param_3 != 0) {
          if (param_4 != (unsigned int *)0x0) {
            temp_v7 = bitsAt60Test(temp_v7,3);
            if (temp_v7 != 0) {
              *param_4 = 1;
            }
            else {
              temp_v8 = (unsigned int)param_2->field_0x34;
              if (temp_v8 == 0) {
                temp_v8 = 0;
                if (param_2->field_0x38 != 0) {
                  temp_v7 = (unsigned int)param_2->field_0x38 * (int)temp_v1;
                  temp_v8 = temp_v7 / 100;
                  if (temp_v8 == 0) {
                    temp_v8 = 1;
                  }
                }
              }
              *param_4 = temp_v8;
            }
          }
        }
        else {
          bitsAt60Clear(temp_v7,2);
          temp_v6 = bitsAt60Test(temp_v7,3);
          if (temp_v6 != 0) {
            temp_v2 = *(short *)(temp_v7 + 0x2a) + 1;
          }
          else {
            temp_v8 = (unsigned int)param_2->field_0x34;
            if (temp_v8 == 0) {
              temp_v8 = 0;
              if ((param_2->field_0x38 != 0) &&
                 (temp_v8 = (int)((unsigned int)param_2->field_0x38 * (int)temp_v1) / 100, temp_v8 == 0)) {
                temp_v8 = 1;
              }
            }
            temp_v2 = (short)temp_v8 + *(short *)(temp_v7 + 0x2a);
          }
          *(short *)(temp_v7 + 0x2a) = temp_v2;
          if (temp_v2 < 1) {
            *(unsigned short *)(temp_v7 + 0x2a) = 1;
          }
        }
        pfVar10 = (fn_00287790_arg0 *)0x0;
      }
    }
  }
  if ((param_2->field_0x42 & 2) != 0) {
    FUN_0035e03c(temp_v11,param_2,pfVar10,param_3);
    pfVar10 = temp_v11;
  }
  return (int)pfVar10;
}

} /* extern "C" */
