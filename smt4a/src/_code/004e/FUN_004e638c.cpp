/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e638c` (_code @ 0x4e638c, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int asdOperatorNewD(void);
int FUN_002e6490(float *);
int SBORROW4(unsigned int, unsigned int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spF8; /* 0xf8: local_f8 */
} param_5_stack;

extern unsigned char LAB_002419a0; /* 0x2419a0 */
extern unsigned char DAT_0057a6e4; /* 0x57a6e4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: qsort. */
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: FUN_002e6490. */
extern int FUN_003e8430(int);


void FUN_004e638c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  float *pfVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  int temp_v12 [53];
  
  temp_v2 = 0;
  do {
    temp_v4 = *(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0;
    temp_v6 = *(unsigned int *)(temp_v4 + 0x50);
    if (((temp_v6 & 1) != 0 && (temp_v6 & 2) != 0) && ((temp_v6 & 0x80) != 0)) {
      *(unsigned int *)(temp_v4 + 100) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  temp_v2 = FUN_003e8430(*param_1);
  if (((temp_v2 != 0) || (*(int *)(param_2 + 0x598) = param_3, param_3 == 0xffff)) || (param_3 == 0))
  {
    return;
  }
  if (param_5 == 0) {
    temp_v2 = 0x32;
    temp_v4 = 4;
  }
  else {
    temp_v2 = 0x2a;
    temp_v4 = 0x43;
  }
  temp_v1 = 0;
  temp_v6 = 0;
  temp_v3 = 0;
  if (temp_v2 == 0) {
    return;
  }
  do {
    temp_v7 = *(int *)(*param_1 + 0x1ed4) + (temp_v4 + temp_v3) * 0x1d0;
    temp_v5 = *(unsigned int *)(temp_v7 + 0x50);
    if (((temp_v5 & 1) != 0 && (temp_v5 & 2) != 0) && (temp_v5 & 0x80) != 0) {
      temp_v12[temp_v6] = temp_v7;
      if ((temp_v5 & 0x10) != 0) {
        temp_v1 = 1;
      }
      temp_v6 = temp_v6 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < temp_v2);
  if (temp_v6 < 2) {
    return;
  }
  if (param_3 == 4) {
    if (param_5 != 0 || temp_v1) {
      return;
    }
    temp_v5 = temp_v6 & 1;
    if (temp_v5 == 1) {
      *(unsigned int *)(temp_v12[0] + 100) = 0;
    }
    for (; temp_v5 < temp_v6; temp_v5 = temp_v5 + 2) {
      *(unsigned int *)(temp_v12[temp_v5] + 100) = temp_v5;
      *(unsigned int *)(temp_v12[temp_v5 + 1] + 100) = temp_v5 + 1;
    }
    return;
  }
  if (!(param_3 == 1 || param_3 == 2)) {
    if (param_3 != 3) {
      if (param_3 == 5) {
        qsort(temp_v12,temp_v6,4,&LAB_002419a0);
        goto LAB_004e6648;
      }
    }
    else {
      qsort(temp_v12,temp_v6);
    }
LAB_004e6584:
    temp_v0 = temp_v6 / 3;
    temp_v5 = temp_v0 * 2;
    if (temp_v5 == temp_v0 || SBORROW4(temp_v5,temp_v0)) {
      temp_v8 = 0;
    }
    else {
      temp_v8 = temp_v0 & 1;
      if (temp_v8 == 1) {
        *(int *)(temp_v12[temp_v0] + 100) = param_4;
      }
    }
    for (temp_v2 = temp_v0 + temp_v8; temp_v2 < (int)temp_v5; temp_v2 = temp_v2 + 2) {
      *(int *)(temp_v12[temp_v2] + 100) = param_4;
      *(int *)(temp_v12[temp_v2 + 1] + 100) = param_4;
    }
    param_4 = param_4 << 1;
    if ((int)temp_v5 >= (int)temp_v6) {
      temp_v8 = 0;
    }
    else {
      temp_v8 = temp_v6 & 1;
      if (temp_v8 == 1) {
        *(int *)(temp_v12[temp_v0 * 2] + 100) = param_4;
      }
    }
    for (temp_v2 = temp_v8 + temp_v5; temp_v2 < (int)temp_v6; temp_v2 = temp_v2 + 2) {
      *(int *)(temp_v12[temp_v2] + 100) = param_4;
      *(int *)(temp_v12[temp_v2 + 1] + 100) = param_4;
    }
  }
  else {
    qsort(temp_v12,temp_v6);
    temp_v9 = (*(float *)((unsigned char *)&(*(float *)((unsigned char *)&DAT_0057a6e4 - 0x4)) + 0x4));
    temp_v11 = (*(float *)((unsigned char *)&DAT_0057a6e4 - 0x4));
    if (param_3 != 5) {
      if (param_3 == 1) {
        temp_v5 = 0;
        if (temp_v6 != 2) {
          do {
            *(int *)(temp_v12[temp_v5] + 100) = param_4;
            while( 1 ) {
              temp_v5 = temp_v5 + 1;
              if (temp_v6 <= temp_v5) goto LAB_004e6630;
              if (temp_v5 == 0 || temp_v5 == temp_v6 - 1) break;
              *(unsigned int *)(temp_v12[temp_v5] + 100) = 0;
            }
          } while( 1 );
        }
        do {
          temp_v2 = temp_v12[temp_v5];
          if ((*(float *)(temp_v2 + 0xc) >= temp_v11) && (temp_v9 >= *(float *)(temp_v2 + 0xc))) {
            *(unsigned int *)(temp_v2 + 100) = 0;
          }
          else {
            *(int *)(temp_v2 + 100) = param_4;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 2);
        temp_v5 = 0;
        goto LAB_004e67d0;
      }
      goto LAB_004e6584;
    }
LAB_004e6648:
    if (temp_v6 < 0x28) {
      temp_v10 = 0.0f;
      pfVar5 = (float *)(temp_v6 << 2);
      temp_v9 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = 40.0f / temp_v9;
      asdOperatorNewD();
      pfVar6 = pfVar5 + -1;
      temp_v11 = temp_v10;
      if ((temp_v6 & 1) != 0) {
        temp_v11 = temp_v10 + temp_v9;
        *pfVar5 = temp_v10;
        pfVar6 = pfVar5;
      }
      temp_v5 = temp_v6 >> 1;
      if (temp_v5 != 0) {
        do {
          temp_v5 = temp_v5 - 1;
          pfVar6[1] = temp_v11;
          pfVar6 = pfVar6 + 2;
          *pfVar6 = temp_v11 + temp_v9;
          temp_v11 = temp_v11 + temp_v9 + temp_v9;
        } while (temp_v5 != 0);
        if (temp_v6 != 0) goto LAB_004e66b8;
      }
      else {
LAB_004e66b8:
        temp_v5 = 1;
        if (temp_v6 - 2 >= 2) {
          do {
            temp_v2 = FUN_001633a0(((temp_v6 - temp_v5) - 1) & 0xffff);
            temp_v2 = temp_v2 + temp_v5;
            pfVar6 = pfVar5 + temp_v5;
            temp_v11 = pfVar5[temp_v2];
            temp_v5 = temp_v5 + 1;
            pfVar5[temp_v2] = *pfVar6;
            *pfVar6 = temp_v11;
          } while (temp_v5 < temp_v6 - 2);
        }
        if (temp_v6 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = temp_v6 & 1;
          if (temp_v5 == 1) {
            *(int *)(temp_v12[0] + 100) = (int)*pfVar5;
          }
        }
        for (; temp_v5 < temp_v6; temp_v5 = temp_v5 + 2) {
          *(int *)(temp_v12[temp_v5] + 100) = (int)pfVar5[temp_v5];
          *(int *)(temp_v12[temp_v5 + 1] + 100) = (int)(pfVar5 + temp_v5)[1];
        }
      }
      FUN_002e6490(pfVar5);
    }
  }
LAB_004e6630:
  temp_v5 = 0;
  if (temp_v6 == 0) {
    return;
  }
LAB_004e67d0:
  do {
    temp_v2 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0;
      if (*(short *)(temp_v12[temp_v5] + 0x6a) == *(short *)(temp_v4 + 0x6a)) {
        *(unsigned int *)(temp_v4 + 100) = *(unsigned int *)(temp_v12[temp_v5] + 100);
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v5 = temp_v5 + 1;
    if (temp_v6 <= temp_v5) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
