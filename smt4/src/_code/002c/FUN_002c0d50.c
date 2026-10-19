/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0d50` (_code @ 0x2c0d50, 0x3ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_8_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern romwright_code *DAT_0044e3f8; /* 0x44e3f8 */
extern unsigned int DAT_0044e438; /* 0x44e438 */

extern int FUN_0011d1fc(void);
/* Supplied declaration required: FUN_0011d2c0. */
/* Supplied declaration required: FUN_0011d9a4. */
/* Supplied declaration required: FUN_001284e4. */
/* Supplied declaration required: FUN_0012a368. */
extern int FUN_0012a708(void);
/* Supplied declaration required: FUN_0012a7b4. */
/* Supplied declaration required: FUN_0013bb98. */
/* Supplied declaration required: FUN_002b5904. */
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb460. */
/* Supplied declaration required: FUN_002c12bc. */
/* Supplied declaration required: FUN_002c131c. */
extern void nn_applet_CTR_detail_LockTransition(unsigned int, unsigned char);
extern void nn_applet_CTR_detail_NotifyToWait(void);
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);
extern void nn_applet_CTR_detail_UnlockTransition(unsigned int);


int FUN_002c0d50(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
                unsigned int *param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 7 goto(s); 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12 [5];
  unsigned int temp_v13;
  unsigned int *puStack_34;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int *puStack_28;
  
  temp_v5 = 0;
  temp_v13 = 0;
  puStack_34 = param_1;
  temp_v14 = param_2;
  temp_v15 = param_3;
  puStack_28 = param_4;
  temp_v1 = FUN_0011d1fc();
  FUN_002bb140(0);
  if (temp_v1 == 99) {
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = 0;
    }
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = DAT_0044e368;
    }
    return 0;
  }
  nn_applet_CTR_detail_NotifyToWait();
  FUN_002bb180();
  if (temp_v1 != 0x62) {
    nn_applet_CTR_detail_SleepIfShellClosed();
  }
  else {
    FUN_002bb140(0);
  }
  do {
    do {
      temp_v8 = temp_v14;
      temp_v7 = 0;
      temp_v9 = temp_v15;
      temp_v0 = '\x01';
      puVar3 = (unsigned int *)&temp_v11;
      FUN_0013bb98(puVar3,temp_v12,temp_v14,temp_v15,&temp_v10,&temp_v7,param_7,param_8);
      temp_v3 = 0xfbc00000;
      if (((unsigned int)puVar3 & 0x3ff) != 0x3ef) {
        temp_v0 = '\x01';
        if ((-1 < (int)puVar3) && (DAT_0044e3f8 != (romwright_code *)0x0)) {
          temp_v0 = (*DAT_0044e3f8)(DAT_0044e438,temp_v11,temp_v12[0],temp_v8,temp_v9,temp_v10,
                                  temp_v7);
          temp_v3 = temp_v4;
        }
        if (param_4 != (unsigned int *)0x0) {
          temp_v3 = temp_v10;
        }
        temp_v13 = temp_v11;
        if (param_4 != (unsigned int *)0x0) {
          *param_4 = temp_v3;
        }
        temp_v5 = temp_v12[0];
        if (param_5 != (unsigned int *)0x0) {
          *param_5 = temp_v7;
        }
      }
    } while (temp_v0 == '\0');
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = temp_v13;
    }
    if ((int)puVar3 < 0) goto LAB_002c0ec0;
  } while ((((temp_v5 != 1 && temp_v5 != 0xb) && (temp_v5 != 10 && temp_v5 != 0xc)) &&
           (temp_v5 != 0xd && temp_v5 != 0xf)) &&
          ((temp_v5 != 0xe && temp_v5 != 0x11 && (temp_v5 != 0x40 && temp_v5 != 0x41))));
  FUN_0011d9a4();
LAB_002c0ec0:
  if (((unsigned int)puVar3 & 0x3ff) == 0x3ef) {
    return -1;
  }
  temp_v2 = FUN_002c12bc(0xfbc00000);
  if (((temp_v2 == 0) && (temp_v1 != 3)) && (temp_v5 != 0xc && temp_v5 != 1)) {
    FUN_002bb194(1);
    temp_v2 = FUN_0012a708();
    if (temp_v2 < 0) {
      FUN_002c131c(temp_v2,0x2c0f58);
    }
  }
  if (temp_v5 == 0xe) {
    temp_v5 = 6;
LAB_002c0fa8:
    FUN_002b5904(1);
    if (temp_v1 == 0xe || temp_v1 == 5) {
      FUN_0012a7b4(1);
    }
    if ((((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 3 && temp_v5 != 4)) && (temp_v5 != 5 && temp_v5 != 6))
       && ((temp_v5 != 9 && temp_v5 != 0x40) && temp_v5 != 0x41)) goto LAB_002c108c;
  }
  else {
    if (temp_v5 >= 0xe) {
      if (temp_v5 != 0xf) {
        if (temp_v5 == 0x11) {
          temp_v5 = 9;
          goto LAB_002c1044;
        }
        if (temp_v5 != 0x40 && temp_v5 != 0x41) {
          temp_v5 = 1;
        }
      }
      else {
        temp_v5 = 7;
        FUN_002bb460(1);
        FUN_0011d2c0(1);
      }
      goto LAB_002c0fa8;
    }
    if (temp_v5 == 0xb) {
      temp_v5 = 3;
      goto LAB_002c0fa8;
    }
    if (temp_v5 < 0xb) {
      if (temp_v5 != 1) {
        if (temp_v5 != 10) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = 2;
        }
      }
      goto LAB_002c0fa8;
    }
    if (temp_v5 != 0xc) {
      if (temp_v5 != 0xd) {
        temp_v5 = 1;
        goto LAB_002c0fa8;
      }
      temp_v5 = 5;
      FUN_001284e4();
    }
    else {
      temp_v5 = 4;
      FUN_001284e4();
      FUN_0012a368();
    }
  }
LAB_002c1044:
  temp_v6 = 0;
  temp_v2 = FUN_002c12bc();
  if (temp_v2 == 0) {
    temp_v6 = 0x10;
  }
  else if (temp_v2 == 1) {
    temp_v6 = 0x20;
  }
  else if (temp_v2 == 2) {
    temp_v6 = 0x40;
  }
  else if (temp_v2 == 3) {
    temp_v6 = 0x80;
  }
  nn_applet_CTR_detail_UnlockTransition(temp_v6);
  nn_applet_CTR_detail_SleepIfShellClosed();
LAB_002c108c:
  if (temp_v5 == 7) {
    nn_applet_CTR_detail_LockTransition(1,1);
  }
  if ((temp_v1 == 0xe || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 0x12)) {
    if (temp_v5 != 4 && temp_v5 != 5) {
      FUN_002bb194();
    }
    temp_v1 = FUN_002c12bc();
    if ((temp_v1 == 0) && (temp_v5 != 7)) {
      FUN_002bb460(0);
      nn_applet_CTR_detail_UnlockTransition(1);
      nn_applet_CTR_detail_SleepIfShellClosed();
    }
  }
  return temp_v5;
}
