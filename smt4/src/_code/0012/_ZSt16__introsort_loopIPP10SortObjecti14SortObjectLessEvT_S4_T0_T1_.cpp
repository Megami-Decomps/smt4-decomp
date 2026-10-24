/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZSt16__introsort_loopIPP10SortObjecti14SortObjectLessEvT_S4_T0_T1_` (_code @ 0x123d00, 0x478 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZNK14SortObjectLessclEP10SortObjectS1_(...);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

/* Supplied declaration required: _ZSt16__introsort_loopIPP10SortObjecti14SortObjectLessEvT_S4_T0_T1_. */
/* Supplied declaration required: _ZNK14SortObjectLessclEP10SortObjectS1_. */


void _ZSt16__introsort_loopIPP10SortObjecti14SortObjectLessEvT_S4_T0_T1_(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [4];
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [4];
  unsigned char temp_v12 [4];
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int *temp_v17;
  unsigned char temp_v18 [4];
  unsigned int temp_v19;
  unsigned char temp_v20 [4];
  unsigned int *temp_v21;
  unsigned int *puStack_34;
  unsigned int *puStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (((int)param_2 - (int)param_1) >> 2 < 0x11) {
    return;
  }
  do {
    if (param_3 == 0) {
      temp_v13 = (int)param_2 - (int)param_1;
      temp_v0 = temp_v13 >> 2;
      temp_v17 = param_2;
      temp_v21 = param_2;
      if (temp_v0 >= 2) {
        temp_v7 = (temp_v0 - 2) / 2;
        temp_v15 = temp_v0;
        do {
          temp_v3 = temp_v15;
          temp_v6 = param_1[temp_v7];
          temp_v0 = temp_v7;
          while( 1 ) {
            temp_v2 = temp_v0 * 2;
            temp_v5 = temp_v2 + 2;
            temp_v19 = temp_v6;
            if (temp_v3 <= temp_v5) break;
            temp_v1 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v9,param_1[temp_v5],param_1[temp_v2 + 1]);
            if (temp_v1 != 0) {
              temp_v5 = temp_v2 + 1;
            }
            param_1[temp_v0] = param_1[temp_v5];
            temp_v6 = temp_v19;
            temp_v0 = temp_v5;
          }
          if (temp_v5 == temp_v3) {
            param_1[temp_v0] = param_1[temp_v2 + 1];
            temp_v0 = temp_v2 + 1;
          }
          while ((temp_v3 = (temp_v0 - 1) / 2, temp_v7 < temp_v0 &&
                 (temp_v2 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v18,param_1[temp_v3],temp_v6), temp_v2 != 0))) {
            param_1[temp_v0] = param_1[temp_v3];
            temp_v0 = temp_v3;
          }
          temp_v8 = temp_v7 != 0;
          if (temp_v8) {
            temp_v7 = temp_v7 - 1;
          }
          param_1[temp_v0] = temp_v6;
        } while (temp_v8);
      }
      puVar8 = temp_v21;
      puVar7 = temp_v21;
      temp_v0 = temp_v13;
      if (temp_v21 < temp_v17) {
        do {
          temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v11,*puVar8,*param_1);
          if (temp_v0 != 0) {
            temp_v16 = *puVar8;
            temp_v7 = 0;
            *puVar8 = *param_1;
            temp_v2 = 2;
            temp_v0 = temp_v13 >> 2;
            temp_v3 = temp_v7;
            if (temp_v0 >= 3) {
              do {
                temp_v5 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v12,param_1[temp_v2],param_1[temp_v2 - 1]);
                temp_v7 = temp_v2;
                if (temp_v5 != 0) {
                  temp_v7 = temp_v2 - 1;
                }
                param_1[temp_v3] = param_1[temp_v7];
                temp_v2 = temp_v7 * 2 + 2;
                temp_v3 = temp_v7;
              } while (temp_v2 < temp_v0);
            }
            temp_v6 = temp_v16;
            if (temp_v2 == temp_v0) {
              param_1[temp_v7] = param_1[temp_v2 - 1];
              temp_v7 = temp_v2 - 1;
            }
            while ((temp_v0 = (temp_v7 - 1) / 2, 0 < temp_v7 &&
                   (temp_v3 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v10,param_1[temp_v0],temp_v6), temp_v3 != 0))) {
              param_1[temp_v7] = param_1[temp_v0];
              temp_v7 = temp_v0;
            }
            param_1[temp_v7] = temp_v6;
          }
          puVar8 = puVar8 + 1;
          puVar7 = temp_v21;
          temp_v0 = temp_v13;
        } while (puVar8 < temp_v17);
      }
      while (temp_v0 >> 2 >= 2) {
        if (param_1 != puVar7) {
          temp_v14 = puVar7[-1];
          puVar7[-1] = *param_1;
          temp_v7 = 0;
          temp_v0 = ((int)puVar7 + (-4 - (int)param_1)) >> 2;
          temp_v2 = 2;
          temp_v3 = temp_v7;
          if (temp_v0 >= 3) {
            do {
              temp_v5 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v10,param_1[temp_v2],param_1[temp_v2 - 1]);
              temp_v7 = temp_v2;
              if (temp_v5 != 0) {
                temp_v7 = temp_v2 - 1;
              }
              param_1[temp_v3] = param_1[temp_v7];
              temp_v2 = temp_v7 * 2 + 2;
              temp_v3 = temp_v7;
            } while (temp_v2 < temp_v0);
          }
          temp_v6 = temp_v14;
          if (temp_v2 == temp_v0) {
            param_1[temp_v7] = param_1[temp_v2 - 1];
            temp_v7 = temp_v2 - 1;
          }
          while ((temp_v0 = (temp_v7 - 1) / 2, 0 < temp_v7 &&
                 (temp_v3 = _ZNK14SortObjectLessclEP10SortObjectS1_(&temp_v13,param_1[temp_v0],temp_v6), temp_v3 != 0))) {
            param_1[temp_v7] = param_1[temp_v0];
            temp_v7 = temp_v0;
          }
          param_1[temp_v7] = temp_v6;
        }
        puVar7 = puVar7 + -1;
        temp_v0 = (int)puVar7 - (int)param_1;
      }
      return;
    }
    puVar9 = param_1 + (((int)param_2 - (int)param_1) >> 2) / 2;
    temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v20,*param_1,*puVar9);
    puVar7 = param_2;
    puVar8 = param_1;
    if (temp_v0 != 0) {
      temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v20,*puVar9,param_2[-1]);
      if (temp_v0 != 0) {
        temp_v6 = *puVar9;
      }
      else {
        temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v20,*param_1,param_2[-1]);
        if (temp_v0 != 0) {
          temp_v6 = param_2[-1];
        }
        else {
          temp_v6 = *param_1;
        }
      }
    }
    else {
      temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v20,*param_1,param_2[-1]);
      if (temp_v0 != 0) {
        temp_v6 = *param_1;
      }
      else {
        temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v20,*puVar9,param_2[-1]);
        if (temp_v0 == 0) {
          temp_v6 = *puVar9;
        }
        else {
          temp_v6 = param_2[-1];
        }
      }
    }
    while( 1 ) {
      while (temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v9,*puVar8,temp_v6), temp_v0 != 0) {
        puVar8 = puVar8 + 1;
      }
      do {
        puVar7 = puVar7 + -1;
        temp_v0 = _ZNK14SortObjectLessclEP10SortObjectS1_(temp_v9,temp_v6,*puVar7);
      } while (temp_v0 != 0);
      if (puVar7 <= puVar8) break;
      temp_v4 = *puVar8;
      *puVar8 = *puVar7;
      *puVar7 = temp_v4;
      puVar8 = puVar8 + 1;
    }
    param_3 = param_3 / 2;
    _ZSt16__introsort_loopIPP10SortObjecti14SortObjectLessEvT_S4_T0_T1_(puVar8,param_2,param_3, /* unrecovered */ 0);
    param_2 = puVar8;
    if (((int)puVar8 - (int)param_1) >> 2 < 0x11) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
