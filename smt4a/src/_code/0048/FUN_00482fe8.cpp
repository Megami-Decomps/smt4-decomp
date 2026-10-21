/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00482fe8` (_code @ 0x482fe8, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int gameFlagsGetBlock(void);
int FUN_00379958(void);
int FUN_00482414(int, float *);
int FUN_00482428(int, int *);
int FUN_004824fc(int, int);
int FUN_00482610(void);
int FUN_0048269c(int, int *);
int stateSetterSetFlag8(int);
int FUN_0048286c(int);
int params95Set(int, char *, int, int, unsigned int, int, int);
int FUN_00482a5c(void);
int VectorSignedToFloat(int, int);

typedef struct fn_00482fe8_arg0 fn_00482fe8_arg0;
struct fn_00482fe8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int g_lmapScene; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: gameFlagsGetBlock. */
extern int gameFlagIsSet(void);
extern int gameFlagIsSetByBlockAt156c(int);
/* Supplied declaration required: FUN_00379958. */
extern int dataTableGetRecordFifty(void);
extern int FUN_003ded68(unsigned short);
/* Supplied declaration required: FUN_00482414. */
/* Supplied declaration required: FUN_00482428. */
/* Supplied declaration required: FUN_004824fc. */
/* Supplied declaration required: FUN_00482610. */
/* Supplied declaration required: FUN_0048269c. */
/* Supplied declaration required: stateSetterSetFlag8. */
/* Supplied declaration required: FUN_0048286c. */
/* Supplied declaration required: params95Set. */
/* Supplied declaration required: FUN_00482a5c. */


void FUN_00482fe8(fn_00482fe8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  char *pcVar5;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  temp_v0 = dataTableGetRecordFifty();
  gameFlagsGetBlock();
  pcVar5 = (char *)0x0;
  if (0 < temp_v0) {
    temp_v6 = 0x42480000;
    do {
      pcVar2 = pcVar5;
      FUN_00379958();
      if (((((((*pcVar2 != -1) && ('c' < *pcVar2)) &&
             (temp_v1 = FUN_003ded68(*(unsigned short *)(pcVar2 + 0x12)), temp_v1 != 0)) &&
            (((int)*pcVar2 == param_1->field_0x4 && ((int)pcVar2[1] == param_1->field_0x8)))) &&
           ((temp_v1 = gameFlagIsSetByBlockAt156c((int)(short)(int)pcVar5), temp_v1 == 0 &&
            ((*(short *)(pcVar2 + 0x14) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))))) &&
          ((*(short *)(pcVar2 + 0x16) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)))) &&
         (param_1->field_0x10 < 0x10)) {
        temp_v1 = 0;
        do {
          if ((&param_1[1].field_0x4)[temp_v1] == 0) break;
          if ((&param_1[1].field_0x8)[temp_v1] == 0) {
            temp_v1 = temp_v1 + 1;
            break;
          }
          temp_v1 = temp_v1 + 2;
        } while (temp_v1 < 0x20);
        temp_v2 = 0xbc;
        asdOperatorNew();
        if (temp_v2 != 0) {
          FUN_00482a5c();
        }
        (&param_1[1].field_0x4)[temp_v1] = temp_v2;
        FUN_00482610();
        (**(romwright_code **)(*(int *)(&param_1[1].field_0x4)[temp_v1] + 8))();
        (**(romwright_code **)(**(int **)((&param_1[1].field_0x4)[temp_v1] + 0x74) + 8))();
        param_1->field_0x10 = param_1->field_0x10 + 1;
        temp_v1 = (&param_1[1].field_0x4)[temp_v1];
        if (temp_v1 != 0) {
          temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = (float)VectorSignedToFloat((int)*(short *)(pcVar2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
          temp_v14 = VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = (unsigned int)temp_v6;
          temp_v3 = temp_v10 - *(float *)(g_lmapScene + 0x1c);
          temp_v5 = temp_v11 - *(float *)(g_lmapScene + 0x20);
          temp_v4 = temp_v12 - *(float *)(g_lmapScene + 0x24);
          temp_v8 = temp_v7;
          temp_v9 = temp_v7;
          temp_v15 = temp_v13;
          if ((int)romwright_sqrt_4(temp_v3 * temp_v3 + temp_v5 * temp_v5 + temp_v4 * temp_v4) < 0x43480000) {
            FUN_0048286c(temp_v1);
          }
          stateSetterSetFlag8(temp_v1);
          FUN_004824fc(temp_v1,param_1[7].field_0x10);
          FUN_00482414(temp_v1,&temp_v10);
          FUN_00482428(temp_v1,&temp_v13);
          FUN_0048269c(temp_v1,&temp_v7);
          *(int *)(temp_v1 + 0x20) = (int)*(short *)(pcVar2 + 0x10);
          *(unsigned int *)(temp_v1 + 100) = 0;
          params95Set(temp_v1,pcVar5,(int)*(short *)(pcVar2 + 0x18),(int)*(short *)(pcVar2 + 0x1a),
                       *(unsigned int *)(pcVar2 + 0x1c),(int)*(short *)(pcVar2 + 0x20),
                       (int)*(short *)(pcVar2 + 0x22));
        }
      }
      pcVar5 = pcVar5 + 1;
    } while ((int)pcVar5 < temp_v0);
  }
  return;
}

} /* extern "C" */
