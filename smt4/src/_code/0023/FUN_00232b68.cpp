/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232b68` (_code @ 0x232b68, 0x654 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00262410(...);
int FUN_0026242c(...);
int FUN_00262f68(...);
int FUN_00269bf0(...);
int FUN_002e33f4(...);
int SBORROW4(...);

typedef struct fn_00232b68_arg0 fn_00232b68_arg0;
typedef struct fn_00232b68_arg1 fn_00232b68_arg1;
struct fn_00232b68_arg0 {
    unsigned char pad_0x0[0x2];
    unsigned char field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xb];
    short field_0xe; /* +0xe */
    unsigned char pad_0x10[0xc];
    short field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0xc];
    ushort field_0x2a; /* +0x2a */
};
struct fn_00232b68_arg1 {
    unsigned char pad_0x0[0x2];
    unsigned char field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x5f];
    ushort field_0x62; /* +0x62 */
    ushort field_0x64; /* +0x64 */
    unsigned char field_0x66; /* +0x66 */
    unsigned char pad_0x67[0x1];
    byte field_0x68; /* +0x68 */
    unsigned char field_0x69; /* +0x69 */
    byte field_0x6a; /* +0x6a */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00262410. */
/* Supplied declaration required: FUN_0026242c. */
/* Supplied declaration required: FUN_00262f68. */
/* Supplied declaration required: FUN_00269bf0. */
extern int btlGetMainState(void);
extern int FUN_00295d08(unsigned int);
extern int flagWordTestBit(int, unsigned int);
extern int gameGetUnitRecord(void);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002e33f4. */
extern fn_00232b68_arg0 *FUN_0031c344(fn_00232b68_arg0 *, fn_00232b68_arg1 *);
extern int FUN_0032b1b4(fn_00232b68_arg1 *, unsigned short);


int FUN_00232b68(fn_00232b68_arg0 *param_1,fn_00232b68_arg1 *param_2,unsigned int *param_3,unsigned int *param_4,
                unsigned int *param_5)

{
/* irregular: 8 goto(s); 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  fn_00232b68_arg0 *pfVar11;
  int temp_v9;
  unsigned char temp_v10;
  
  if (param_2->field_0x62 != 0) {
    return 1;
  }
  temp_v5 = 0;
  temp_v6 = 0;
  puVar6 = param_3;
  if ((int)param_1 < 0) {
    temp_v5 = gameGetPlayerData();
  }
  else {
    temp_v6 = gameGetUnitRecord();
    if (temp_v6 == 0) {
      return 1;
    }
    temp_v9 = flagWordTestBit(temp_v6,10);
    if (temp_v9 != 0) {
      return 1;
    }
    temp_v9 = flagWordTestBit(temp_v6,2);
    if (temp_v9 != 0) {
      return 1;
    }
  }
  temp_v9 = 0;
  pfVar11 = (fn_00232b68_arg0 *)0x1;
  temp_v8 = 0;
  if (temp_v5 != 0) {
    temp_v9 = btlGetMainState();
    if (temp_v9 == 0) {
      temp_v9 = (int)*(short *)(temp_v5 + 0x1c);
    }
    else {
      temp_v9 = temp_v5;
      FUN_0026242c();
    }
  }
  if (temp_v6 != 0) {
    temp_v8 = btlGetMainState();
    if (temp_v8 == 0) {
      temp_v8 = (int)*(short *)(temp_v6 + 0xe);
    }
    else {
      temp_v8 = temp_v6;
      FUN_00269bf0();
    }
  }
  temp_v2 = (short)temp_v9;
  temp_v0 = (short)temp_v8;
  if ((param_2 == (fn_00232b68_arg1 *)0x0) ||
     (temp_v1 = param_2->field_0x6a & 0x7f, !(temp_v1 == 0xe || temp_v1 == 1))) {
    if (temp_v5 != 0) {
      temp_v3 = FUN_00295d08(1);
    }
    else {
      temp_v3 = flagWordTestBit(temp_v6,1);
    }
    if (temp_v3 != 0) {
      return 1;
    }
    if ((param_2[1].field_0x2 & 2) != 0) {
      puVar6 = param_3;
      pfVar11 = (fn_00232b68_arg0 *)FUN_0031c344(param_1,param_2);
    }
    if (temp_v5 != 0) {
      temp_v6 = FUN_0032b1b4(param_2,*(unsigned short *)(temp_v5 + 0x72));
      if (temp_v6 != 0) {
        if (param_3 == (unsigned int *)0x0) {
          FUN_00262410();
        }
        pfVar11 = (fn_00232b68_arg0 *)0x0;
      }
      temp_v7 = (unsigned int)param_2->field_0x64;
      if (temp_v7 == 0) {
        if (param_2->field_0x68 != 0) {
          puVar6 = (unsigned int *)0x51eb851f;
          temp_v7 = (int)((unsigned int)param_2->field_0x68 * (int)temp_v2) / 100;
          if (temp_v7 != 0) goto LAB_00232f18;
          temp_v7 = 1;
          goto LAB_00232f20;
        }
      }
      else {
LAB_00232f18:
        if (temp_v7 != 0) {
LAB_00232f20:
          temp_v6 = FUN_00295d08(3);
          temp_v10 = temp_v6 != 0;
          temp_v8 = (int)*(short *)(temp_v5 + 0x2a);
          temp_v6 = 0;
          if (temp_v10) {
            temp_v6 = temp_v7 - 1;
          }
          if ((temp_v10 && temp_v7 != 1) && temp_v6 < 0 == (temp_v10 && SBORROW4(temp_v7,1))) {
            temp_v7 = 1;
          }
          if (temp_v8 < temp_v9) {
            if (param_3 == (unsigned int *)0x0) {
              temp_v8 = temp_v8 + temp_v7;
              *(short *)(temp_v5 + 0x2a) = (short)temp_v8;
            }
            if (param_3 != (unsigned int *)0x0 && param_4 != (unsigned int *)0x0) {
              if (temp_v9 - temp_v8 < (int)temp_v7) {
                temp_v7 = temp_v9 - temp_v8;
              }
              *param_4 = temp_v7;
            }
            pfVar11 = (fn_00232b68_arg0 *)0x0;
          }
        }
      }
      temp_v7 = (unsigned int)*(unsigned short *)&param_2->field_0x66;
      if (temp_v7 == 0) {
        if ((unsigned char)param_2->field_0x69 != 0) {
          puVar6 = (unsigned int *)0x51eb851f;
          temp_v7 = (int)((unsigned int)(unsigned char)param_2->field_0x69 * (int)*(short *)(temp_v5 + 0x1e)) / 100;
          if (temp_v7 != 0) goto LAB_00232fa0;
          temp_v7 = 1;
          goto LAB_00232fa8;
        }
      }
      else {
LAB_00232fa0:
        if (temp_v7 != 0) {
LAB_00232fa8:
          temp_v6 = FUN_00295d08(3);
          temp_v10 = temp_v6 != 0;
          temp_v8 = (int)*(short *)(temp_v5 + 0x2c);
          temp_v6 = 0;
          if (temp_v10) {
            temp_v6 = temp_v7 - 1;
          }
          if ((temp_v10 && temp_v7 != 1) && temp_v6 < 0 == (temp_v10 && SBORROW4(temp_v7,1))) {
            temp_v7 = 1;
          }
          if (temp_v8 < *(short *)(temp_v5 + 0x1e)) {
            if (param_3 == (unsigned int *)0x0) {
              temp_v8 = temp_v8 + temp_v7;
              *(short *)(temp_v5 + 0x2c) = (short)temp_v8;
              param_5 = puVar6;
            }
            if (param_3 != (unsigned int *)0x0 && param_5 != (unsigned int *)0x0) {
              temp_v4 = *(short *)(temp_v5 + 0x1e) - temp_v8;
              if ((int)temp_v4 < (int)temp_v7) {
                temp_v7 = temp_v4;
              }
              *param_5 = temp_v7;
            }
            pfVar11 = (fn_00232b68_arg0 *)0x0;
          }
        }
      }
      if (*(short *)(temp_v5 + 0x2a) <= temp_v9) {
        temp_v9 = (int)*(short *)(temp_v5 + 0x2a);
      }
      *(short *)(temp_v5 + 0x2a) = (short)temp_v9;
      temp_v2 = *(short *)(temp_v5 + 0x2c);
      if (*(short *)(temp_v5 + 0x1e) < *(short *)(temp_v5 + 0x2c)) {
        temp_v2 = *(short *)(temp_v5 + 0x1e);
      }
      *(short *)(temp_v5 + 0x2c) = temp_v2;
    }
    else {
      temp_v5 = FUN_0032b1b4(param_2,*(unsigned short *)(temp_v6 + 0x44));
      if (temp_v5 != 0) {
        if (param_3 == (unsigned int *)0x0) {
          FUN_00262f68(temp_v6);
        }
        pfVar11 = (fn_00232b68_arg0 *)0x0;
      }
      temp_v7 = (unsigned int)param_2->field_0x64;
      if (temp_v7 == 0) {
        if (param_2->field_0x68 != 0) {
          puVar6 = (unsigned int *)0x51eb851f;
          temp_v7 = (int)((unsigned int)param_2->field_0x68 * (int)temp_v0) / 100;
          if (temp_v7 != 0) goto LAB_00233080;
          temp_v7 = 1;
          goto LAB_00233088;
        }
      }
      else {
LAB_00233080:
        if (temp_v7 != 0) {
LAB_00233088:
          temp_v5 = flagWordTestBit(temp_v6,3);
          temp_v10 = temp_v5 != 0;
          temp_v9 = (int)*(short *)(temp_v6 + 0x2a);
          temp_v5 = 0;
          if (temp_v10) {
            temp_v5 = temp_v7 - 1;
          }
          if ((temp_v10 && temp_v7 != 1) && temp_v5 < 0 == (temp_v10 && SBORROW4(temp_v7,1))) {
            temp_v7 = 1;
          }
          if (temp_v9 < temp_v8) {
            if (param_3 == (unsigned int *)0x0) {
              temp_v9 = temp_v9 + temp_v7;
              *(short *)(temp_v6 + 0x2a) = (short)temp_v9;
            }
            if (param_3 != (unsigned int *)0x0 && param_4 != (unsigned int *)0x0) {
              if (temp_v8 - temp_v9 < (int)temp_v7) {
                temp_v7 = temp_v8 - temp_v9;
              }
              *param_4 = temp_v7;
            }
            pfVar11 = (fn_00232b68_arg0 *)0x0;
          }
        }
      }
      temp_v7 = (unsigned int)*(unsigned short *)&param_2->field_0x66;
      if (temp_v7 == 0) {
        if ((unsigned char)param_2->field_0x69 != 0) {
          puVar6 = (unsigned int *)0x51eb851f;
          temp_v7 = (int)((unsigned int)(unsigned char)param_2->field_0x69 * (int)*(short *)(temp_v6 + 0x10)) / 100;
          if (temp_v7 != 0) goto LAB_0023310c;
          temp_v7 = 1;
          goto LAB_00233114;
        }
      }
      else {
LAB_0023310c:
        if (temp_v7 != 0) {
LAB_00233114:
          temp_v5 = flagWordTestBit(temp_v6,3);
          temp_v10 = temp_v5 != 0;
          temp_v9 = (int)*(short *)(temp_v6 + 0x2c);
          temp_v5 = 0;
          if (temp_v10) {
            temp_v5 = temp_v7 - 1;
          }
          if ((temp_v10 && temp_v7 != 1) && temp_v5 < 0 == (temp_v10 && SBORROW4(temp_v7,1))) {
            temp_v7 = 1;
          }
          if (temp_v9 < *(short *)(temp_v6 + 0x10)) {
            if (param_3 == (unsigned int *)0x0) {
              temp_v9 = temp_v9 + temp_v7;
              *(short *)(temp_v6 + 0x2c) = (short)temp_v9;
              param_5 = puVar6;
            }
            if (param_3 != (unsigned int *)0x0 && param_5 != (unsigned int *)0x0) {
              temp_v4 = *(short *)(temp_v6 + 0x10) - temp_v9;
              if ((int)temp_v4 < (int)temp_v7) {
                temp_v7 = temp_v4;
              }
              *param_5 = temp_v7;
            }
            pfVar11 = (fn_00232b68_arg0 *)0x0;
          }
        }
      }
      if (*(short *)(temp_v6 + 0x2a) <= temp_v8) {
        temp_v8 = (int)*(short *)(temp_v6 + 0x2a);
      }
      *(short *)(temp_v6 + 0x2a) = (short)temp_v8;
      temp_v2 = *(short *)(temp_v6 + 0x10);
      if (*(short *)(temp_v6 + 0x2c) <= *(short *)(temp_v6 + 0x10)) {
        temp_v2 = *(short *)(temp_v6 + 0x2c);
      }
      *(short *)(temp_v6 + 0x2c) = temp_v2;
    }
  }
  else if (temp_v5 != 0) {
    temp_v6 = FUN_00295d08(1);
    if (temp_v6 == 0) {
      if ((param_2[1].field_0x2 & 2) != 0) {
        FUN_002e33f4(param_1,param_2,pfVar11,param_3);
        pfVar11 = param_1;
      }
      return (int)pfVar11;
    }
    if (param_3 != (unsigned int *)0x0) {
      if (param_4 != (unsigned int *)0x0) {
        temp_v5 = FUN_00295d08(3);
        if (temp_v5 != 0) {
          *param_4 = 1;
        }
        else {
          temp_v7 = (unsigned int)param_2->field_0x64;
          if (temp_v7 == 0) {
            temp_v7 = 0;
            if (param_2->field_0x68 != 0) {
              temp_v5 = (unsigned int)param_2->field_0x68 * (int)temp_v2;
              temp_v7 = temp_v5 / 100;
              if (temp_v7 == 0) {
                temp_v7 = 1;
              }
            }
          }
          *param_4 = temp_v7;
        }
      }
    }
    else {
      FUN_00262410(2);
      temp_v6 = FUN_00295d08(3);
      if (temp_v6 != 0) {
        temp_v2 = *(short *)(temp_v5 + 0x2a) + 1;
      }
      else {
        temp_v7 = (unsigned int)param_2->field_0x64;
        if (temp_v7 == 0) {
          temp_v7 = 0;
          if ((param_2->field_0x68 != 0) &&
             (temp_v7 = (int)((unsigned int)param_2->field_0x68 * (int)temp_v2) / 100, temp_v7 == 0)) {
            temp_v7 = 1;
          }
        }
        temp_v2 = (short)temp_v7 + *(short *)(temp_v5 + 0x2a);
      }
      *(short *)(temp_v5 + 0x2a) = temp_v2;
      if (temp_v2 < 1) {
        *(unsigned short *)(temp_v5 + 0x2a) = 1;
      }
    }
    pfVar11 = (fn_00232b68_arg0 *)0x0;
  }
  else {
    temp_v5 = flagWordTestBit(temp_v6,1);
    if (temp_v5 != 0) {
      if (param_3 != (unsigned int *)0x0) {
        if (param_4 != (unsigned int *)0x0) {
          temp_v5 = flagWordTestBit(temp_v6,3);
          if (temp_v5 != 0) {
            *param_4 = 1;
          }
          else {
            temp_v7 = (unsigned int)param_2->field_0x64;
            if (temp_v7 == 0) {
              temp_v7 = 0;
              if (param_2->field_0x68 != 0) {
                temp_v5 = (unsigned int)param_2->field_0x68 * (int)temp_v0;
                temp_v7 = temp_v5 / 100;
                if (temp_v7 == 0) {
                  temp_v7 = 1;
                }
              }
            }
            *param_4 = temp_v7;
          }
        }
      }
      else {
        FUN_00262f68(temp_v6,2);
        temp_v5 = flagWordTestBit(temp_v6,3);
        if (temp_v5 != 0) {
          temp_v2 = *(short *)(temp_v6 + 0x2a) + 1;
        }
        else {
          temp_v7 = (unsigned int)param_2->field_0x64;
          if (temp_v7 == 0) {
            temp_v7 = 0;
            if ((param_2->field_0x68 != 0) &&
               (temp_v7 = (int)((unsigned int)param_2->field_0x68 * (int)temp_v0) / 100, temp_v7 == 0)) {
              temp_v7 = 1;
            }
          }
          temp_v2 = (short)temp_v7 + *(short *)(temp_v6 + 0x2a);
        }
        *(short *)(temp_v6 + 0x2a) = temp_v2;
        if (temp_v2 < 1) {
          *(unsigned short *)(temp_v6 + 0x2a) = 1;
        }
      }
      pfVar11 = (fn_00232b68_arg0 *)0x0;
    }
  }
  if ((param_2[1].field_0x2 & 2) != 0) {
    FUN_002e33f4(param_1,param_2,pfVar11,param_3);
    pfVar11 = param_1;
  }
  return (int)pfVar11;
}

} /* extern "C" */
