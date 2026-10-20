/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fde5c` (_code @ 0x4fde5c, 0x768 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(...);
int FUN_001568f8(...);
int FUN_003f0254(...);
int FUN_003f06b4(...);
int FUN_003f0e20(...);
int FUN_004102d8(...);
int FUN_004d7a60(...);
int FUN_004fd3f0(...);
int FUN_004fd968(...);
int FUN_004feb50(...);

typedef struct fn_004fde5c_arg2 fn_004fde5c_arg2;
struct fn_004fde5c_arg2 {
    unsigned char pad_0x0[0x34];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x1b];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x10];
    int field_0x64; /* +0x64 */
    unsigned char pad_0x68[0x2];
    short field_0x6a; /* +0x6a */
};

/* stack frame of param_6: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_6_stack;

extern int g_btlActionReflect; /* 0x5712f0 */
extern int g_btlCamera; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int g_btlEvent; /* 0x573898 */
extern unsigned int DAT_00573c18; /* 0x573c18 */
extern unsigned int DAT_00573c1c; /* 0x573c1c */
extern unsigned int DAT_00573c30; /* 0x573c30 */
extern unsigned int DAT_00573c34; /* 0x573c34 */
extern unsigned int DAT_00573c38; /* 0x573c38 */
extern unsigned int DAT_00573c3c; /* 0x573c3c */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_003ef9e0(unsigned int, int);
/* Supplied declaration required: FUN_003f0254. */
/* Supplied declaration required: FUN_003f06b4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004102d8. */
/* Supplied declaration required: FUN_004d7a60. */
/* Supplied declaration required: FUN_004fd3f0. */
/* Supplied declaration required: FUN_004fd968. */
/* Supplied declaration required: FUN_004feb50. */


unsigned int
FUN_004fde5c(int param_1,unsigned int param_2,fn_004fde5c_arg2 *param_3,int param_4,int param_5,int param_6)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  
  puVar2 = (unsigned int *)btlGetMainState();
  temp_v8 = (param_3->field_0x50 & 0x10) >> 4;
  temp_v1 = FUN_004d7a60(g_btlEvent,param_3,1);
  if ((temp_v1 != 0) && (puVar4 = puVar2, FUN_003f06b4(puVar2,param_3), puVar4 != (unsigned int *)0x0)) {
    puVar4 = puVar2;
    FUN_003f0e20(puVar2,(int)param_3->field_0x6a);
    temp_v9 = *puVar4 | DAT_00573c38;
    puVar4[1] = DAT_00573c3c | puVar4[1];
    *puVar4 = temp_v9;
    puVar4 = puVar2;
    FUN_003f0254(puVar2,param_3);
    if (puVar4 == (unsigned int *)0x0) {
      temp_v1 = 0;
    }
  }
  temp_v9 = param_3->field_0x50;
  temp_v0 = (short)param_1;
  temp_v2 = g_btlActionReflect;
  if ((temp_v9 & 0x800) != 0 && (temp_v9 & 0x200) != 0) {
    g_btlActionReflect = temp_v2;
    if ((param_5 != 0) && (temp_v1 == 0)) {
      FUN_004102d8(temp_v2,(int)temp_v0,0,param_2);
      *(unsigned char *)(temp_v2 + 4) = 0x3e;
      *(fn_004fde5c_arg2 **)(temp_v2 + 0x14) = param_3;
    }
    return 1;
  }
  if (temp_v8 == 0) {
    param_3->field_0x50 = temp_v9 | 0x80000;
  }
  temp_v2 = param_4 * 0xc;
  puVar4 = puVar2;
  FUN_003f0e20(puVar2,(int)param_3->field_0x6a);
  temp_v7 = DAT_00573808;
  if (temp_v1 != 0 && puVar4 != (unsigned int *)0x0) {
    temp_v11 = (*puVar4 & DAT_00573c18) != 0 || (puVar4[1] & DAT_00573c1c) != 0;
    temp_v10 = 0;
    if (temp_v11) {
      temp_v10 = param_6;
    }
    if (temp_v11 && temp_v10 != 0) {
      param_4 = 0xf;
      *(fn_004fde5c_arg2 **)(DAT_00573808 + 0x33bc) = param_3;
      *(unsigned int *)(temp_v7 + 0x339c) = *(unsigned int *)(temp_v7 + 0x339c) | 0x8000;
      temp_v7 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,(int)(short)((short)param_3->field_0x64 + temp_v0 + 2),0,param_2);
      *(unsigned char *)(temp_v7 + 4) = 0xf;
      *(unsigned int *)(temp_v7 + 0x28) = 2;
      *(unsigned int *)(temp_v7 + 0x4c) = 0xc0;
      *(unsigned short *)(temp_v7 + 0x26) = 1;
      *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x2000000;
      FUN_004d7a60(g_btlEvent,param_3,0);
    }
  }
  if ((*puVar4 & DAT_00573c18) == 0 && (puVar4[1] & DAT_00573c1c) == 0) {
    if (param_4 != 0) {
      param_4 = 0;
    }
    *(unsigned int *)(DAT_00573808 + 0x339c) = *(unsigned int *)(DAT_00573808 + 0x339c) | 0x8000;
  }
  else if (param_4 == 0) {
    *(unsigned int *)(DAT_00573808 + 0x339c) = *(unsigned int *)(DAT_00573808 + 0x339c) | 0x8000;
  }
  switch(param_4) {
  case 0:
  case 1:
    temp_v7 = 0;
    temp_v2 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,(int)(short)((short)param_3->field_0x64 + temp_v0),0,param_2);
    *(unsigned char *)(temp_v2 + 4) = 0x1b;
    *(fn_004fde5c_arg2 **)(temp_v2 + 0x14) = param_3;
    *(unsigned int *)(temp_v2 + 0x4c) = 0;
    FUN_004fd3f0(param_3->field_0x64 + param_1,param_2,param_3);
    temp_v2 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,(int)(short)((short)param_3->field_0x64 + temp_v0 + 5),0,param_2);
    *(unsigned char *)(temp_v2 + 4) = 0x24;
    temp_v2 = btlGetMainState();
    if (temp_v8 != 0) {
      puVar2 = puVar2 + 0x7b5;
    }
    *(char *)(temp_v2 + 0x3004) = *(char *)(temp_v2 + 0x3004) + '\x01';
    *(unsigned int *)&param_3[2].field_0x34 = *(unsigned int *)&param_3[2].field_0x34 | 2;
    if (temp_v8 != 0) {
      do {
        temp_v2 = *puVar2 + temp_v7 * 0x1d0;
        temp_v8 = *(unsigned int *)(temp_v2 + 0x50);
        if (((((temp_v8 & 1) != 0 && (temp_v8 & 2) != 0) && (temp_v8 & 0x10) != 0) &&
            (*(short *)(temp_v2 + 0x6a) != param_3->field_0x6a)) &&
           ((*(unsigned int *)(temp_v2 + 0x10c) & 2) == 0)) {
          temp_v10 = g_btlActionReflect;
          FUN_004102d8(g_btlActionReflect,(int)(short)((short)*(unsigned int *)(temp_v2 + 100) + temp_v0),0,
                       param_2);
          *(unsigned char *)(temp_v10 + 4) = 0x1b;
          *(int *)(temp_v10 + 0x14) = temp_v2;
          *(unsigned int *)(temp_v10 + 0x4c) = 0;
          FUN_004fd3f0(*(int *)(temp_v2 + 100) + param_1,param_2,temp_v2);
          temp_v10 = g_btlActionReflect;
          FUN_004102d8(g_btlActionReflect,(int)(short)((short)*(unsigned int *)(temp_v2 + 100) + temp_v0 + 5),0,
                       param_2);
          *(unsigned char *)(temp_v10 + 4) = 0x24;
          temp_v10 = btlGetMainState();
          *(char *)(temp_v10 + 0x3004) = *(char *)(temp_v10 + 0x3004) + '\x01';
          *(unsigned int *)(temp_v2 + 0x10c) = *(unsigned int *)(temp_v2 + 0x10c) | 2;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0x6d);
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
    temp_v7 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,(int)(short)((short)param_3->field_0x64 + temp_v0),0,param_2);
    *(unsigned char *)(temp_v7 + 4) = 0x1b;
    *(fn_004fde5c_arg2 **)(temp_v7 + 0x14) = param_3;
    *(unsigned int *)(temp_v7 + 0x4c) = 0;
    if (param_4 != 9) {
      FUN_004fd968();
    }
    else {
      FUN_004feb50(param_3->field_0x64 + param_1,param_2,param_3,9);
    }
    temp_v7 = btlGetMainState();
    *(char *)(temp_v7 + 0x3004) = *(char *)(temp_v7 + 0x3004) + '\x01';
    *(unsigned int *)&param_3[2].field_0x34 = *(unsigned int *)&param_3[2].field_0x34 | 2;
    temp_v7 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,
                 (int)(short)((short)param_3->field_0x64 + *(short *)(temp_v2 + 0x57a57e) + temp_v0),0,
                 param_2);
    temp_v11 = temp_v8 != 0;
    if (temp_v11) {
      puVar2 = puVar2 + 0x700;
    }
    *(unsigned char *)(temp_v7 + 4) = 0x20;
    temp_v10 = 0;
    if (temp_v11) {
      puVar2 = puVar2 + 0xb5;
    }
    *(int *)(temp_v7 + 0x28) = param_4;
    if (temp_v11) {
      do {
        temp_v7 = *puVar2 + temp_v10 * 0x1d0;
        temp_v8 = *(unsigned int *)(temp_v7 + 0x50);
        if (((((temp_v8 & 1) != 0 && (temp_v8 & 2) != 0) && (temp_v8 & 0x10) != 0) &&
            (*(short *)(temp_v7 + 0x6a) != param_3->field_0x6a)) &&
           ((*(unsigned int *)(temp_v7 + 0x10c) & 2) == 0)) {
          temp_v6 = g_btlActionReflect;
          FUN_004102d8(g_btlActionReflect,(int)(short)((short)*(unsigned int *)(temp_v7 + 100) + temp_v0),0,
                       param_2);
          *(unsigned char *)(temp_v6 + 4) = 0x1b;
          *(int *)(temp_v6 + 0x14) = temp_v7;
          *(unsigned int *)(temp_v6 + 0x4c) = 0;
          if (param_4 != 9) {
            if ((*(unsigned int *)(temp_v7 + 0x50) & 1) != 0) {
              temp_v6 = *(int *)(g_btlActionReflect + 8);
              do {
                if (temp_v6 == 0) {
                  temp_v6 = g_btlActionReflect;
                  FUN_004102d8(g_btlActionReflect,(int)(short)((short)*(int *)(temp_v7 + 100) + temp_v0),0);
                  temp_v3 = btlGetMainState();
                  FUN_001568f8(temp_v3,(int)*(short *)(temp_v7 + 0x6a));
                  temp_v4 = btlGetMainState();
                  temp_v5 = FUN_003ef9e0(temp_v4,temp_v7);
                  if (temp_v5 < 0) {
                    temp_v5 = 0;
                  }
                  *(unsigned char *)(temp_v6 + 4) = 0x2f;
                  *(int *)(temp_v6 + 0x14) = temp_v7;
                  *(int *)(temp_v6 + 0x28) = param_4;
                  *(short *)(temp_v6 + 0x24) = (short)*(unsigned int *)(temp_v3 + temp_v5 * 4 + 0xc);
                  break;
                }
                temp_v8 = (unsigned int)*(unsigned char *)(temp_v6 + 4);
                temp_v11 = temp_v8 == 0x2f;
                if (temp_v11) {
                  temp_v8 = *(unsigned int *)(temp_v6 + 8);
                }
                temp_v12 = temp_v11 && temp_v8 == param_2;
                if (temp_v11 && temp_v8 == param_2) {
                  temp_v12 = *(int *)(temp_v6 + 0x14) == temp_v7;
                }
                temp_v6 = *(int *)(temp_v6 + 0xc);
              } while (!temp_v12);
            }
          }
          else {
            FUN_004feb50(*(int *)(temp_v7 + 100) + param_1,param_2,temp_v7,9);
          }
          temp_v6 = g_btlActionReflect;
          FUN_004102d8(g_btlActionReflect,
                       (int)(short)((short)*(unsigned int *)(temp_v7 + 100) +
                                    *(short *)(temp_v2 + 0x57a57e) + temp_v0),0,param_2);
          *(unsigned char *)(temp_v6 + 4) = 0x20;
          *(int *)(temp_v6 + 0x28) = param_4;
          temp_v6 = btlGetMainState();
          *(char *)(temp_v6 + 0x3004) = *(char *)(temp_v6 + 0x3004) + '\x01';
          *(unsigned int *)(temp_v7 + 0x10c) = *(unsigned int *)(temp_v7 + 0x10c) | 2;
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 0x6d);
    }
    break;
  case 0xf:
    if ((DAT_00573c30 & *puVar4) == 0 && (DAT_00573c34 & puVar4[1]) == 0) {
      temp_v2 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,(int)temp_v0,0,param_2);
      temp_v7 = btlGetMainState();
      *(unsigned int *)(temp_v7 + 0xa8) = 8;
      *(unsigned char *)(temp_v2 + 4) = 0x32;
      *(fn_004fde5c_arg2 **)(temp_v2 + 0x14) = param_3;
      temp_v8 = puVar4[1] | DAT_00573c34;
      *puVar4 = DAT_00573c30 | *puVar4;
      puVar4[1] = temp_v8;
    }
  }
  temp_v2 = g_btlActionReflect;
  g_btlActionReflect = temp_v2;
  if ((param_5 != 0) && (temp_v1 == 0)) {
    FUN_004102d8(temp_v2,(int)temp_v0,0,param_2);
    *(unsigned char *)(temp_v2 + 4) = 0x3e;
    *(fn_004fde5c_arg2 **)(temp_v2 + 0x14) = param_3;
  }
  return 1;
}

} /* extern "C" */
