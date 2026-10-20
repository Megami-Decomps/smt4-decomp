/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3a90` (_code @ 0x3f3a90, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001676b0(int, int, int, int);
int FUN_0035ae58(int, int, int, int, int);
int __aeabi_idivmod(int, int);

typedef struct fn_003f3a90_arg0 fn_003f3a90_arg0;
struct fn_003f3a90_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x2];
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x9];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    void *field_0x34; /* +0x34 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001676b0. */
extern int gameGetPlayerData(void);
extern int FUN_001834a4(unsigned int, unsigned int);
extern int gameGetSlotRecord(void);
extern int btlMainGetUnk14(void);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_003f3a90(fn_003f3a90_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  void *pvVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short temp_v11;
  unsigned char temp_v12;
  
  temp_v4 = 0x12;
  if (param_1->field_0x22 != 0) {
    temp_v4 = 0x50;
  }
  temp_v1 = FUN_001834a4(0x11,temp_v4);
  temp_v7 = 0;
  pvVar3 = param_1->field_0x34;
  temp_v8 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v0 = 0;
  if (pvVar3 != (void *)0xffffffff) {
    if (pvVar3 != (void *)0xfffffffe) {
      if (-1 < (int)pvVar3) {
        temp_v2 = gameGetSlotRecord();
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x60);
      }
    }
    else {
      temp_v2 = btlMainGetUnk14();
      if (temp_v2 != 0) {
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x60);
      }
    }
  }
  else {
    temp_v2 = gameGetPlayerData();
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x5e);
  }
  temp_v3 = 1;
  temp_v6 = 0;
  temp_v2 = 0xd;
  do {
    if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
      temp_v12 = param_1->field_0x1c == temp_v8;
      temp_v9 = temp_v8 + 1;
      temp_v8 = temp_v8 + 1;
      if (temp_v12) {
        temp_v11 = temp_v6 + 1;
        temp_v8 = temp_v9;
      }
    }
    do {
      temp_v2 = temp_v2 - 1;
      temp_v3 = temp_v3 + 1;
      temp_v6 = temp_v6 + 1;
      if (temp_v2 == 0) {
        if (temp_v8 != 1) {
          if (temp_v8 < 2) {
            return;
          }
          if (param_1->field_0x18 >= 0x14) {
            temp_v3 = 1;
            temp_v6 = 0;
            temp_v2 = 0xd;
            do {
              if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
                __aeabi_idivmod(param_1->field_0x1c + 1,temp_v8);
                temp_v12 = temp_v5 == temp_v10;
                temp_v9 = temp_v10 + 1;
                temp_v10 = temp_v10 + 1;
                if (temp_v12) {
                  temp_v0 = temp_v6 + 1;
                  temp_v10 = temp_v9;
                }
              }
              do {
                temp_v9 = g_renderCtx;
                temp_v2 = temp_v2 - 1;
                temp_v3 = temp_v3 + 1;
                temp_v6 = temp_v6 + 1;
                if (temp_v2 == 0) {
                  piVar8 = (int *)(g_renderCtx + 0x1318);
                  temp_v8 = piVar8[*piVar8 + 2];
                  piVar8[*piVar8 + 2] = 3;
                  if (*(char *)(temp_v9 + 0x1330) != '\0' || temp_v8 != 3) {
                    (**(romwright_code **)(temp_v9 + 0x1334))();
                    *(unsigned char *)(temp_v9 + 0x1330) = 0;
                  }
                  FUN_0035ae58(*(int *)&param_1->field_0x2c + (int)*(short *)(temp_v1 + 8),
                               *(int *)&param_1->field_0x30 + (int)*(short *)(temp_v1 + 10),
                               (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],1);
                  temp_v8 = (param_1->field_0x18 - 0x14) * -3;
                  FUN_001676b0((int)temp_v11,(int)*(short *)(temp_v1 + 8) + temp_v8 + param_2,
                               *(short *)(temp_v1 + 10) + param_3,0x7e);
                  FUN_001676b0((int)temp_v0,(int)*(short *)(temp_v1 + 8) + param_2 + temp_v8 + 0xd,
                               *(short *)(temp_v1 + 10) + param_3,0x7e);
                  temp_v8 = g_renderCtx;
                  piVar8 = (int *)(g_renderCtx + 0x1318);
                  temp_v10 = piVar8[*piVar8 + 2];
                  piVar8[*piVar8 + 2] = 0;
                  if (*(char *)(temp_v8 + 0x1330) != '\0' || temp_v10 != 0) {
                    (**(romwright_code **)(temp_v8 + 0x1334))();
                    *(unsigned char *)(temp_v8 + 0x1330) = 0;
                  }
                  return;
                }
              } while (temp_v3 == 2);
            } while( 1 );
          }
        }
        FUN_001676b0((int)temp_v11,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                     0x7e);
        return;
      }
    } while (temp_v3 == 2);
  } while( 1 );
}

} /* extern "C" */
