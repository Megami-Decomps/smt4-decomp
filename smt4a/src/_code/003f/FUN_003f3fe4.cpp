/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3fe4` (_code @ 0x3f3fe4, 0xb50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(int, int, int, int, int, unsigned int, int, unsigned int);
int FUN_001835b4(...);
int FUN_00183788(...);
int FUN_00183bb0(void);
int FUN_00184e64(...);
int FUN_0025e704(...);
int FUN_002b4e7c(int);
int FUN_003a6404(...);
int FUN_003f3a90(...);
int FUN_003f3d90(...);

typedef struct fn_003f3fe4_arg0 fn_003f3fe4_arg0;
struct fn_003f3fe4_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x17];
    int field_0x1c; /* +0x1c */
    byte field_0x20; /* +0x20 */
    byte field_0x21; /* +0x21 */
    byte field_0x22; /* +0x22 */
    byte field_0x23; /* +0x23 */
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
    unsigned char pad_0x26[0x1];
    byte field_0x27; /* +0x27 */
    byte field_0x28; /* +0x28 */
    byte field_0x29; /* +0x29 */
    unsigned char pad_0x2a[0x2];
    int field_0x2c; /* +0x2c */
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x8];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x3];
    byte field_0x48; /* +0x48 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_3_stack;

extern unsigned char LAB_003f436c; /* 0x3f436c */
extern unsigned char LAB_003f4738; /* 0x3f4738 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00180114(unsigned short);
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183788. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
extern unsigned int FUN_0019e130(int);
extern int FUN_001ab854(void);
extern unsigned int FUN_0025e684(int);
/* Supplied declaration required: FUN_0025e704. */
extern int btlMainGetUnk14(void);
extern int FUN_002b4dcc(int);
/* Supplied declaration required: FUN_002b4e7c. */
extern int FUN_00319d2c(int, int);
extern unsigned int FUN_00319d64(int, int);
/* Supplied declaration required: FUN_003a6404. */
/* Supplied declaration required: FUN_003f3a90. */
/* Supplied declaration required: FUN_003f3d90. */


void FUN_003f3fe4(fn_003f3fe4_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 14 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  void *pvVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [76];
  unsigned int temp_v14;
  int temp_v15;
  unsigned char temp_v16 [64];
  unsigned int temp_v17;
  
  temp_v5 = 0;
  temp_v7 = 0;
  temp_v10 = 0;
  temp_v12 = 0;
  temp_v6 = 0;
  param_2 = param_1->field_0x2c + param_2;
  param_3 = param_3 + *(int *)&param_1->field_0x30;
  temp_v15 = 0;
  temp_v14 = 0;
  if (param_1->field_0x34 != (void *)0xffffffff) {
    if (param_1->field_0x34 != (void *)0xfffffffe) {
      temp_v1 = FUN_001ab854();
    }
    else {
      temp_v1 = btlMainGetUnk14();
    }
    if (temp_v1 != 0) {
      temp_v2 = FUN_00180114(*(unsigned short *)(temp_v1 + 0x62));
      FUN_00100388(temp_v16,&LAB_003f436c,temp_v2);
      temp_v10 = (int)*(short *)(temp_v1 + 0x62);
      temp_v12 = (unsigned int)*(unsigned short *)(temp_v1 + 100);
      temp_v5 = (int)*(short *)(temp_v1 + 0x2a);
      temp_v7 = (int)*(short *)(temp_v1 + 0x2c);
      temp_v6 = FUN_002b4dcc(temp_v1);
      temp_v15 = (int)*(short *)(temp_v1 + 0x10);
      if (param_1->field_0x34 != (void *)0xfffffffe) {
        temp_v17 = FUN_00319d64((int)(short)temp_v6,temp_v10);
      }
      else {
        temp_v17 = (unsigned int)(temp_v5 < temp_v6);
      }
      temp_v14 = FUN_0025e684(temp_v1);
    }
  }
  else {
    temp_v6 = FUN_001801a4();
    temp_v2 = FUN_0015687c();
    FUN_00100388(temp_v16,&LAB_003f436c,temp_v2);
    temp_v10 = -1;
    temp_v12 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
    temp_v5 = (int)*(short *)(temp_v6 + 0x2a);
    temp_v7 = (int)*(short *)(temp_v6 + 0x2c);
    FUN_002b4e7c(temp_v6);
    temp_v1 = FUN_001801a4();
    temp_v15 = (int)*(short *)(temp_v1 + 0x1e);
    temp_v17 = FUN_00319d64((int)(short)temp_v6,temp_v10);
  }
  efctSetSpeed();
  if (param_1->field_0x22 != 0) {
    temp_v0 = param_1->field_0x25;
    temp_v8 = temp_v0 == 0;
    if (temp_v8) {
      temp_v0 = param_1->field_0x27;
    }
    if (!temp_v8 || temp_v0 != 0) {
      FUN_001835b4(2,0x11,0x3e,param_2,param_3,0x65);
    }
    temp_v2 = 0x6a;
    FUN_001835b4(2,0x11,0x3d,param_2,param_3,0x6a);
    if (param_1->field_0x20 != 0) {
      if (param_1->field_0x21 == 0) {
        efctSetSpeed();
        return;
      }
      temp_v9 = 0x6f;
      temp_v2 = 0x4d;
    }
    else {
      temp_v4 = 0;
      temp_v8 = param_1->field_0x23 != 0;
      temp_v9 = 0;
      if (temp_v8) {
        temp_v9 = 0xffffffff;
      }
      temp_v11 = 0xffffffff;
      if (!temp_v8) {
        pvVar4 = param_1->field_0x34;
        if (pvVar4 != (void *)0xffffffff) {
          if (pvVar4 != (void *)0xfffffffe) {
            temp_v9 = temp_v11;
            if (-1 < (int)pvVar4) {
              temp_v1 = FUN_001ab854();
              temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60);
              temp_v9 = temp_v11;
            }
          }
          else {
            temp_v1 = btlMainGetUnk14();
            temp_v9 = temp_v11;
            if (temp_v1 != 0) {
              temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60);
            }
          }
        }
        else {
          temp_v1 = FUN_001801a4();
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x5e);
          temp_v9 = temp_v11;
        }
        temp_v3 = 1;
        temp_v1 = 0;
        do {
          if ((temp_v4 & (1 << (temp_v3 & 0xff))) != 0) {
            if (param_1->field_0x1c == temp_v1) {
              temp_v9 = FUN_0019e130((int)(short)temp_v3);
              temp_v11 = temp_v9;
              break;
            }
            temp_v1 = temp_v1 + 1;
          }
          temp_v3 = temp_v3 + 1;
          temp_v11 = temp_v9;
          if ((int)temp_v3 >= 0xe) break;
          while (temp_v3 == 2) {
            temp_v3 = 3;
          }
        } while( 1 );
      }
      FUN_00184e64(temp_v9);
      if (param_1->field_0x23 != 0) {
        efctSetSpeed();
      }
      temp_v1 = FUN_001834a4(0x11,0x51);
      FUN_0018152c(temp_v10,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0x6a,0,
                   temp_v2,temp_v10,temp_v11);
      FUN_00183bb0();
      efctSetSpeed();
      FUN_001835b4(2,0x11,0x40,param_2,param_3,0x6f);
      if (param_1->field_0x28 != 0) {
        FUN_001835b4(2,0x11,0x95,param_2,param_3,0x79);
        efctSetSpeed();
        return;
      }
      if (param_1->field_0x23 != 0) {
        temp_v2 = 0x4b;
        temp_v9 = 0x79;
      }
      else {
        if (param_1->field_0x24 == 0) {
          FUN_001835b4(2,0x11,0x3f,param_2,param_3,0x6f);
          FUN_00184e64(0x292929ff);
          efctSetSpeed();
          FUN_00100388(temp_v13,&LAB_003f4738,temp_v12);
          if ((int)temp_v12 >= 100) {
            temp_v10 = FUN_001834a4(0x11,0x80);
            FUN_00180310(1,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,1,3,
                         0x79,temp_v13);
          }
          else {
            temp_v10 = FUN_001834a4(0x11,0x53);
            FUN_00180310(1,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,1,2,
                         0x79,temp_v13);
          }
          FUN_00183bb0();
          efctSetSpeed();
          FUN_00164b5c(2,0x11,2,param_2,param_3,0x6f);
          FUN_00183788(temp_v5,temp_v6,*(unsigned int *)&param_1->field_0x40,0,0x11,0x44,0x47,0x45,0x46,
                       param_2,param_3,0x74,0);
          FUN_0025e704(temp_v7,temp_v15,*(unsigned int *)&param_1->field_0x44,0,0x11,0x48,0x4a,0x49,
                       param_2,param_3,0x75,0);
          FUN_003f3a90(param_1,param_2,param_3);
          if (param_1->field_0x29 != 0) {
            temp_v10 = FUN_001834a4(0x11,0xbd);
            FUN_001835b4(2,0x11,0xbb,*(short *)(temp_v10 + 8) + param_2,
                         *(short *)(temp_v10 + 10) + param_3,0x79);
          }
          temp_v10 = g_renderCtx;
          if (param_1->field_0x48 != 0) {
            temp_v6 = FUN_00169294(6,1,0);
            piVar7 = (int *)(temp_v10 + 0x12b8);
            temp_v5 = piVar7[*piVar7 + 2];
            piVar7[*piVar7 + 2] = temp_v6;
            if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
              (**(romwright_code **)(temp_v10 + 0x12d4))();
              *(unsigned char *)(temp_v10 + 0x12d0) = 0;
            }
            FUN_003a6404(*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1[1].field_0x4);
            FUN_00184e64();
            efctSetSpeed();
            FUN_001835b4(2,0x11,0x7d1,param_2,param_3,0x79);
            FUN_00183bb0();
            temp_v10 = g_renderCtx;
            temp_v6 = FUN_00169294(6,7,0);
            piVar7 = (int *)(temp_v10 + 0x12b8);
            temp_v5 = piVar7[*piVar7 + 2];
            piVar7[*piVar7 + 2] = temp_v6;
            if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
              (**(romwright_code **)(temp_v10 + 0x12d4))();
              *(unsigned char *)(temp_v10 + 0x12d0) = 0;
            }
          }
          efctSetSpeed();
          temp_v10 = FUN_001834a4(0x11,0xb7);
          FUN_003f3d90(param_1,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,
                       temp_v14);
          efctSetSpeed();
          return;
        }
        FUN_001835b4(2,0x11,0x4c,param_2,param_3,0x79);
        if (param_1->field_0x29 == 0) {
          efctSetSpeed();
          return;
        }
        temp_v10 = FUN_001834a4(0x11,0xc5);
        temp_v2 = 0xbb;
        param_3 = *(short *)(temp_v10 + 10) + param_3;
        temp_v9 = 0x79;
        param_2 = *(short *)(temp_v10 + 8) + param_2;
      }
    }
  }
  else {
    if (param_1->field_0x20 != 0) {
      efctSetSpeed();
      return;
    }
    efctSetSpeed();
    if (param_1->field_0x28 != 0) {
      temp_v2 = 0x94;
      temp_v9 = 0x79;
    }
    else if (param_1->field_0x23 != 0) {
      temp_v2 = 0xc;
      temp_v9 = 0x79;
    }
    else {
      if (param_1->field_0x24 == 0) {
        FUN_001835b4(2,0x11,4,param_2,param_3,0x6f);
        FUN_001835b4(2,0x11,0x75,param_2,param_3,0x74);
        FUN_001835b4(2,0x11,0x76,param_2,param_3,0x75);
        FUN_00183788(temp_v5,temp_v6,*(unsigned int *)&param_1->field_0x40,0,0x11,5,8,6,7,param_2,param_3,
                     0x74,0);
        FUN_0025e704(temp_v7,temp_v15,*(unsigned int *)&param_1->field_0x44,0,0x11,9,0xb,10,param_2,
                     param_3,0x75,0);
        temp_v10 = FUN_00319d2c(temp_v5,temp_v6);
        if (temp_v10 != 0) {
          temp_v2 = 0xdc0f14ff;
          FUN_00184e64(temp_v2);
        }
        else if (temp_v17 != 0) {
          temp_v2 = 0x6ef0ffff;
          FUN_00184e64(temp_v2);
        }
        efctSetSpeed();
        if (temp_v5 >= 10000) {
          FUN_00100388(temp_v13,&LAB_003f4738,9999);
        }
        else {
          FUN_00100388(temp_v13,&LAB_003f4738,temp_v5);
        }
        temp_v10 = FUN_001834a4(0x11,0x19);
        FUN_00180310(10,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,1,4,0x79,
                     temp_v13);
        FUN_00183bb0();
        temp_v10 = 9999;
        if (temp_v7 < 10000) {
          temp_v10 = temp_v7;
        }
        FUN_00100388(temp_v13,&LAB_003f4738,temp_v10);
        temp_v10 = FUN_001834a4(0x11,0x1d);
        FUN_00180310(10,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,1,4,0x79,
                     temp_v13);
        FUN_003f3a90(param_1,param_2,param_3);
        if (param_1->field_0x29 != 0) {
          temp_v10 = FUN_001834a4(0x11,0xbc);
          FUN_001835b4(2,0x11,0xbb,*(short *)(temp_v10 + 8) + param_2,
                       *(short *)(temp_v10 + 10) + param_3,0x79);
        }
        temp_v10 = g_renderCtx;
        if (param_1->field_0x48 != 0) {
          temp_v6 = FUN_00169294(6,1,0);
          piVar7 = (int *)(temp_v10 + 0x12b8);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v6;
          if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v10 + 0x12d4))();
            *(unsigned char *)(temp_v10 + 0x12d0) = 0;
          }
          FUN_003a6404(*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1[1].field_0x4);
          FUN_00184e64();
          efctSetSpeed();
          FUN_001835b4(2,0x11,2000,param_2,param_3,0x79);
          FUN_00183bb0();
          temp_v10 = g_renderCtx;
          temp_v6 = FUN_00169294(6,7,0);
          piVar7 = (int *)(temp_v10 + 0x12b8);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v6;
          if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v10 + 0x12d4))();
            *(unsigned char *)(temp_v10 + 0x12d0) = 0;
          }
        }
        efctSetSpeed();
        temp_v10 = FUN_001834a4(0x11,0xb6);
        FUN_003f3d90(param_1,*(short *)(temp_v10 + 8) + param_2,*(short *)(temp_v10 + 10) + param_3,
                     temp_v14);
        efctSetSpeed();
        return;
      }
      FUN_001835b4(2,0x11,0xd,param_2,param_3,0x79);
      if (param_1->field_0x29 == 0) {
        efctSetSpeed();
        return;
      }
      temp_v10 = FUN_001834a4(0x11,0xbc);
      temp_v2 = 0xbb;
      param_3 = *(short *)(temp_v10 + 10) + param_3;
      temp_v9 = 0x79;
      param_2 = *(short *)(temp_v10 + 8) + param_2;
    }
  }
  FUN_001835b4(2,0x11,temp_v2,param_2,param_3,temp_v9);
  efctSetSpeed();
  return;
}

} /* extern "C" */
