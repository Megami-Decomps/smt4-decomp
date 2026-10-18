/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170f68` (_code @ 0x170f68, 0x42c bytes) from smt4a.cxi.
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

extern unsigned int DAT_005891bc; /* 0x5891bc */
extern romwright_code *DAT_0058923c; /* 0x58923c */
extern unsigned int DAT_0058927c; /* 0x58927c */

/* Supplied declaration required: FUN_0015a318. */
/* Supplied declaration required: FUN_0015a400. */
/* Supplied declaration required: FUN_0015a440. */
/* Supplied declaration required: FUN_0015adc4. */
/* Supplied declaration required: FUN_0016e6b8. */
extern int FUN_00170464(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_00170a20. */
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170e6c. */
/* Supplied declaration required: FUN_00170ebc. */
extern int FUN_001713a0(void);
/* Supplied declaration required: FUN_001716ac. */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018bd50. */
/* Supplied declaration required: nn_applet_CTR_detail_LockTransition. */
/* Supplied declaration required: nn_applet_CTR_detail_NotifyToWait. */
/* Supplied declaration required: nn_applet_CTR_detail_SleepIfShellClosed. */
/* Supplied declaration required: nn_applet_CTR_detail_UnlockTransition. */


int FUN_00170f68(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
                unsigned int *param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 7 goto(s); 18 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11 [5];
  unsigned int temp_v12;
  unsigned int *puStack_34;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int *puStack_28;
  
  temp_v5 = 0;
  temp_v12 = 0;
  puStack_34 = param_1;
  temp_v13 = param_2;
  temp_v14 = param_3;
  puStack_28 = param_4;
  temp_v1 = FUN_00170464();
  FUN_00170474(0);
  if (temp_v1 == 99) {
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = 0;
    }
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = DAT_005891bc;
    }
    return 0;
  }
  nn_applet_CTR_detail_NotifyToWait();
  FUN_00170e58();
  if (temp_v1 != 0x62) {
    nn_applet_CTR_detail_SleepIfShellClosed();
  }
  else {
    FUN_00170474(0);
  }
  do {
    do {
      temp_v7 = temp_v13;
      temp_v6 = 0;
      temp_v8 = temp_v14;
      temp_v0 = '\x01';
      puVar3 = (unsigned int *)&temp_v10;
      FUN_0018bd50(puVar3,temp_v11,temp_v13,temp_v14,&temp_v9,&temp_v6,param_7,param_8);
      temp_v3 = 0xfbc00000;
      if (((unsigned int)puVar3 & 0x3ff) != 0x3ef) {
        temp_v0 = '\x01';
        if ((-1 < (int)puVar3) && (DAT_0058923c != (romwright_code *)0x0)) {
          temp_v0 = (*DAT_0058923c)(DAT_0058927c,temp_v10,temp_v11[0],temp_v7,temp_v8,temp_v9,
                                  temp_v6);
          temp_v3 = temp_v4;
        }
        if (param_4 != (unsigned int *)0x0) {
          temp_v3 = temp_v9;
        }
        temp_v12 = temp_v10;
        if (param_4 != (unsigned int *)0x0) {
          *param_4 = temp_v3;
        }
        temp_v5 = temp_v11[0];
        if (param_5 != (unsigned int *)0x0) {
          *param_5 = temp_v6;
        }
      }
    } while (temp_v0 == '\0');
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = temp_v12;
    }
    if ((int)puVar3 < 0) goto LAB_001710dc;
  } while ((((temp_v5 != 1 && temp_v5 != 0xb) && (temp_v5 != 10 && temp_v5 != 0xc)) &&
           (temp_v5 != 0xd && temp_v5 != 0xf)) &&
          ((temp_v5 != 0xe && temp_v5 != 0x11 && ((temp_v5 != 0x12 && temp_v5 != 0x40) && temp_v5 != 0x41))));
  FUN_0015adc4();
LAB_001710dc:
  if (((unsigned int)puVar3 & 0x3ff) == 0x3ef) {
    return -1;
  }
  temp_v2 = FUN_0015a318(0xfbc00000);
  if (((temp_v2 == 0) && (temp_v1 != 3)) && (temp_v5 != 0xc && temp_v5 != 1)) {
    FUN_00170ebc(1);
    temp_v2 = FUN_001713a0();
    if (temp_v2 < 0) {
      FUN_00189a38(temp_v2,0x171174);
    }
  }
  if (temp_v5 == 0xe) {
    temp_v5 = 6;
LAB_001711ec:
    FUN_00170e6c(1);
    temp_v2 = FUN_0015a318();
    if ((temp_v2 == 0) && (temp_v1 == 0xe || temp_v1 == 5)) {
      FUN_001716ac(1);
    }
    if ((((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 3 && temp_v5 != 4)) && (temp_v5 != 5 && temp_v5 != 6))
       && ((temp_v5 != 9 && temp_v5 != 0x40) && temp_v5 != 0x41)) goto LAB_001712c4;
  }
  else {
    if (temp_v5 >= 0xe) {
      if (temp_v5 == 0x12) {
        temp_v5 = 10;
      }
      else if (temp_v5 < 0x12) {
        if (temp_v5 != 0xf) {
          if (temp_v5 == 0x11) {
            temp_v5 = 9;
            goto LAB_0017127c;
          }
LAB_001711e8:
          temp_v5 = 1;
        }
        else {
          temp_v5 = 7;
          FUN_0015a400(1);
          FUN_0015a440(1);
        }
      }
      else if (temp_v5 != 0x40 && temp_v5 != 0x41) {
        temp_v5 = 1;
      }
      goto LAB_001711ec;
    }
    if (temp_v5 == 0xb) {
      temp_v5 = 3;
      goto LAB_001711ec;
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
      goto LAB_001711ec;
    }
    if (temp_v5 != 0xc) {
      if (temp_v5 != 0xd) goto LAB_001711e8;
      temp_v5 = 5;
      FUN_0016e6b8();
    }
    else {
      temp_v5 = 4;
      FUN_0016e6b8();
      FUN_00170a20();
    }
  }
LAB_0017127c:
  temp_v3 = 0;
  temp_v2 = FUN_0015a318();
  if (temp_v2 == 0) {
    temp_v3 = 0x10;
  }
  else if (temp_v2 == 1) {
    temp_v3 = 0x20;
  }
  else if (temp_v2 == 2) {
    temp_v3 = 0x40;
  }
  else if (temp_v2 == 3) {
    temp_v3 = 0x80;
  }
  nn_applet_CTR_detail_UnlockTransition(temp_v3);
  nn_applet_CTR_detail_SleepIfShellClosed();
LAB_001712c4:
  if (temp_v5 == 7) {
    nn_applet_CTR_detail_LockTransition(1);
  }
  if ((temp_v1 == 0xe || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 0x12)) {
    if ((temp_v5 != 4 && temp_v5 != 5) && (temp_v5 != 10)) {
      FUN_00170ebc();
    }
    temp_v1 = FUN_0015a318();
    if ((temp_v1 == 0) && (temp_v5 != 7)) {
      FUN_0015a400(0);
      nn_applet_CTR_detail_UnlockTransition(1);
      nn_applet_CTR_detail_SleepIfShellClosed();
    }
  }
  return temp_v5;
}
