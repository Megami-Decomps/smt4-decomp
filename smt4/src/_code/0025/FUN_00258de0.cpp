/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258de0` (_code @ 0x258de0, 0x408 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00262260(int, int, unsigned int);
int FUN_00262410(...);
int FUN_0026242c(void);
int FUN_00262f68(...);
int FUN_00269bf0(void);

typedef struct fn_00258de0_arg1 fn_00258de0_arg1;
struct fn_00258de0_arg1 {
    unsigned char pad_0x0[0xe];
    short field_0xe; /* +0xe */
    unsigned char pad_0x10[0xc];
    short field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0xc];
    ushort field_0x2a; /* +0x2a */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern int FUN_001ad4c0(int);
/* Supplied declaration required: FUN_00262260. */
/* Supplied declaration required: FUN_00262410. */
/* Supplied declaration required: FUN_0026242c. */
/* Supplied declaration required: FUN_00262f68. */
/* Supplied declaration required: FUN_00269bf0. */
extern int btlGetMainState(void);
extern int FUN_00295d08(unsigned int);
extern int flagWordTestBit(int, unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002b63ac(void);
extern unsigned int FUN_0032b278(int, unsigned short);


unsigned int
FUN_00258de0(unsigned int param_1,fn_00258de0_arg1 *param_2,int param_3,int param_4,int *param_5)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = 0;
  temp_v5 = 0;
  if ((int)param_2 < 0) {
    temp_v4 = FUN_002b63ac();
  }
  else {
    temp_v5 = FUN_002a8740();
    if (temp_v5 == 0) {
      return 1;
    }
    temp_v6 = flagWordTestBit(temp_v5,10);
    if (temp_v6 != 0) {
      return 1;
    }
    temp_v6 = flagWordTestBit(temp_v5,2);
    if (temp_v6 != 0) {
      return 1;
    }
  }
  temp_v6 = 0;
  temp_v8 = 1;
  temp_v7 = 0;
  if (temp_v4 != 0) {
    temp_v6 = btlGetMainState();
    if (temp_v6 == 0) {
      temp_v6 = (int)*(short *)(temp_v4 + 0x1c);
    }
    else {
      temp_v6 = temp_v4;
      FUN_0026242c();
    }
  }
  if (temp_v5 != 0) {
    temp_v7 = btlGetMainState();
    if (temp_v7 == 0) {
      temp_v7 = (int)*(short *)(temp_v5 + 0xe);
    }
    else {
      temp_v7 = temp_v5;
      FUN_00269bf0();
    }
  }
  temp_v2 = FUN_001ad4c0(param_3);
  temp_v1 = (short)temp_v6;
  temp_v0 = (short)temp_v7;
  if (temp_v2 != 0) {
    if (temp_v4 != 0) {
      if (*(char *)(param_3 + 0x23) == '\a') {
        return 1;
      }
      temp_v5 = FUN_00295d08(1);
      if (temp_v5 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        FUN_00262410(2);
        temp_v5 = FUN_00295d08(3);
        if (temp_v5 != 0) {
          temp_v1 = *(short *)(temp_v4 + 0x2a) + 1;
        }
        else {
          FUN_00262260(param_3,(int)temp_v1,param_1);
          temp_v1 = (short)param_3 + *(short *)(temp_v4 + 0x2a);
        }
        *(short *)(temp_v4 + 0x2a) = temp_v1;
        if (0 < temp_v1) {
          return 0;
        }
        *(unsigned short *)(temp_v4 + 0x2a) = 1;
        return 0;
      }
      if (param_5 == (int *)0x0) {
        return 0;
      }
      temp_v4 = FUN_00295d08(3);
      if (temp_v4 == 0) {
        FUN_00262260(param_3,(int)temp_v1,param_1);
        *param_5 = param_3;
        return 0;
      }
    }
    else {
      temp_v4 = flagWordTestBit(temp_v5,1);
      if (temp_v4 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        FUN_00262f68(temp_v5,2);
        temp_v4 = flagWordTestBit(temp_v5,3);
        if (temp_v4 != 0) {
          temp_v1 = *(short *)(temp_v5 + 0x2a) + 1;
        }
        else {
          FUN_00262260(param_3,(int)temp_v0,param_1);
          temp_v1 = (short)param_3 + *(short *)(temp_v5 + 0x2a);
        }
        *(short *)(temp_v5 + 0x2a) = temp_v1;
        if (0 < temp_v1) {
          return 0;
        }
        *(unsigned short *)(temp_v5 + 0x2a) = 1;
        return 0;
      }
      if (param_5 == (int *)0x0) {
        return 0;
      }
      temp_v4 = flagWordTestBit(temp_v5,3);
      if (temp_v4 == 0) {
        FUN_00262260(param_3,(int)temp_v0,param_1);
        *param_5 = param_3;
        return 0;
      }
    }
    *param_5 = 1;
    return 0;
  }
  if (temp_v4 == 0) {
    temp_v4 = flagWordTestBit(temp_v5,1);
    if (temp_v4 != 0) {
      return 1;
    }
    temp_v3 = FUN_0032b278(param_3,*(unsigned short *)(temp_v5 + 0x44));
    if (temp_v3 != 0) {
      if (param_4 == 0) {
        FUN_00262f68(temp_v5,temp_v3 & 0xffff);
      }
      temp_v8 = 0;
    }
    FUN_00262260(param_3,(int)temp_v0,param_1);
    if (param_3 != 0) {
      temp_v4 = flagWordTestBit(temp_v5,3);
      temp_v1 = *(short *)(temp_v5 + 0x2a);
      if (temp_v4 != 0) {
        param_3 = 1;
      }
      if (temp_v1 < temp_v7) {
        if (param_4 != 0) {
          if (param_5 == (int *)0x0) {
            return 0;
          }
          temp_v7 = temp_v7 - temp_v1;
          if (temp_v7 < param_3) {
            param_3 = temp_v7;
          }
          *param_5 = param_3;
          return 0;
        }
        temp_v8 = 0;
        *(short *)(temp_v5 + 0x2a) = temp_v1 + (short)param_3;
        if (*(short *)(temp_v5 + 0x2a) <= temp_v7) {
          temp_v7 = (int)*(short *)(temp_v5 + 0x2a);
        }
        *(short *)(temp_v5 + 0x2a) = (short)temp_v7;
        return temp_v8;
      }
    }
    if (param_4 != 0) {
      return temp_v8;
    }
    if (*(short *)(temp_v5 + 0x2a) <= temp_v7) {
      temp_v7 = (int)*(short *)(temp_v5 + 0x2a);
    }
    *(short *)(temp_v5 + 0x2a) = (short)temp_v7;
    return temp_v8;
  }
  temp_v5 = FUN_00295d08(1);
  if (temp_v5 != 0) {
    return 1;
  }
  temp_v3 = FUN_0032b278(param_3,*(unsigned short *)(temp_v4 + 0x72));
  if (temp_v3 != 0) {
    if (param_4 == 0) {
      FUN_00262410(temp_v3 & 0xffff);
    }
    temp_v8 = 0;
  }
  FUN_00262260(param_3,(int)temp_v1,param_1);
  if (param_3 != 0) {
    temp_v5 = FUN_00295d08(3);
    temp_v1 = *(short *)(temp_v4 + 0x2a);
    if (temp_v5 != 0) {
      param_3 = 1;
    }
    if (temp_v1 < temp_v6) {
      if (param_4 != 0) {
        if (param_5 == (int *)0x0) {
          return 0;
        }
        temp_v6 = temp_v6 - temp_v1;
        if (temp_v6 < param_3) {
          param_3 = temp_v6;
        }
        *param_5 = param_3;
        return 0;
      }
      temp_v8 = 0;
      *(short *)(temp_v4 + 0x2a) = temp_v1 + (short)param_3;
      if (*(short *)(temp_v4 + 0x2a) <= temp_v6) {
        temp_v6 = (int)*(short *)(temp_v4 + 0x2a);
      }
      *(short *)(temp_v4 + 0x2a) = (short)temp_v6;
      return temp_v8;
    }
  }
  if (param_4 != 0) {
    return temp_v8;
  }
  if (*(short *)(temp_v4 + 0x2a) <= temp_v6) {
    temp_v6 = (int)*(short *)(temp_v4 + 0x2a);
  }
  *(short *)(temp_v4 + 0x2a) = (short)temp_v6;
  return temp_v8;
}

} /* extern "C" */
