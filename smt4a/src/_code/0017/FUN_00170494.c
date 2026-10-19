/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170494` (_code @ 0x170494, 0x4a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_00569000; /* 0x569000 */
extern signed char DAT_005891f4; /* 0x5891f4 */
extern int DAT_005891f8; /* 0x5891f8 */
extern romwright_code *DAT_00589200; /* 0x589200 */
extern romwright_code *DAT_00589204; /* 0x589204 */
extern romwright_code *DAT_00589208; /* 0x589208 */
extern romwright_code *DAT_0058920c; /* 0x58920c */
extern romwright_code *DAT_00589210; /* 0x589210 */
extern romwright_code *DAT_00589214; /* 0x589214 */
extern romwright_code *DAT_00589218; /* 0x589218 */
extern romwright_code *DAT_0058921c; /* 0x58921c */
extern romwright_code *DAT_00589220; /* 0x589220 */
extern romwright_code *DAT_00589224; /* 0x589224 */
extern romwright_code *DAT_00589228; /* 0x589228 */
extern romwright_code *DAT_00589230; /* 0x589230 */
extern unsigned int DAT_00589240; /* 0x589240 */
extern unsigned int DAT_00589244; /* 0x589244 */
extern unsigned int DAT_00589248; /* 0x589248 */
extern unsigned int DAT_0058924c; /* 0x58924c */
extern unsigned int DAT_00589250; /* 0x589250 */
extern unsigned int DAT_00589254; /* 0x589254 */
extern unsigned int DAT_00589258; /* 0x589258 */
extern unsigned int DAT_0058925c; /* 0x58925c */
extern unsigned int DAT_00589260; /* 0x589260 */
extern unsigned int DAT_00589264; /* 0x589264 */
extern unsigned int DAT_00589268; /* 0x589268 */
extern unsigned int DAT_00589270; /* 0x589270 */
extern unsigned int DAT_0061a62c; /* 0x61a62c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0015a3c0. */
/* Supplied declaration required: FUN_0015a400. */
extern int FUN_0015a410(void);
extern int FUN_0015a75c(void);
/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: FUN_00170e6c. */
extern int FUN_0017169c(void);
/* Supplied declaration required: FUN_0018991c. */
/* Supplied declaration required: FUN_00189a38. */
extern int FUN_0018b6b0(void);
/* Supplied declaration required: FUN_0018b6c0. */
extern int FUN_0018b6e8(void);
/* Supplied declaration required: FUN_0018b6f8. */
extern int FUN_0018b8f0(void);
/* Supplied declaration required: FUN_0018b92c. */
/* Supplied declaration required: FUN_0018b9e0. */
/* Supplied declaration required: FUN_0018ba00. */
/* Supplied declaration required: FUN_001a3338. */
/* Supplied declaration required: nn_applet_CTR_detail_CancelParameter. */
extern unsigned int nn_applet_CTR_detail_Glance(unsigned int, unsigned int *, unsigned char *, unsigned int, int *, unsigned int);
extern void nn_applet_CTR_detail_ReplySleepNotificationCompleteToManager(void);
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00170494(void)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8 [2];
  
  temp_v0 = FUN_0018b9e0();
  temp_v1 = FUN_0018b6b0();
  if (temp_v1 != 0) {
    if (DAT_00589224 != (romwright_code *)0x0) {
      (*DAT_00589224)(DAT_00589264);
    }
    FUN_0018b6c0();
  }
  temp_v1 = FUN_0015a75c();
  if (temp_v1 != 0) {
    if (DAT_00589230 == (romwright_code *)0x0) {
      return 1;
    }
    (*DAT_00589230)(DAT_00589270);
    return 1;
  }
  if ((temp_v0 == 1) || (temp_v0 == 2)) {
    temp_v0 = FUN_0017169c();
    temp_v2 = FUN_0018b9e0();
    FUN_0018ba00();
    if (((DAT_00589200 == (romwright_code *)0x0) ||
        (temp_v1 = (*DAT_00589200)(DAT_00589240,temp_v0,temp_v2), temp_v1 != 0)) &&
       ((temp_v0 != 0 && (temp_v0 = FUN_0015a3c0(), temp_v0 == 0)))) {
      FUN_0015a400(temp_v2);
      temp_v0 = FUN_0015a3c0();
      if (temp_v0 != 1) {
        FUN_0015a3c0();
      }
    }
    return 0;
  }
  temp_v0 = FUN_0018b8f0();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0018b6e8();
    if (temp_v0 != 0) {
      if (DAT_00589228 != (romwright_code *)0x0) {
        (*DAT_00589228)(DAT_00589268);
      }
      FUN_0018b6f8();
      return 1;
    }
    temp_v2 = 1;
    temp_v5 = 0;
    temp_v3 = nn_applet_CTR_detail_Glance
                      ((unsigned int)&temp_v6,temp_v8,(unsigned char *)&DAT_00569000,0x1000,(int *)&temp_v7,(unsigned int)&temp_v5);
    if ((int)temp_v3 < 0) {
      FUN_00189a38(temp_v3,0x1707ec);
    }
    temp_v0 = temp_v5;
    if (temp_v8[0] != 2) {
      if (temp_v8[0] != 5) {
        if (temp_v8[0] != 8) {
          if (temp_v8[0] == 9) {
            FUN_00170e6c(1);
            if (DAT_00589210 != (romwright_code *)0x0) {
              (*DAT_00589210)(DAT_00589250);
            }
            temp_v2 = 0;
          }
        }
        else {
          if (DAT_0058920c != (romwright_code *)0x0) {
            (*DAT_0058920c)(DAT_0058924c);
          }
          FUN_00170e6c(0);
          temp_v2 = 0;
        }
      }
      else {
        nn_applet_CTR_detail_CancelParameter(1,temp_v6,0);
        if (DAT_00589208 != (romwright_code *)0x0) {
          (*DAT_00589208)(DAT_00589248,temp_v6,&DAT_00569000,temp_v7,temp_v0);
        }
        temp_v2 = 0;
      }
    }
    else {
      temp_v4 = 0;
      temp_v2 = DAT_00569000;
      if (temp_v7 < 0x20) {
        temp_v2 = 0;
      }
      if (DAT_00589204 != (romwright_code *)0x0) {
        (*DAT_00589204)(DAT_00589244,temp_v2,&temp_v4);
      }
      nn_applet_CTR_detail_CancelParameter(1,temp_v6,0);
      FUN_001a3338(temp_v6,3,0,0,temp_v4);
      temp_v2 = 0;
    }
    if (temp_v5 == 0) {
      return temp_v2;
    }
    software_interrupt(0x23);
    return temp_v2;
  }
  temp_v0 = FUN_0018b8f0();
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        if (((temp_v0 == 4) && (DAT_00589218 != (romwright_code *)0x0)) &&
           ((temp_v0 = FUN_0015a75c(), temp_v0 == 0 && (temp_v0 = FUN_0015a410(), temp_v0 == 0)))) {
          (*DAT_00589218)(DAT_00589258);
        }
      }
      else {
        FUN_0018991c();
        if (((DAT_00589220 != (romwright_code *)0x0) && (temp_v0 = FUN_0015a75c(), temp_v0 == 0)) &&
           (temp_v0 = FUN_0015a410(), temp_v0 == 0)) {
          (*DAT_00589220)(DAT_00589260);
        }
        temp_v2 = 5;
        FUN_00170484(temp_v2);
      }
    }
    else {
      FUN_00170484(4);
      if (((DAT_0058921c != (romwright_code *)0x0) && (temp_v0 = FUN_0015a75c(), temp_v0 == 0)) &&
         (temp_v0 = FUN_0015a410(), temp_v0 == 0)) {
        (*DAT_0058921c)(DAT_0058925c);
      }
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a62c);
      for (temp_v0 = DAT_005891f8; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
        if (*(romwright_code **)(temp_v0 + 8) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v0 + 8))();
        }
      }
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a62c);
      nn_applet_CTR_detail_ReplySleepNotificationCompleteToManager();
    }
  }
  else {
    temp_v1 = FUN_0015a75c();
    temp_v0 = 0;
    if (temp_v1 == 0) {
      temp_v1 = FUN_0015a410();
      if (temp_v1 == 0) {
        if (DAT_00589214 != (romwright_code *)0x0) {
          temp_v0 = (*DAT_00589214)(DAT_00589254);
        }
        if ((DAT_005891f4 != '\0') || (temp_v1 = FUN_0017169c(), temp_v1 == 0)) goto LAB_00170620;
        temp_v0 = 0;
      }
      temp_v2 = 3;
    }
    else {
LAB_00170620:
      if (temp_v0 == 0) {
        temp_v2 = 3;
        FUN_00170484(temp_v2);
        nn_applet_CTR_detail_ReplySleepQueryToManager(temp_v0);
        FUN_0018b92c();
        return 0;
      }
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          FUN_0018b92c();
          return 0;
        }
        temp_v2 = 1;
        FUN_00170484(temp_v2);
        FUN_0018b92c();
        return 0;
      }
      temp_v2 = 2;
    }
    FUN_00170484(temp_v2);
    nn_applet_CTR_detail_ReplySleepQueryToManager(temp_v0);
  }
  FUN_0018b92c();
  return 0;
}
