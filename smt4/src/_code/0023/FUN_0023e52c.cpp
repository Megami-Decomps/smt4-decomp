/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e52c` (_code @ 0x23e52c, 0x4d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00250d74(float *);
int FUN_002b7bca(...);
int FUN_002c6650(void);
int SBORROW4(unsigned int, unsigned int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spF8; /* 0xf8: local_f8 */
} param_5_stack;

extern unsigned char LAB_001b1a24; /* 0x1b1a24 */
extern float DAT_00439acc; /* 0x439acc */
extern float DAT_00439ad0; /* 0x439ad0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0023eae0(unsigned int);
/* Supplied declaration required: FUN_00250d74. */
extern int FUN_00293230(int);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002c6650. */


void FUN_0023e52c(int *param_1,int param_2,int param_3,int param_4,int param_5)

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
    temp_v4 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
    temp_v6 = *(unsigned int *)(temp_v4 + 0x50);
    if (((temp_v6 & 1) != 0 && (temp_v6 & 2) != 0) && ((temp_v6 & 0x80) != 0)) {
      *(unsigned int *)(temp_v4 + 0x5c) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  temp_v2 = FUN_00293230(*param_1);
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
    temp_v7 = *(int *)(*param_1 + 0x1e98) + (temp_v4 + temp_v3) * 0x114;
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
      *(unsigned int *)(temp_v12[0] + 0x5c) = 0;
    }
    for (; temp_v5 < temp_v6; temp_v5 = temp_v5 + 2) {
      *(unsigned int *)(temp_v12[temp_v5] + 0x5c) = temp_v5;
      *(unsigned int *)(temp_v12[temp_v5 + 1] + 0x5c) = temp_v5 + 1;
    }
    return;
  }
  if (!(param_3 == 1 || param_3 == 2)) {
    if (param_3 != 3) {
      if (param_3 == 5) {
        FUN_002b7bca(temp_v12,temp_v6,4,&LAB_001b1a24);
        goto LAB_0023e7e8;
      }
    }
    else {
      FUN_002b7bca(temp_v12,temp_v6);
    }
LAB_0023e724:
    temp_v0 = temp_v6 / 3;
    temp_v5 = temp_v0 * 2;
    if (temp_v5 == temp_v0 || SBORROW4(temp_v5,temp_v0)) {
      temp_v8 = 0;
    }
    else {
      temp_v8 = temp_v0 & 1;
      if (temp_v8 == 1) {
        *(int *)(temp_v12[temp_v0] + 0x5c) = param_4;
      }
    }
    for (temp_v2 = temp_v0 + temp_v8; temp_v2 < (int)temp_v5; temp_v2 = temp_v2 + 2) {
      *(int *)(temp_v12[temp_v2] + 0x5c) = param_4;
      *(int *)(temp_v12[temp_v2 + 1] + 0x5c) = param_4;
    }
    param_4 = param_4 << 1;
    if ((int)temp_v5 >= (int)temp_v6) {
      temp_v8 = 0;
    }
    else {
      temp_v8 = temp_v6 & 1;
      if (temp_v8 == 1) {
        *(int *)(temp_v12[temp_v0 * 2] + 0x5c) = param_4;
      }
    }
    for (temp_v2 = temp_v8 + temp_v5; temp_v2 < (int)temp_v6; temp_v2 = temp_v2 + 2) {
      *(int *)(temp_v12[temp_v2] + 0x5c) = param_4;
      *(int *)(temp_v12[temp_v2 + 1] + 0x5c) = param_4;
    }
  }
  else {
    FUN_002b7bca(temp_v12,temp_v6);
    temp_v9 = DAT_00439ad0;
    temp_v11 = DAT_00439acc;
    if (param_3 != 5) {
      if (param_3 == 1) {
        temp_v5 = 0;
        if (temp_v6 != 2) {
          do {
            *(int *)(temp_v12[temp_v5] + 0x5c) = param_4;
            while( 1 ) {
              temp_v5 = temp_v5 + 1;
              if (temp_v6 <= temp_v5) goto LAB_0023e7d0;
              if (temp_v5 == 0 || temp_v5 == temp_v6 - 1) break;
              *(unsigned int *)(temp_v12[temp_v5] + 0x5c) = 0;
            }
          } while( 1 );
        }
        do {
          temp_v2 = temp_v12[temp_v5];
          if ((*(float *)(temp_v2 + 0xc) >= temp_v11) && (temp_v9 >= *(float *)(temp_v2 + 0xc))) {
            *(unsigned int *)(temp_v2 + 0x5c) = 0;
          }
          else {
            *(int *)(temp_v2 + 0x5c) = param_4;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 2);
        temp_v5 = 0;
        goto LAB_0023e970;
      }
      goto LAB_0023e724;
    }
LAB_0023e7e8:
    if (temp_v6 < 0x28) {
      temp_v10 = 0.0f;
      pfVar5 = (float *)(temp_v6 << 2);
      temp_v9 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = 40.0f / temp_v9;
      FUN_002c6650();
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
        if (temp_v6 != 0) goto LAB_0023e858;
      }
      else {
LAB_0023e858:
        temp_v5 = 1;
        if (temp_v6 - 2 >= 2) {
          do {
            temp_v2 = FUN_0023eae0(((temp_v6 - temp_v5) - 1) & 0xffff);
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
            *(int *)(temp_v12[0] + 0x5c) = (int)*pfVar5;
          }
        }
        for (; temp_v5 < temp_v6; temp_v5 = temp_v5 + 2) {
          *(int *)(temp_v12[temp_v5] + 0x5c) = (int)pfVar5[temp_v5];
          *(int *)(temp_v12[temp_v5 + 1] + 0x5c) = (int)(pfVar5 + temp_v5)[1];
        }
      }
      FUN_00250d74(pfVar5);
    }
  }
LAB_0023e7d0:
  temp_v5 = 0;
  if (temp_v6 == 0) {
    return;
  }
LAB_0023e970:
  do {
    temp_v2 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
      if (*(short *)(temp_v12[temp_v5] + 0x62) == *(short *)(temp_v4 + 0x62)) {
        *(unsigned int *)(temp_v4 + 0x5c) = *(unsigned int *)(temp_v12[temp_v5] + 0x5c);
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
