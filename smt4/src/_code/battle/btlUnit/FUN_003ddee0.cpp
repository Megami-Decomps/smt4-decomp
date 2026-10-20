/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ddee0` (_code @ 0x3ddee0, 0x6dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002266dc(...);
int FUN_002267b8(...);
int FUN_0022699c(...);
int FUN_0027da30(...);
int FUN_0027e3e8(...);
int btlMainFindEntryByListedId(...);
int btlGetMainState(...);
int FUN_003dddd0(...);

typedef struct fn_003ddee0_arg2 fn_003ddee0_arg2;
struct fn_003ddee0_arg2 {
    unsigned char pad_0x0[0x30];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x1f];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    int field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x2];
    short field_0x62; /* +0x62 */
};

/* stack frame of param_6: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_6_stack;

extern int g_btlActionReflect; /* 0x434290 */
extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlEvent; /* 0x435d48 */

/* Supplied declaration required: FUN_002266dc. */
/* Supplied declaration required: FUN_002267b8. */
/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(unsigned int, int);
/* Supplied declaration required: FUN_0027e3e8. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_003dddd0. */


unsigned int
FUN_003ddee0(int param_1,unsigned int param_2,fn_003ddee0_arg2 *param_3,int param_4,int param_5,unsigned int param_6
            )

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  
  puVar2 = (unsigned int *)btlGetMainState();
  temp_v4 = (param_3->field_0x50 & 0x10) >> 4;
  temp_v1 = FUN_0027e3e8(g_btlEvent,param_3,1);
  temp_v2 = param_3->field_0x50;
  if ((temp_v2 & 0x200) == 0) {
    temp_v0 = (short)param_1;
    temp_v3 = g_btlActionReflect;
    if ((temp_v2 & 0x800) == 0) {
      if (temp_v4 == 0) {
        param_3->field_0x50 = temp_v2 | 0x80000;
      }
      temp_v3 = param_4 * 0xc;
      puVar5 = puVar2;
      btlMainFindEntryByListedId(puVar2,(int)param_3->field_0x62);
      temp_v9 = DAT_00435d18;
      if (temp_v1 != 0 && puVar5 != (unsigned int *)0x0) {
        temp_v11 = (*puVar5 & 0x10) != 0;
        temp_v2 = *puVar5;
        if (temp_v11) {
          temp_v2 = param_6;
        }
        if (temp_v11 && temp_v2 != 0) {
          param_4 = 0xf;
          *(fn_003ddee0_arg2 **)(DAT_00435d18 + 0x3048) = param_3;
          *(unsigned int *)(temp_v9 + 0x3028) = *(unsigned int *)(temp_v9 + 0x3028) | 0x8000;
          for (temp_v9 = *(int *)(g_btlActionReflect + 8); temp_v9 != 0; temp_v9 = *(int *)(temp_v9 + 0xc)) {
          }
          temp_v9 = g_btlActionReflect;
          FUN_0022699c(g_btlActionReflect,(int)(short)((short)param_3->field_0x5c + temp_v0 + 2),0,param_2);
          *(unsigned char *)(temp_v9 + 4) = 0xb;
          *(unsigned int *)(temp_v9 + 0x28) = 2;
          *(unsigned int *)(temp_v9 + 0x4c) = 0xc0;
          *(unsigned short *)(temp_v9 + 0x26) = 1;
          *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) | 0x2000000;
          FUN_0027e3e8(g_btlEvent,param_3,0);
        }
      }
      if (param_4 == 0) {
        *(unsigned int *)(DAT_00435d18 + 0x3028) = *(unsigned int *)(DAT_00435d18 + 0x3028) | 0x8000;
      }
      switch(param_4) {
      case 0:
      case 1:
        temp_v9 = 0;
        temp_v3 = g_btlActionReflect;
        FUN_0022699c(g_btlActionReflect,(int)(short)((short)param_3->field_0x5c + temp_v0),0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 0x13;
        *(fn_003ddee0_arg2 **)(temp_v3 + 0x14) = param_3;
        *(unsigned int *)(temp_v3 + 0x4c) = 0;
        FUN_002267b8(param_3->field_0x5c + param_1,param_2,param_3);
        temp_v3 = g_btlActionReflect;
        FUN_0022699c(g_btlActionReflect,(int)(short)(temp_v0 + 5 + (short)param_3->field_0x5c),0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 0x1b;
        temp_v3 = btlGetMainState();
        if (temp_v4 != 0) {
          puVar2 = puVar2 + 0x7a6;
        }
        *(char *)(temp_v3 + 0x2f04) = *(char *)(temp_v3 + 0x2f04) + '\x01';
        *(unsigned int *)&param_3[2].field_0x30 = *(unsigned int *)&param_3[2].field_0x30 | 2;
        if (temp_v4 != 0) {
          do {
            temp_v3 = *puVar2 + temp_v9 * 0x114;
            temp_v4 = *(unsigned int *)(temp_v3 + 0x50);
            if (((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) && (temp_v4 & 0x10) != 0) &&
                (*(short *)(temp_v3 + 0x62) != param_3->field_0x62)) &&
               ((*(unsigned int *)(temp_v3 + 0xf8) & 2) == 0)) {
              temp_v10 = g_btlActionReflect;
              FUN_0022699c(g_btlActionReflect,(int)(short)((short)*(unsigned int *)(temp_v3 + 0x5c) + temp_v0),0
                           ,param_2);
              *(unsigned char *)(temp_v10 + 4) = 0x13;
              *(int *)(temp_v10 + 0x14) = temp_v3;
              *(unsigned int *)(temp_v10 + 0x4c) = 0;
              FUN_002267b8(*(int *)(temp_v3 + 0x5c) + param_1,param_2,temp_v3);
              temp_v10 = g_btlActionReflect;
              FUN_0022699c(g_btlActionReflect,
                           (int)(short)((short)*(unsigned int *)(temp_v3 + 0x5c) + temp_v0 + 5),0,param_2)
              ;
              *(unsigned char *)(temp_v10 + 4) = 0x1b;
              temp_v10 = btlGetMainState();
              *(char *)(temp_v10 + 0x2f04) = *(char *)(temp_v10 + 0x2f04) + '\x01';
              *(unsigned int *)(temp_v3 + 0xf8) = *(unsigned int *)(temp_v3 + 0xf8) | 2;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 0x6d);
        }
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
        temp_v9 = g_btlActionReflect;
        FUN_0022699c(g_btlActionReflect,(int)(short)((short)param_3->field_0x5c + temp_v0),0,param_2);
        *(unsigned char *)(temp_v9 + 4) = 0x13;
        *(fn_003ddee0_arg2 **)(temp_v9 + 0x14) = param_3;
        *(unsigned int *)(temp_v9 + 0x4c) = 0;
        if (param_4 != 9) {
          FUN_003dddd0();
        }
        else {
          FUN_002266dc(param_3->field_0x5c + param_1,param_2,param_3,9);
        }
        temp_v9 = btlGetMainState();
        *(char *)(temp_v9 + 0x2f04) = *(char *)(temp_v9 + 0x2f04) + '\x01';
        *(unsigned int *)&param_3[2].field_0x30 = *(unsigned int *)&param_3[2].field_0x30 | 2;
        temp_v9 = g_btlActionReflect;
        FUN_0022699c(g_btlActionReflect,
                     (int)(short)((short)param_3->field_0x5c + *(short *)(temp_v3 + 0x43996a) + temp_v0)
                     ,0,param_2);
        temp_v11 = temp_v4 != 0;
        if (temp_v11) {
          puVar2 = puVar2 + 0x700;
        }
        *(unsigned char *)(temp_v9 + 4) = 0x17;
        temp_v10 = 0;
        if (temp_v11) {
          puVar2 = puVar2 + 0xa6;
        }
        *(int *)(temp_v9 + 0x28) = param_4;
        if (temp_v11) {
          do {
            temp_v9 = *puVar2 + temp_v10 * 0x114;
            temp_v4 = *(unsigned int *)(temp_v9 + 0x50);
            if (((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) && (temp_v4 & 0x10) != 0) &&
                (*(short *)(temp_v9 + 0x62) != param_3->field_0x62)) &&
               ((*(unsigned int *)(temp_v9 + 0xf8) & 2) == 0)) {
              temp_v8 = g_btlActionReflect;
              FUN_0022699c(g_btlActionReflect,(int)(short)((short)*(unsigned int *)(temp_v9 + 0x5c) + temp_v0),
                           0,param_2);
              *(unsigned char *)(temp_v8 + 4) = 0x13;
              *(int *)(temp_v8 + 0x14) = temp_v9;
              *(unsigned int *)(temp_v8 + 0x4c) = 0;
              if (param_4 != 9) {
                if ((*(unsigned int *)(temp_v9 + 0x50) & 1) != 0) {
                  temp_v8 = *(int *)(g_btlActionReflect + 8);
                  do {
                    if (temp_v8 == 0) {
                      temp_v8 = g_btlActionReflect;
                      FUN_0022699c(g_btlActionReflect,(int)(short)((short)*(int *)(temp_v9 + 0x5c) + temp_v0)
                                   ,0);
                      temp_v5 = btlGetMainState();
                      FUN_0027da30(temp_v5,(int)*(short *)(temp_v9 + 0x62));
                      temp_v6 = btlGetMainState();
                      temp_v7 = FUN_0027dab0(temp_v6,temp_v9);
                      if (temp_v7 < 0) {
                        temp_v7 = 0;
                      }
                      *(unsigned char *)(temp_v8 + 4) = 0x25;
                      *(int *)(temp_v8 + 0x14) = temp_v9;
                      *(int *)(temp_v8 + 0x28) = param_4;
                      *(short *)(temp_v8 + 0x24) = (short)*(unsigned int *)(temp_v5 + temp_v7 * 4 + 0xc);
                      break;
                    }
                    temp_v4 = (unsigned int)*(unsigned char *)(temp_v8 + 4);
                    temp_v11 = temp_v4 == 0x25;
                    if (temp_v11) {
                      temp_v4 = *(unsigned int *)(temp_v8 + 8);
                    }
                    temp_v12 = temp_v11 && temp_v4 == param_2;
                    if (temp_v11 && temp_v4 == param_2) {
                      temp_v12 = *(int *)(temp_v8 + 0x14) == temp_v9;
                    }
                    temp_v8 = *(int *)(temp_v8 + 0xc);
                  } while (!temp_v12);
                }
              }
              else {
                FUN_002266dc(*(int *)(temp_v9 + 0x5c) + param_1,param_2,temp_v9,9);
              }
              temp_v8 = g_btlActionReflect;
              FUN_0022699c(g_btlActionReflect,
                           (int)(short)((short)*(unsigned int *)(temp_v9 + 0x5c) +
                                        *(short *)(temp_v3 + 0x43996a) + temp_v0),0,param_2);
              *(unsigned char *)(temp_v8 + 4) = 0x17;
              *(int *)(temp_v8 + 0x28) = param_4;
              temp_v8 = btlGetMainState();
              *(char *)(temp_v8 + 0x2f04) = *(char *)(temp_v8 + 0x2f04) + '\x01';
              *(unsigned int *)(temp_v9 + 0xf8) = *(unsigned int *)(temp_v9 + 0xf8) | 2;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 0x6d);
        }
        break;
      case 0xf:
        if ((*puVar5 & 0x8000000) == 0) {
          temp_v3 = g_btlActionReflect;
          FUN_0022699c(g_btlActionReflect,(int)temp_v0,0,param_2);
          temp_v9 = btlGetMainState();
          *(unsigned int *)(temp_v9 + 0x88) = 8;
          *(unsigned char *)(temp_v3 + 4) = 0x28;
          *(fn_003ddee0_arg2 **)(temp_v3 + 0x14) = param_3;
          *puVar5 = *puVar5 | 0x8000000;
        }
      }
      temp_v3 = g_btlActionReflect;
    }
    g_btlActionReflect = temp_v3;
    if ((param_5 != 0) && (temp_v1 == 0)) {
      FUN_0022699c(temp_v3,(int)temp_v0,0,param_2);
      *(unsigned char *)(temp_v3 + 4) = 0x33;
      *(fn_003ddee0_arg2 **)(temp_v3 + 0x14) = param_3;
    }
  }
  return 1;
}

} /* extern "C" */
