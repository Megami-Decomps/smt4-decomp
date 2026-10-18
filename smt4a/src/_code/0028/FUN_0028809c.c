/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028809c` (_code @ 0x28809c, 0x42c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern int FUN_0014aa78(void);
extern int FUN_001641e8(void);
extern int FUN_0017760c(int);
extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
extern int FUN_0023ad2c(int);
/* Supplied declaration required: FUN_0023e6d8. */
extern int FUN_002919a4(void);
extern int FUN_00291e14(void);
extern int FUN_002b4dcc(void);
/* Supplied declaration required: FUN_002b4e7c. */
extern unsigned int FUN_003d2c20(int, unsigned short);
extern int FUN_003e0044(unsigned int);
/* Supplied declaration required: FUN_003e00dc. */
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd400. */


unsigned int FUN_0028809c(unsigned int param_1,int param_2,int param_3,int param_4,int *param_5)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v5 = 0;
  temp_v6 = 0;
  if (param_2 < 0) {
    temp_v2 = FUN_001641e8();
    if ((temp_v2 != 0) && (temp_v2 = FUN_00291e14(), temp_v2 != 0)) {
      temp_v6 = FUN_002919a4();
    }
    else {
      temp_v5 = FUN_001801a4();
    }
  }
  else {
    temp_v6 = FUN_001ab854();
    if (temp_v6 == 0) {
      return 1;
    }
    temp_v2 = FUN_004bd340(temp_v6,10);
    if (temp_v2 != 0) {
      return 1;
    }
  }
  temp_v2 = 0;
  temp_v7 = 1;
  temp_v8 = 0;
  if (temp_v5 != 0) {
    temp_v2 = FUN_0014aa78();
    if (temp_v2 == 0) {
      temp_v2 = (int)*(short *)(temp_v5 + 0x1c);
    }
    else {
      temp_v2 = temp_v5;
      FUN_002b4e7c();
    }
  }
  if (temp_v6 != 0) {
    temp_v8 = FUN_0014aa78();
    if (temp_v8 != 0) {
      temp_v8 = FUN_002b4dcc();
    }
    else {
      temp_v8 = FUN_0017760c(temp_v6);
    }
  }
  temp_v3 = FUN_0023ad2c(param_3);
  temp_v1 = (short)temp_v2;
  temp_v0 = (short)temp_v8;
  if (temp_v3 != 0) {
    if (temp_v5 != 0) {
      if (*(char *)(param_3 + 0x23) == '\a') {
        return 1;
      }
      temp_v6 = FUN_003e0044(1);
      if (temp_v6 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        FUN_003e00dc(2);
        temp_v6 = FUN_003e0044(3);
        if (temp_v6 != 0) {
          temp_v1 = *(short *)(temp_v5 + 0x2a) + 1;
        }
        else {
          FUN_0023e6d8(param_3,(int)temp_v1,param_1);
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
      temp_v6 = FUN_003e0044(3);
      if (temp_v6 == 0) {
        FUN_0023e6d8(param_3,(int)temp_v1,param_1);
        *param_5 = param_3;
        return 0;
      }
    }
    else {
      temp_v5 = FUN_004bd340(temp_v6,1);
      if (temp_v5 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        FUN_004bd400(temp_v6,2);
        temp_v5 = FUN_004bd340(temp_v6,3);
        if (temp_v5 != 0) {
          temp_v1 = *(short *)(temp_v6 + 0x2a) + 1;
        }
        else {
          FUN_0023e6d8(param_3,(int)temp_v0,param_1);
          temp_v1 = (short)param_3 + *(short *)(temp_v6 + 0x2a);
        }
        *(short *)(temp_v6 + 0x2a) = temp_v1;
        if (0 < temp_v1) {
          return 0;
        }
        *(unsigned short *)(temp_v6 + 0x2a) = 1;
        return 0;
      }
      if (param_5 == (int *)0x0) {
        return 0;
      }
      temp_v6 = FUN_004bd340(temp_v6,3);
      if (temp_v6 == 0) {
        FUN_0023e6d8(param_3,(int)temp_v0,param_1);
        *param_5 = param_3;
        return 0;
      }
    }
    *param_5 = 1;
    return 0;
  }
  if (temp_v5 == 0) {
    temp_v5 = FUN_004bd340(temp_v6,1);
    if (temp_v5 != 0) {
      return 1;
    }
    temp_v4 = FUN_003d2c20(param_3,*(unsigned short *)(temp_v6 + 0x60));
    if (temp_v4 != 0) {
      if (param_4 == 0) {
        FUN_004bd400(temp_v6,temp_v4 & 0xffff);
      }
      temp_v7 = 0;
    }
    FUN_0023e6d8(param_3,(int)temp_v0,param_1);
    if (param_3 != 0) {
      temp_v5 = FUN_004bd340(temp_v6,3);
      temp_v1 = *(short *)(temp_v6 + 0x2a);
      if (temp_v5 != 0) {
        param_3 = 1;
      }
      if (temp_v1 < temp_v8) {
        if (param_4 != 0) {
          if (param_5 == (int *)0x0) {
            return 0;
          }
          temp_v8 = temp_v8 - temp_v1;
          if (temp_v8 < param_3) {
            param_3 = temp_v8;
          }
          *param_5 = param_3;
          return 0;
        }
        temp_v7 = 0;
        *(short *)(temp_v6 + 0x2a) = temp_v1 + (short)param_3;
        if (*(short *)(temp_v6 + 0x2a) <= temp_v8) {
          temp_v8 = (int)*(short *)(temp_v6 + 0x2a);
        }
        *(short *)(temp_v6 + 0x2a) = (short)temp_v8;
        return temp_v7;
      }
    }
    if (param_4 != 0) {
      return temp_v7;
    }
    if (*(short *)(temp_v6 + 0x2a) <= temp_v8) {
      temp_v8 = (int)*(short *)(temp_v6 + 0x2a);
    }
    *(short *)(temp_v6 + 0x2a) = (short)temp_v8;
    return temp_v7;
  }
  temp_v6 = FUN_003e0044(1);
  if (temp_v6 != 0) {
    return 1;
  }
  temp_v4 = FUN_003d2c20(param_3,*(unsigned short *)(temp_v5 + 0x5e));
  if (temp_v4 != 0) {
    if (param_4 == 0) {
      FUN_003e00dc(temp_v4 & 0xffff);
    }
    temp_v7 = 0;
  }
  FUN_0023e6d8(param_3,(int)temp_v1,param_1);
  if (param_3 != 0) {
    temp_v6 = FUN_003e0044(3);
    temp_v1 = *(short *)(temp_v5 + 0x2a);
    if (temp_v6 != 0) {
      param_3 = 1;
    }
    if (temp_v1 < temp_v2) {
      if (param_4 != 0) {
        if (param_5 == (int *)0x0) {
          return 0;
        }
        temp_v2 = temp_v2 - temp_v1;
        if (temp_v2 < param_3) {
          param_3 = temp_v2;
        }
        *param_5 = param_3;
        return 0;
      }
      temp_v7 = 0;
      *(short *)(temp_v5 + 0x2a) = temp_v1 + (short)param_3;
      if (*(short *)(temp_v5 + 0x2a) <= temp_v2) {
        temp_v2 = (int)*(short *)(temp_v5 + 0x2a);
      }
      *(short *)(temp_v5 + 0x2a) = (short)temp_v2;
      return temp_v7;
    }
  }
  if (param_4 != 0) {
    return temp_v7;
  }
  if (*(short *)(temp_v5 + 0x2a) <= temp_v2) {
    temp_v2 = (int)*(short *)(temp_v5 + 0x2a);
  }
  *(short *)(temp_v5 + 0x2a) = (short)temp_v2;
  return temp_v7;
}
