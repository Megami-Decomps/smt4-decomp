/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00490484` (_code @ 0x490484, 0x3f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int MapNaviTable_GetAreaCount(void);
int MapNaviTable_GetCategoryCount(void);
int MapNaviTable_GetCategoryRecord(...);
int SBORROW4(...);
int SCARRY4(unsigned int, int);
int VectorSignedToFloat(...);
int rt_memcpy_w(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_005325d8; /* 0x5325d8 */
extern unsigned char DAT_00532620; /* 0x532620 */
extern unsigned char DAT_00532668; /* 0x532668 */
extern unsigned char DAT_005326b0; /* 0x5326b0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: MapNaviTable_GetAreaCount. */
extern int MapNaviTable_GetAreaRecord(unsigned char *, unsigned int);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
/* Supplied declaration required: MapNaviTable_GetCategoryRecord. */
extern int MapNavi_SetDiscoveredCell(int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00490484(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int *piVar8;
  int temp_v5;
  int *piVar10;
  short *psVar11;
  unsigned int temp_v6;
  int *piVar13;
  int temp_v7;
  int temp_v8;
  char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v12;
  float temp_v13;
  unsigned int in_s1;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  int aiStack_4e0 [64];
  int aiStack_3e0 [64];
  int aiStack_2e0 [64];
  float afStack_1e0 [18];
  unsigned char temp_v17 [80];
  unsigned char temp_v18 [72];
  unsigned char temp_v19 [72];
  unsigned char temp_v20 [72];
  unsigned char temp_v21 [12];
  unsigned char temp_v22 [8];
  unsigned char temp_v23 [36];
  int temp_v24;
  unsigned int uStack_34;
  unsigned int uStack_30;
  int temp_v25;
  
  if (param_3 == 0xffffffff) {
    return;
  }
  piVar13 = aiStack_4e0;
  temp_v15 = romwright_piece_4_4(in_s1,in_s0);
  temp_v24 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  temp_v25 = param_4;
  rt_memcpy_w(temp_v17,&DAT_005325d8,0x48);
  rt_memcpy_w(temp_v18,&DAT_00532620,0x48);
  rt_memcpy_w(temp_v19,&DAT_00532668,0x48);
  rt_memcpy_w(temp_v20,&DAT_005326b0,0x48);
  temp_v9 = '\0';
  puVar7 = temp_v21;
  MapNaviTable_GetCategoryCount();
  temp_v3 = MapNaviTable_GetCategoryRecord(temp_v21,0);
  temp_v4 = 0;
  if (0 < (int)puVar7) {
    while (psVar11 = (short *)(temp_v3 + temp_v4 * 0x14), *psVar11 != -1) {
      if (*(unsigned char *)(psVar11 + 2) == param_3) {
        temp_v3 = temp_v3 + temp_v4 * 0x14;
        if (temp_v3 != 0) {
          temp_v9 = *(char *)(temp_v3 + 5);
        }
        break;
      }
      temp_v4 = temp_v4 + 1;
      if ((int)puVar7 <= temp_v4) break;
    }
  }
  puVar6 = temp_v23;
  MapNaviTable_GetAreaCount();
  temp_v4 = MapNaviTable_GetAreaRecord(temp_v23,0);
  puVar7 = (unsigned char *)0x0;
  if (0 < (int)puVar6) {
    do {
      temp_v6 = *(unsigned int *)(temp_v4 + (int)puVar7 * 0x10);
      temp_v11 = SCARRY4(temp_v6,1);
      temp_v3 = temp_v6 + 1;
      temp_v10 = temp_v6 != 0xffffffff;
      if (temp_v10) {
        temp_v11 = SBORROW4(temp_v6,param_3);
        temp_v3 = temp_v6 - param_3;
      }
      if (temp_v10 && temp_v6 != param_3) {
        puVar7 = puVar7 + 1;
        temp_v11 = SBORROW4((int)puVar6,(int)puVar7);
        temp_v3 = (int)puVar6 - (int)puVar7;
      }
    } while (((temp_v10 && temp_v6 != param_3) && puVar6 != puVar7) && temp_v3 < 0 == temp_v11);
  }
  if (temp_v9 != '\0') {
    if (temp_v9 != '\x01') {
      if (temp_v9 != '\x02') {
        if (temp_v9 != '\x03') {
          rt_memcpy_w(afStack_1e0,temp_v17,0x48);
        }
        else {
          rt_memcpy_w(afStack_1e0,temp_v20,0x48);
        }
      }
      else {
        rt_memcpy_w(afStack_1e0,temp_v19,0x48);
      }
    }
    else {
      rt_memcpy_w(afStack_1e0,temp_v18,0x48);
    }
  }
  else {
    rt_memcpy_w(afStack_1e0,temp_v17,0x48);
  }
  temp_v4 = 0x20;
  piVar8 = aiStack_2e0;
  piVar10 = aiStack_3e0;
  do {
    *piVar10 = 0;
    piVar10[1] = 0;
    *piVar8 = 0;
    piVar8[1] = 0;
    *piVar13 = 0;
    piVar13[1] = 0;
    temp_v4 = temp_v4 - 1;
    piVar10 = piVar10 + 2;
    piVar8 = piVar8 + 2;
    piVar13 = piVar13 + 2;
  } while (temp_v4 != 0);
  puVar7 = temp_v22;
  MapNaviTable_GetCategoryCount();
  temp_v4 = 0;
  if (temp_v4 < (int)puVar7) {
    do {
      temp_v3 = MapNaviTable_GetCategoryRecord(temp_v22,temp_v4);
      if (*(unsigned char *)(temp_v3 + 4) == param_3) {
        aiStack_3e0[*(short *)(temp_v3 + 2) * 2] =
             (int)*(short *)(temp_v3 + 0xc) + (int)*(short *)(temp_v3 + 0x10);
        aiStack_3e0[*(short *)(temp_v3 + 2) * 2 + 1] =
             (int)*(short *)(temp_v3 + 0xe) + (int)*(short *)(temp_v3 + 0x12);
        temp_v12 = (float)VectorSignedToFloat((int)*(char *)(temp_v3 + 8) - (int)*(char *)(temp_v3 + 6),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = (float)VectorSignedToFloat((int)*(char *)(temp_v3 + 9) - (int)*(char *)(temp_v3 + 7),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        aiStack_2e0[*(short *)(temp_v3 + 2) * 2] = (int)(temp_v14 + temp_v12 * 12.0f * 0.5f);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0xe),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        aiStack_2e0[*(short *)(temp_v3 + 2) * 2 + 1] = (int)(temp_v12 + temp_v13 * 12.0f * 0.5f);
        aiStack_4e0[*(short *)(temp_v3 + 2) * 2] = (int)*(char *)(temp_v3 + 6);
        aiStack_4e0[*(short *)(temp_v3 + 2) * 2 + 1] = (int)*(char *)(temp_v3 + 7);
        break;
      }
      temp_v4 = temp_v4 + 1;
      puVar7 = temp_v22;
      MapNaviTable_GetCategoryCount();
    } while (temp_v4 < (int)puVar7);
  }
  temp_v2 = temp_v25;
  temp_v4 = param_3 * 8;
  temp_v16 = 0x43fa0000;
  temp_v8 = 0;
  puVar7 = (unsigned char *)(temp_v24 + 0x7b92);
  temp_v3 = temp_v25 * 2;
  do {
    temp_v13 = (float)VectorSignedToFloat(aiStack_4e0[temp_v3],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat(aiStack_4e0[temp_v2 * 2 + 1],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)((afStack_1e0[temp_v8 * 2] + (float)temp_v15) - temp_v13 * (float)temp_v16) / 1000;
    temp_v1 = (int)((afStack_1e0[temp_v8 * 2 + 1] + (float)((unsigned long long)temp_v15 >> 0x20)) -
                 temp_v12 * (float)temp_v16) / 1000;
    if (-1 < temp_v5 && -1 < temp_v1) {
      temp_v7 = (int)*(short *)(temp_v4 + 0x6172e8);
      temp_v11 = SBORROW4(temp_v5,temp_v7);
      temp_v0 = temp_v5 - temp_v7;
      if (temp_v5 < temp_v7) {
        temp_v11 = SBORROW4(temp_v1,(int)*(short *)(temp_v4 + 0x6172ea));
        temp_v0 = temp_v1 - *(short *)(temp_v4 + 0x6172ea);
      }
      if ((temp_v0 < 0 != temp_v11) &&
         (temp_v5 = MapNavi_SetDiscoveredCell
                            ((int)(short)(*(short *)(temp_v4 + 0x6172e6) * (short)temp_v1 +
                                         (short)temp_v5 + *(short *)(temp_v4 + 0x6172e4)),1), temp_v5 != 0
         )) {
        *puVar7 = 1;
      }
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 9);
  return;
}

} /* extern "C" */
