/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162a50` (_code @ 0x162a50, 0x3c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801e4(int *, int);
int FUN_001844f8(unsigned int, int, int *);
int asdMdlBuildNodeData(unsigned int, int);
int asdMdlObjectBuildBounds(int);
int FUN_00186994(void);
int FUN_00186adc(unsigned int, unsigned int *, int, unsigned int);
int asdListAdd(int *, int, int);
int resOwnerRunNodeHandlers(unsigned int);
int asdMdlNodeInit(int, unsigned int);
int FUN_001ad22c(unsigned int *, unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_asdMdlList; /* 0x636de0 */
extern int g_asdMdlList2; /* 0x636dec */
extern int DAT_00636ea8; /* 0x636ea8 */

extern unsigned int asdFileRequestGetResult(unsigned int, int *);
/* Supplied declaration required: FUN_001801e4. */
extern int asdFileRequestIsFinished(void);
extern unsigned int FUN_00183764(unsigned int *);
/* Supplied declaration required: FUN_001844f8. */
/* Supplied declaration required: asdMdlBuildNodeData. */
/* Supplied declaration required: asdMdlObjectBuildBounds. */
/* Supplied declaration required: FUN_00186994. */
/* Supplied declaration required: FUN_00186adc. */
/* Supplied declaration required: asdListAdd. */
/* Supplied declaration required: resOwnerRunNodeHandlers. */
/* Supplied declaration required: asdMdlNodeInit. */
/* Supplied declaration required: FUN_001ad22c. */


void FUN_00162a50(void)

{
/* irregular: irregular input(s): in_s0; 10 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  int temp_v4;
  unsigned int *puVar9;
  int temp_v5;
  unsigned int *puVar11;
  int temp_v6;
  unsigned int *puVar13;
  int temp_v7;
  unsigned char temp_v8;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  int iStack_3c;
  int iStack_38;
  
  temp_v4 = g_asdMdlList;
  if (g_asdMdlList != 0) {
    temp_v11 = 1.0f;
    temp_v10 = 0.0f;
    temp_v7 = g_asdMdlList;
    do {
      puVar13 = *(unsigned int **)(temp_v7 + 8);
      temp_v7 = *(int *)(temp_v7 + 0x18);
      if ((puVar13 != (unsigned int *)0x0) && (((*puVar13 & 0x200002) == 0 || ((*puVar13 & 8) != 0)))) {
        puVar9 = (unsigned int *)puVar13[2];
        if ((*puVar9 & 1) != 0) {
          in_s0 = (float)puVar9[0x10] + (float)puVar9[0x1e];
          puVar9[0x10] = (unsigned int)in_s0;
          if (((float)puVar9[0x11] == temp_v10) ||
             (temp_v9 = in_s0 / (float)puVar9[0x11], (int)temp_v9 >= 0x3f800001)) {
            temp_v9 = temp_v11;
          }
          temp_v0 = puVar9[0xb];
          temp_v12 = temp_v11 - temp_v9;
          if (*(int *)(temp_v0 + 0x228) == 0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = *(int **)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                              *(int *)(temp_v0 + 0x22c) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4)
            ;
          }
          if (piVar7 != (int *)0x0) {
            piVar2 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
            do {
              if (piVar2 == (int *)0x5c0f3c) {
                if (piVar7 != (int *)0x0) {
                  if ((int)temp_v9 >= 0x3f800000) {
                    *(float *)piVar7[9] = temp_v9;
                    *(float *)piVar7[0xd] = temp_v9;
                    *(float *)(piVar7[9] + 4) = temp_v10;
                    *(float *)(piVar7[0xd] + 4) = temp_v10;
                    *(unsigned char *)((int)piVar7 + 0x41) = 1;
                    temp_v0 = puVar9[0x14];
                    puVar11 = (unsigned int *)puVar9[0x13];
                    puVar9[0x13] = temp_v0;
                    puVar9[0x14] = 0;
                    *(unsigned int *)piVar7[5] = temp_v0;
                    *(unsigned int *)(piVar7[5] + 4) = 0;
                    in_s0 = temp_v10;
                    if (puVar11 != (unsigned int *)0x0) {
                      temp_v9 = temp_v10;
                      (**(romwright_code **)*puVar11)(puVar11);
                      (**(romwright_code **)(*(int *)puVar11[1] + 0xc))((int *)puVar11[1],puVar11);
                      in_s0 = temp_v10;
                      temp_v10 = temp_v9;
                    }
                    *puVar9 = *puVar9 & 0xfffffffe;
                    FUN_001ad22c(puVar9,puVar9[0xe]);
                  }
                  else {
                    *(float *)piVar7[9] = temp_v12;
                    *(float *)piVar7[0xd] = temp_v12;
                    *(float *)(piVar7[9] + 4) = temp_v9;
                    *(float *)(piVar7[0xd] + 4) = temp_v9;
                    *(unsigned char *)((int)piVar7 + 0x41) = 1;
                  }
                }
                break;
              }
              piVar2 = (int *)*piVar2;
            } while (piVar2 != (int *)0x0);
          }
        }
        temp_v0 = FUN_00183764(puVar9);
        if (in_s0 == temp_v10) {
          temp_v0 = puVar9[0x28];
          temp_v4 = 0;
          if (temp_v4 < (int)temp_v0) {
            do {
              puVar3 = (unsigned int *)(puVar9[0x29] + temp_v4 * 0xc);
              if ((*puVar3 & 2) != 0) {
                resOwnerRunNodeHandlers(puVar3[2]);
              }
              temp_v0 = puVar9[0x28];
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < (int)temp_v0);
          }
        }
        if (puVar13 != (unsigned int *)0x0) {
          temp_v0 = puVar13[2];
        }
        if (puVar13 != (unsigned int *)0x0 && temp_v0 != 0) {
          temp_v8 = *(int *)(temp_v0 + 4) != 0;
          temp_v3 = 0;
          if (temp_v8) {
            temp_v3 = puVar13[6];
          }
          if (temp_v8 && temp_v3 != 0) {
            temp_v4 = *(int *)(temp_v0 + 0x28);
            temp_v6 = 0;
            if (temp_v6 < temp_v4) {
              do {
                temp_v0 = 0;
                piVar7 = (int *)(puVar13[6] + temp_v6 * 0x1c);
                if (piVar7[1] != 0) {
                  do {
                    FUN_00186adc(*piVar7 + temp_v0 * 0x84,puVar13,temp_v6,temp_v0);
                    temp_v0 = temp_v0 + 1;
                  } while (temp_v0 < (unsigned int)piVar7[1]);
                }
                FUN_001844f8(puVar13[2],temp_v6,&temp_v13);
                temp_v6 = temp_v6 + 1;
                piVar7[2] = temp_v13;
                piVar7[3] = iStack_3c;
                piVar7[4] = iStack_38;
              } while (temp_v6 < temp_v4);
            }
          }
        }
      }
      temp_v4 = g_asdMdlList;
    } while (temp_v7 != 0);
  }
  while (temp_v4 != 0) {
    piVar7 = (int *)(temp_v4 + 8);
    temp_v4 = *(int *)(temp_v4 + 0x18);
    if (((unsigned int *)*piVar7 != (unsigned int *)0x0) &&
       ((temp_v0 = *(unsigned int *)*piVar7, (temp_v0 & 0x200002) == 0 || ((temp_v0 & 8) != 0)))) {
      FUN_00186994();
    }
  }
  temp_v4 = 0;
  temp_v7 = g_asdMdlList2;
  do {
    do {
      temp_v6 = temp_v7;
      if (temp_v6 == 0) {
        return;
      }
      temp_v5 = *(int *)(temp_v6 + 8);
      temp_v7 = *(int *)(temp_v6 + 0x18);
    } while ((*(int *)(temp_v5 + 4) == 0) || (temp_v1 = asdFileRequestIsFinished(), temp_v1 == 0));
    temp_v2 = asdFileRequestGetResult(*(unsigned int *)(temp_v5 + 4),&temp_v13);
    asdMdlBuildNodeData(temp_v2,temp_v13);
    *(unsigned int *)(*(int *)(temp_v5 + 8) + 4) = temp_v2;
    asdMdlNodeInit(*(int *)(temp_v5 + 8),*(unsigned int *)(*(int *)(temp_v5 + 8) + 8) & 0xffff);
    asdMdlObjectBuildBounds(temp_v5);
    FUN_001801e4(&g_asdMdlList2,temp_v6);
    asdListAdd(&g_asdMdlList,temp_v5,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < DAT_00636ea8);
  return;
}

} /* extern "C" */
