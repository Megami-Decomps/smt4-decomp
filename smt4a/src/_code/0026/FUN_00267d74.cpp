/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267d74` (_code @ 0x267d74, 0x3b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(int, int, int, unsigned char *);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned char LAB_00321c94; /* 0x321c94 */

/* Supplied declaration required: qsort. */
extern int FUN_003df4a4(unsigned short);
extern int FUN_004bca68(unsigned int, unsigned short);


/* WARNING: Removing unreachable block (ram,0x00268074) */

void FUN_00267d74(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  int temp_v9;
  int *piVar12;
  int temp_v10;
  
  do {
    temp_v1 = 0;
    while( 1 ) {
      temp_v6 = param_1 + temp_v1 * 2;
      if (((*(short *)(temp_v6 + 0x76a4) != 0 && param_4 != -1) && temp_v1 != param_4) &&
         (*(short *)(temp_v6 + 0x76a4) == *(short *)(param_3 + param_4 * 2 + 0x34))) break;
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 8) {
        return;
      }
    }
    temp_v10 = param_3 + temp_v1 * 2;
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 2 + 0x76a4);
    *(unsigned short *)(temp_v6 + 0x76a4) = *(unsigned short *)(temp_v10 + 0x34);
    *(unsigned char *)(param_1 + temp_v1 + 0x7860) = 1;
    temp_v2 = param_1 + 0x76c4;
    temp_v8 = 0;
    temp_v9 = 7;
    do {
      temp_v3 = param_1 + temp_v8 * 2;
      if (*(short *)(temp_v3 + 0x76c6) == *(short *)(param_1 + 0x76c4)) {
        *(unsigned short *)(temp_v3 + 0x76c6) = 0;
        qsort(temp_v2,8,2,&LAB_00321c94);
      }
      temp_v9 = temp_v9 - 1;
      temp_v8 = temp_v8 + 1;
    } while (temp_v9 != 0);
    puVar10 = (unsigned int *)(param_1 + 0x7854);
    temp_v7 = *puVar10;
    if (0 < (int)temp_v7) {
      temp_v4 = temp_v7 & 1;
      if (temp_v4 == 1) {
        temp_v8 = param_1 + temp_v7 * 2;
        *(unsigned short *)(temp_v8 + 0x76c4) = *(unsigned short *)(temp_v8 + 0x76c2);
      }
      temp_v7 = (unsigned int)(temp_v4 == 1);
      if ((int)temp_v4 < (int)*puVar10) {
        do {
          temp_v4 = temp_v4 + 2;
          temp_v9 = temp_v7 + 1;
          temp_v8 = param_1 + (*puVar10 - temp_v7) * 2;
          *(unsigned short *)(temp_v8 + 0x76c4) = *(unsigned short *)(temp_v8 + 0x76c2);
          temp_v7 = temp_v7 + 2;
          temp_v8 = param_1 + (*puVar10 - temp_v9) * 2;
          *(unsigned short *)(temp_v8 + 0x76c4) = *(unsigned short *)(temp_v8 + 0x76c2);
        } while ((int)temp_v4 < (int)*puVar10);
      }
    }
    temp_v7 = *puVar10;
    temp_v4 = 8 - temp_v7;
    if (0 < (int)temp_v4) {
      temp_v8 = 0;
      if ((int)temp_v7 >= 8) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = temp_v4 & 1;
        if (temp_v5 == 1) {
          temp_v8 = 1;
          *(unsigned short *)(param_1 + temp_v7 * 2 + 0x76c4) = 0;
        }
      }
      for (; (int)temp_v5 < (int)temp_v4; temp_v5 = temp_v5 + 2) {
        temp_v9 = temp_v8 + 1;
        *(unsigned short *)(param_1 + (temp_v7 + temp_v8) * 2 + 0x76c4) = 0;
        temp_v8 = temp_v8 + 2;
        *(unsigned short *)(param_1 + (temp_v7 + temp_v9) * 2 + 0x76c4) = 0;
      }
    }
    temp_v8 = FUN_004bca68(param_2,*(unsigned short *)(temp_v10 + 0x34));
    if (temp_v8 != 0) {
      if (*(short *)(param_1 + 0x76c6) == *(short *)(temp_v10 + 0x34)) {
        *(unsigned short *)(param_1 + 0x76c4) = 0;
      }
      else {
        temp_v8 = 0;
        temp_v9 = 7;
        *(short *)(param_1 + 0x76c4) = *(short *)(temp_v10 + 0x34);
        do {
          temp_v3 = param_1 + temp_v8 * 2;
          if (*(short *)(temp_v3 + 0x76c6) == *(short *)(param_1 + 0x76c4)) {
            *(unsigned short *)(temp_v3 + 0x76c6) = 0;
            qsort(temp_v2,8,2,&LAB_00321c94);
          }
          temp_v9 = temp_v9 - 1;
          temp_v8 = temp_v8 + 1;
        } while (temp_v9 != 0);
      }
    }
    else {
      *(unsigned short *)(param_1 + 0x76c4) = 0;
      qsort(temp_v2,8,2,&LAB_00321c94);
    }
    temp_v2 = FUN_003df4a4(temp_v0);
    piVar12 = (int *)(param_1 + 0x7858);
    param_4 = temp_v1;
    if ((temp_v2 == 0) || (temp_v2 = FUN_004bca68(param_2,*(unsigned short *)(temp_v10 + 0x34)), temp_v2 != 0))
    {
      temp_v2 = FUN_003df4a4(temp_v0);
      if ((temp_v2 == 0) && (temp_v2 = FUN_004bca68(param_2,*(unsigned short *)(temp_v10 + 0x34)), temp_v2 != 0)
         ) {
        *piVar12 = *piVar12 + 1;
        *(unsigned short *)(temp_v6 + 0x76b4) = 1;
      }
      else {
        temp_v6 = FUN_003df4a4(temp_v0);
        if (((temp_v6 == 0) &&
            (temp_v6 = FUN_004bca68(param_2,*(unsigned short *)(temp_v10 + 0x34)), temp_v6 == 0)) ||
           (*(short *)(param_3 + temp_v1 * 2 + 0x34) == 0)) {
          *puVar10 = *puVar10 - 1;
        }
      }
    }
    else {
      if (*(short *)(param_3 + temp_v1 * 2 + 0x34) != 0) {
        *piVar12 = *piVar12 - 1;
      }
      *puVar10 = *puVar10 - 1;
      *(unsigned short *)(temp_v6 + 0x76b4) = 0;
    }
  } while( 1 );
}

} /* extern "C" */
