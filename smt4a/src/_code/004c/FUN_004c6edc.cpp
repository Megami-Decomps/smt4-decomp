/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6edc` (_code @ 0x4c6edc, 0x120c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0064(...);
int FUN_004bd354(...);

int btlGetMainState(void);
int FUN_0017760c(...);
int FUN_001aba54(void);
int FUN_003f0e20(...);
int FUN_004c53fc(...);
int FUN_004c571c(...);

typedef struct fn_004c6edc_arg0 fn_004c6edc_arg0;
typedef struct fn_004c6edc_arg1 fn_004c6edc_arg1;
struct fn_004c6edc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x2e];
    unsigned char field_0x32; /* +0x32 */
    unsigned char field_0x33; /* +0x33 */
    unsigned char field_0x34; /* +0x34 */
    unsigned char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x1];
    unsigned char field_0x37; /* +0x37 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char field_0x39; /* +0x39 */
    unsigned char pad_0x3a[0x2];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x1];
    unsigned char field_0x42; /* +0x42 */
    unsigned char pad_0x43[0xb];
    unsigned char field_0x4e; /* +0x4e */
    unsigned char pad_0x4f[0x8];
    unsigned char field_0x57; /* +0x57 */
    unsigned char pad_0x58[0x38];
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x8];
    undefined4 field_0xa0; /* +0xa0 */
    unsigned char pad_0xa4[0x7c];
    void *field_0x120; /* +0x120 */
    unsigned char pad_0x124[0x30];
    undefined4 field_0x154; /* +0x154 */
    unsigned char pad_0x158[0xe8];
    undefined4 field_0x240; /* +0x240 */
    unsigned char pad_0x244[0x14];
    undefined4 field_0x258; /* +0x258 */
    undefined4 field_0x25c; /* +0x25c */
    unsigned char pad_0x260[0xd2];
    undefined2 field_0x332; /* +0x332 */
    undefined2 field_0x334; /* +0x334 */
    unsigned char pad_0x336[0xc2];
    void *field_0x3f8; /* +0x3f8 */
    undefined4 field_0x3fc; /* +0x3fc */
    unsigned char pad_0x400[0x4];
    void *field_0x404; /* +0x404 */
};
struct fn_004c6edc_arg1 {
    unsigned char pad_0x0[0x32];
    char field_0x32; /* +0x32 */
    char field_0x33; /* +0x33 */
    char field_0x34; /* +0x34 */
    char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x1];
    char field_0x37; /* +0x37 */
    byte field_0x38; /* +0x38 */
    byte field_0x39; /* +0x39 */
    unsigned char pad_0x3a[0x2];
    uint field_0x3c; /* +0x3c */
    char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x1];
    short field_0x42; /* +0x42 */
    unsigned char pad_0x44[0xa];
    byte field_0x4e; /* +0x4e */
    unsigned char pad_0x4f[0x8];
    byte field_0x57; /* +0x57 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571400; /* 0x571400 */
extern unsigned int DAT_00571404; /* 0x571404 */
extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_0017760c. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003e0064. */
extern int FUN_003ea278(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bd354. */
/* Supplied declaration required: FUN_004c53fc. */
/* Supplied declaration required: FUN_004c571c. */


int FUN_004c6edc(fn_004c6edc_arg0 *param_1,fn_004c6edc_arg1 *param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int unaff_r8;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v6 = 0;
  puVar2 = (unsigned int *)btlGetMainState();
  puVar3 = puVar2;
  FUN_003f0e20(puVar2,param_1);
  FUN_001aba54();
  if (param_2 == (fn_004c6edc_arg1 *)0x0) {
    return 0;
  }
  temp_v7 = 0;
  if ((param_2->field_0x33 != '\0') && (temp_v1 = FUN_003ea278(puVar2,puVar3), temp_v1 == 0)) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x128);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = FUN_004c53fc(0x2d);
    if (temp_v1 == temp_v2) {
      temp_v1 = (int)param_2->field_0x33;
      if (temp_v1 != -5) {
        if (temp_v1 != -6) {
          if (temp_v1 != -7) {
            if (temp_v1 != -9) {
              temp_v6 = FUN_004c571c(param_1,7,temp_v1,param_3);
              if (temp_v6 < 0) {
                temp_v6 = -temp_v6;
              }
            }
            else {
              temp_v2 = FUN_004c53fc(7);
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              unaff_r8 = temp_v2;
              if (temp_v1 != 0) {
                *(int *)(temp_v1 + 0x90) = unaff_r8;
              }
            }
          }
          else {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              unaff_r8 = *(int *)(temp_v1 + 0x90);
            }
            if (temp_v1 != 0 && unaff_r8 != 0) {
              temp_v2 = btlGetMainState();
              FUN_003f0e20(temp_v2,param_1);
              temp_v1 = 0;
              if (temp_v2 != 0) {
                temp_v1 = *(int *)(temp_v2 + 0x120);
              }
              if (temp_v2 == 0 || temp_v1 == 0) {
                if (unaff_r8 < 0) {
                  unaff_r8 = -unaff_r8;
                }
                temp_v1 = btlGetMainState();
                FUN_003f0e20(temp_v1,param_1);
                temp_v2 = 0;
                temp_v6 = unaff_r8;
                unaff_r8 = temp_v2;
                if (temp_v1 != 0) {
                  *(int *)(temp_v1 + 0x90) = unaff_r8;
                }
              }
            }
          }
        }
        else {
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x90) < 0)) {
            unaff_r8 = -*(int *)(temp_v1 + 0x90);
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            temp_v2 = 0;
            temp_v6 = unaff_r8;
            unaff_r8 = temp_v2;
            if (temp_v1 != 0) {
              *(int *)(temp_v1 + 0x90) = unaff_r8;
            }
          }
        }
      }
      else {
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_1);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = *(int *)(temp_v2 + 0x90);
          unaff_r8 = temp_v1;
        }
        if ((temp_v2 != 0 && unaff_r8 != 0) && -1 < temp_v1) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v1 = 0;
          if (temp_v2 != 0) {
            temp_v1 = *(int *)(temp_v2 + 0x120);
          }
          if (temp_v2 == 0 || temp_v1 == 0) {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            temp_v2 = 0;
            temp_v6 = unaff_r8;
            unaff_r8 = temp_v2;
            if (temp_v1 != 0) {
              *(int *)(temp_v1 + 0x90) = unaff_r8;
            }
          }
        }
      }
    }
    FUN_004c571c(param_1,0x2d,1,0);
  }
  if ((param_2->field_0x32 != '\0') && (temp_v1 = FUN_003ea278(puVar2,puVar3), temp_v1 == 0)) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 300);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = FUN_004c53fc(0x2e);
    if (temp_v1 == temp_v2) {
      temp_v1 = (int)param_2->field_0x32;
      if (temp_v1 != -5) {
        if (temp_v1 != -6) {
          if (temp_v1 != -7) {
            if (temp_v1 != -9) {
              temp_v1 = FUN_004c571c(param_1,8,temp_v1,param_3);
              if (temp_v1 < 0) {
                temp_v1 = -temp_v1;
              }
              temp_v6 = temp_v6 + temp_v1;
            }
            else {
              unaff_r8 = FUN_004c53fc(8);
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              if (temp_v1 != 0) {
                *(int *)(temp_v1 + 0x94) = unaff_r8;
              }
            }
          }
          else {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              unaff_r8 = *(int *)(temp_v1 + 0x94);
            }
            if (temp_v1 != 0 && unaff_r8 != 0) {
              temp_v2 = btlGetMainState();
              FUN_003f0e20(temp_v2,param_1);
              temp_v1 = 0;
              if (temp_v2 != 0) {
                temp_v1 = *(int *)(temp_v2 + 0x120);
              }
              if (temp_v2 == 0 || temp_v1 == 0) {
                if (unaff_r8 < 0) {
                  unaff_r8 = -unaff_r8;
                }
                temp_v1 = btlGetMainState();
                FUN_003f0e20(temp_v1,param_1);
                temp_v6 = temp_v6 + unaff_r8;
                unaff_r8 = 0;
                if (temp_v1 != 0) {
                  *(int *)(temp_v1 + 0x94) = unaff_r8;
                }
              }
            }
          }
        }
        else {
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x94) < 0)) {
            unaff_r8 = -*(int *)(temp_v1 + 0x94);
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            temp_v6 = temp_v6 + unaff_r8;
            unaff_r8 = 0;
            if (temp_v1 != 0) {
              *(int *)(temp_v1 + 0x94) = unaff_r8;
            }
          }
        }
      }
      else {
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_1);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = *(int *)(temp_v2 + 0x94);
          unaff_r8 = temp_v1;
        }
        if ((temp_v2 != 0 && unaff_r8 != 0) && -1 < temp_v1) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v1 = 0;
          if (temp_v2 != 0) {
            temp_v1 = *(int *)(temp_v2 + 0x120);
          }
          if (temp_v2 == 0 || temp_v1 == 0) {
            temp_v6 = temp_v6 + unaff_r8;
            unaff_r8 = 0;
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              *(int *)(temp_v1 + 0x94) = unaff_r8;
            }
          }
        }
      }
    }
    FUN_004c571c(param_1,0x2e,1,0);
  }
  if ((param_2->field_0x35 != '\0') && (temp_v1 = FUN_003ea278(puVar2,puVar3), temp_v1 == 0)) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x130);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = FUN_004c53fc(0x2f);
    if (temp_v1 == temp_v2) {
      temp_v1 = (int)param_2->field_0x35;
      if (temp_v1 != -5) {
        if (temp_v1 != -6) {
          if (temp_v1 != -7) {
            if (temp_v1 != -9) {
              temp_v1 = FUN_004c571c(param_1,0xb,temp_v1,param_3);
              if (temp_v1 < 0) {
                temp_v1 = -temp_v1;
              }
              temp_v6 = temp_v6 + temp_v1;
              FUN_004c571c(param_1,9,(int)param_2->field_0x35,param_3);
            }
            else {
              temp_v4 = FUN_004c53fc(0xb);
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              if (temp_v1 != 0) {
                *(unsigned int *)(temp_v1 + 0xa0) = temp_v4;
              }
              unaff_r8 = FUN_004c53fc(9);
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              if (temp_v1 != 0) {
                *(int *)(temp_v1 + 0x98) = unaff_r8;
              }
            }
          }
          else {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              unaff_r8 = *(int *)(temp_v1 + 0xa0);
            }
            if (temp_v1 != 0 && unaff_r8 != 0) {
              temp_v2 = btlGetMainState();
              FUN_003f0e20(temp_v2,param_1);
              temp_v1 = 0;
              if (temp_v2 != 0) {
                temp_v1 = *(int *)(temp_v2 + 0x120);
              }
              if (temp_v2 == 0 || temp_v1 == 0) {
                if (unaff_r8 < 0) {
                  unaff_r8 = -unaff_r8;
                }
                temp_v6 = temp_v6 + unaff_r8;
                unaff_r8 = 0;
                temp_v1 = btlGetMainState();
                FUN_003f0e20(temp_v1,param_1);
                if (temp_v1 != 0) {
                  *(unsigned int *)(temp_v1 + 0xa0) = 0;
                }
              }
            }
            temp_v2 = btlGetMainState();
            FUN_003f0e20(temp_v2,param_1);
            temp_v1 = 0;
            if (temp_v2 != 0) {
              temp_v1 = *(int *)(temp_v2 + 0x98);
            }
            if (temp_v2 != 0 && temp_v1 != 0) {
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              goto joined_r0x004c7570;
            }
          }
        }
        else {
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0xa0) < 0)) {
            temp_v6 = temp_v6 - *(int *)(temp_v1 + 0xa0);
            unaff_r8 = 0;
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              *(unsigned int *)(temp_v1 + 0xa0) = 0;
            }
          }
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x98) < 0)) {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
joined_r0x004c7570:
            unaff_r8 = 0;
            if (temp_v1 != 0) {
              *(int *)(temp_v1 + 0x98) = unaff_r8;
            }
          }
        }
      }
      else {
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_1);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = *(int *)(temp_v2 + 0xa0);
          unaff_r8 = temp_v1;
        }
        if ((temp_v2 != 0 && unaff_r8 != 0) && -1 < temp_v1) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v1 = 0;
          if (temp_v2 != 0) {
            temp_v1 = *(int *)(temp_v2 + 0x120);
          }
          if (temp_v2 == 0 || temp_v1 == 0) {
            temp_v6 = temp_v6 + unaff_r8;
            unaff_r8 = 0;
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              *(unsigned int *)(temp_v1 + 0xa0) = 0;
            }
          }
        }
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_1);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = *(int *)(temp_v2 + 0x98);
        }
        if ((temp_v2 != 0 && temp_v1 != 0) && -1 < temp_v1) {
          unaff_r8 = 0;
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if (temp_v1 != 0) {
            *(int *)(temp_v1 + 0x98) = unaff_r8;
          }
        }
      }
    }
    FUN_004c571c(param_1,0x2f,1,0);
    FUN_004c571c(param_1,0x31,1,0);
  }
  if ((param_2->field_0x34 != '\0') && (temp_v1 = FUN_003ea278(puVar2,puVar3), temp_v1 == 0)) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x134);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = FUN_004c53fc(0x30);
    if (temp_v1 == temp_v2) {
      temp_v1 = (int)param_2->field_0x34;
      if (temp_v1 != -5) {
        if (temp_v1 != -6) {
          if (temp_v1 != -7) {
            if (param_2->field_0x35 != -9) {
              temp_v1 = FUN_004c571c(param_1,10,temp_v1,param_3);
              if (temp_v1 < 0) {
                temp_v1 = -temp_v1;
              }
              temp_v6 = temp_v6 + temp_v1;
            }
            else {
              temp_v4 = FUN_004c53fc(10);
              temp_v1 = btlGetMainState();
              FUN_003f0e20(temp_v1,param_1);
              if (temp_v1 != 0) {
                *(unsigned int *)(temp_v1 + 0x9c) = temp_v4;
              }
            }
          }
          else {
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              unaff_r8 = *(int *)(temp_v1 + 0x9c);
            }
            if (temp_v1 != 0 && unaff_r8 != 0) {
              temp_v2 = btlGetMainState();
              FUN_003f0e20(temp_v2,param_1);
              temp_v1 = 0;
              if (temp_v2 != 0) {
                temp_v1 = *(int *)(temp_v2 + 0x120);
              }
              if (temp_v2 == 0 || temp_v1 == 0) {
                if (unaff_r8 < 0) {
                  unaff_r8 = -unaff_r8;
                }
                temp_v1 = btlGetMainState();
                FUN_003f0e20(temp_v1,param_1);
                temp_v4 = 0;
                temp_v6 = temp_v6 + unaff_r8;
                if (temp_v1 != 0) {
                  *(unsigned int *)(temp_v1 + 0x9c) = temp_v4;
                }
              }
            }
          }
        }
        else {
          temp_v1 = btlGetMainState();
          FUN_003f0e20(temp_v1,param_1);
          if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x9c) < 0)) {
            unaff_r8 = -*(int *)(temp_v1 + 0x9c);
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            temp_v4 = 0;
            temp_v6 = temp_v6 + unaff_r8;
            if (temp_v1 != 0) {
              *(unsigned int *)(temp_v1 + 0x9c) = temp_v4;
            }
          }
        }
      }
      else {
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,param_1);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = *(int *)(temp_v2 + 0x9c);
          unaff_r8 = temp_v1;
        }
        if ((temp_v2 != 0 && unaff_r8 != 0) && -1 < temp_v1) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v1 = 0;
          if (temp_v2 != 0) {
            temp_v1 = *(int *)(temp_v2 + 0x120);
          }
          if (temp_v2 == 0 || temp_v1 == 0) {
            temp_v6 = temp_v6 + unaff_r8;
            temp_v4 = 0;
            temp_v1 = btlGetMainState();
            FUN_003f0e20(temp_v1,param_1);
            if (temp_v1 != 0) {
              *(unsigned int *)(temp_v1 + 0x9c) = temp_v4;
            }
          }
        }
      }
    }
    FUN_004c571c(param_1,0x30,1,0);
  }
  if ((param_2->field_0x38 & 1) != 0) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x90);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_1);
    if (temp_v2 != 0) {
      *(int *)(temp_v2 + 0x90) = -temp_v1;
    }
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x94);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_1);
    if (temp_v2 != 0) {
      *(int *)(temp_v2 + 0x94) = -temp_v1;
    }
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x98);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_1);
    if (temp_v2 != 0) {
      *(int *)(temp_v2 + 0x98) = -temp_v1;
    }
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0x9c);
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,param_1);
    if (temp_v2 != 0) {
      *(int *)(temp_v2 + 0x9c) = -temp_v1;
    }
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      temp_v7 = *(int *)(temp_v1 + 0xa0);
    }
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(int *)(temp_v1 + 0xa0) = -temp_v7;
    }
  }
  if ((param_2->field_0x38 & 2) != 0) {
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    temp_v7 = 0;
    if (temp_v1 != 0) {
      temp_v7 = *(int *)(temp_v1 + 0xa8);
    }
    if (temp_v1 == 0 || temp_v7 == 0) {
      temp_v7 = btlGetMainState();
      FUN_003f0e20(temp_v7,param_1);
      if (temp_v7 != 0) {
        *(unsigned int *)(temp_v7 + 0xa8) = 3;
      }
    }
  }
  if ((param_2->field_0x3c & 0x800000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0xe,(param_2->field_0x3c & 0xffffff) >> 0x17,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x1000000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0xf,(param_2->field_0x3c & 0x1ffffff) >> 0x18,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x80) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x10,(param_2->field_0x3c & 0xff) >> 7,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x100) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x11,(param_2->field_0x3c & 0x1ff) >> 8,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x2000000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x13,(param_2->field_0x3c & 0x3ffffff) >> 0x19,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x100000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x14,(param_2->field_0x3c & 0x1fffff) >> 0x14,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x3c & 0x200000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x15,(param_2->field_0x3c & 0x3fffff) >> 0x15,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x38 & 0x20) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x18,(param_2->field_0x38 & 0x3f) >> 5,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x38 & 0x40) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x19,(param_2->field_0x38 & 0x7f) >> 6,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x38 & 8) != 0) {
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xc4) = 0;
    }
  }
  if ((param_2->field_0x38 & 0x10) != 0) {
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 200) = 0;
    }
  }
  if ((param_2->field_0x3c & 0x400000) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x16,(param_2->field_0x3c & 0x7fffff) >> 0x16,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ('\0' < param_2->field_0x40) {
    *(unsigned char *)((int)puVar3 + (char)(param_2->field_0x40 - '\x01') + 0x2f5) = 1;
  }
  if (param_2->field_0x4e != 0) {
    puVar3[0x55] = (unsigned int)param_2->field_0x4e;
  }
  temp_v8 = (unsigned int)param_2->field_0x57;
  if (temp_v8 != 0 && puVar3 != (unsigned int *)0x0) {
    temp_v3 = *puVar3;
    temp_v5 = puVar3[1];
    if (!((temp_v3 & DAT_005713f8) == 0 && (temp_v5 & DAT_005713fc) == 0)) {
      if ((puVar3[0xfe] != 0) &&
         (temp_v3 = (unsigned int)*(short *)(puVar3[0xfe] + 0x1c), puVar3[0x97] == temp_v3)) {
        puVar3[0x97] = (int)(temp_v3 * temp_v8) / 100;
      }
    }
    else if (!((temp_v3 & DAT_00571408) == 0 && (temp_v5 & DAT_0057140c) == 0)) {
      if ((puVar3[0xff] != 0) && (temp_v8 = FUN_0017760c(), temp_v8 == puVar3[0x97])) {
        temp_v0 = FUN_0017760c(puVar3[0xff]);
        temp_v8 = ((int)temp_v0 * (int)(short)(unsigned short)param_2->field_0x57) / 100;
        puVar3[0x97] = temp_v8;
      }
    }
    else if (((!((temp_v3 & DAT_00571410) == 0 && (temp_v5 & DAT_00571414) == 0)) &&
             (puVar3[0x101] != 0)) && (temp_v3 = *(unsigned int *)(puVar3[0x101] + 4), puVar3[0x97] == temp_v3))
    {
      temp_v8 = (temp_v3 * temp_v8) / 100;
      puVar3[0x97] = temp_v8;
    }
  }
  if (0 < param_2->field_0x42) {
    *(unsigned short *)((int)puVar3 + 0x332) = 2;
    *(short *)(puVar3 + 0xcd) = param_2->field_0x42;
  }
  if ((char)param_2->field_0x38 < '\0') {
    temp_v7 = FUN_004c571c(param_1,0x27,param_2->field_0x38 >> 7,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x39 & 1) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x28,param_2->field_0x39 & 1,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x39 & 2) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x29,(param_2->field_0x39 & 3) >> 1,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x39 & 4) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x2a,(param_2->field_0x39 & 7) >> 2,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x39 & 8) != 0) {
    temp_v7 = FUN_004c571c(param_1,0x2b,(param_2->field_0x39 & 0xf) >> 3,param_3);
    if (temp_v7 < 0) {
      temp_v7 = -temp_v7;
    }
    temp_v6 = temp_v6 + temp_v7;
  }
  if ((param_2->field_0x39 & 0x10) != 0) {
    temp_v4 = FUN_004c53fc(0x13);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xc0) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x16);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xcc) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x11);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xb8) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0xf);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xb0) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x10);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xb4) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0xe);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xac) = temp_v4;
    }
    temp_v8 = puVar3[0x90];
    if (((int)temp_v8 < (int)puVar3[0x97]) &&
       (puVar3[0x97] = temp_v8, (int)temp_v8 < (int)puVar3[0x96])) {
      puVar3[0x96] = temp_v8;
      if (puVar3[0xfe] != 0) {
        FUN_003e0064((int)(short)temp_v8);
      }
      else if (puVar3[0xff] != 0) {
        FUN_004bd354(puVar3[0xff],(int)(short)temp_v8);
      }
    }
    temp_v4 = FUN_004c53fc(0x18);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xd4) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x19);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xd8) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0xd);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0xa8) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x2a);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0x11c) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x27);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0x110) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x28);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0x114) = temp_v4;
    }
    temp_v4 = FUN_004c53fc(0x29);
    temp_v7 = btlGetMainState();
    FUN_003f0e20(temp_v7,param_1);
    if (temp_v7 != 0) {
      *(unsigned int *)(temp_v7 + 0x118) = temp_v4;
    }
  }
  if ('\0' < param_2->field_0x37) {
    temp_v8 = DAT_00571404 | puVar3[1];
    *puVar3 = DAT_00571400 | *puVar3;
    puVar3[1] = temp_v8;
  }
  return temp_v6;
}

} /* extern "C" */
