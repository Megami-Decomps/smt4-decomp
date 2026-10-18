/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca6c4` (_code @ 0x3ca6c4, 0x4cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00434278; /* 0x434278 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_003ae850. */
/* Supplied declaration required: FUN_003aeaa4. */


void FUN_003ca6c4(int *param_1,unsigned int *param_2)

{
/* irregular: 4 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *puVar12;
  int temp_v10;
  
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
    temp_v4 = *param_2 | 0x80;
    *param_2 = temp_v4;
  }
  else if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) {
    temp_v4 = *param_2 | 0x1000;
    *param_2 = temp_v4;
  }
  temp_v3 = 1;
  temp_v10 = (int)*(short *)(param_2[10] + 0x14e);
  temp_v2 = *(short *)(param_2[10] + 0x14c);
  temp_v4 = *(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + (unsigned int)(unsigned short)param_2[0xb] * 0x288);
  temp_v5 = temp_v10;
  FUN_002ae164();
  FUN_002b4670();
  if (temp_v2 != 2) {
    if (temp_v2 == 8) {
      temp_v8 = 0;
      if (temp_v10 != 0) {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x62);
      }
      if ((!(temp_v10 == 0 || temp_v8 == 0)) &&
         ((FUN_002ae164(), temp_v8 == 0 ||
          (temp_v8 = (*(unsigned int *)(temp_v5 + 0x28) & 0x1ff) >> 5,
          !((temp_v8 != 2 && temp_v8 != 3) && temp_v8 != 4))))) {
        temp_v3 = 0;
      }
    }
  }
  else if ((temp_v5 != 0) &&
          (temp_v8 = (*(unsigned int *)(temp_v5 + 0x28) & 0x1ff) >> 5,
          !((temp_v8 != 2 && temp_v8 != 3) && temp_v8 != 4))) {
    temp_v3 = 0;
  }
  temp_v10 = 0x6d;
  temp_v5 = 0;
  do {
    temp_v10 = temp_v10 - 1;
    temp_v7 = temp_v5 * 0x114 + 0x50;
    temp_v8 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7);
    *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7) = temp_v8 & 0xfffffffb;
    *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7) = temp_v8 & 0xfffffff3;
    temp_v5 = temp_v5 + 1;
  } while (temp_v10 != 0);
  param_2[0x169] = 0xffffffff;
  temp_v5 = 0;
  do {
    temp_v8 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1e98) + temp_v5 * 0x114 + 0x60);
    if (((-1 < (int)temp_v8) &&
        (temp_v6 = *(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v8 * 0x288), (temp_v6 & 1) != 0)) &&
       ((temp_v6 & 0x40) == 0)) {
      if (temp_v3) {
        if ((temp_v4 & 10) != 0) {
          temp_v6 = temp_v6 & 0x10;
joined_r0x003ca8c0:
          if (temp_v6 == 0) goto LAB_003ca908;
        }
        else if ((temp_v4 & 0x10) != 0) {
          temp_v6 = temp_v6 & 0x10;
joined_r0x003ca8d4:
          if (temp_v6 != 0) goto LAB_003ca908;
        }
      }
      else {
        if ((temp_v4 & 10) != 0) {
          temp_v6 = temp_v6 & 10;
          goto joined_r0x003ca8c0;
        }
        if ((temp_v4 & 0x10) != 0) {
          temp_v6 = temp_v6 & 10;
          goto joined_r0x003ca8d4;
        }
      }
      if ((int)param_2[0x169] < 0) {
        param_2[0x169] = temp_v8;
      }
      temp_v10 = temp_v5 * 0x114 + 0x50;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v10) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v10) | 4;
    }
LAB_003ca908:
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x6d) {
      FUN_002c424c(param_2 + 0x51,0x214,0xffffffff);
      FUN_002c424c(param_2 + 0xd6,0x214,0xffffffff);
      temp_v10 = 0;
      temp_v5 = 0;
      do {
        puVar7 = (unsigned int *)*param_1;
        temp_v9 = puVar7[0x7a6] + temp_v10 * 0x114;
        temp_v7 = temp_v5;
        if ((*(unsigned int *)(temp_v9 + 0x50) & 4) != 0 && (*(unsigned int *)(temp_v9 + 0x50) & 0x400) != 0) {
          FUN_00282924(puVar7,(int)*(short *)(temp_v9 + 0x62));
          if (((*puVar7 & 0x10) != 0) &&
             (((*puVar7 & 0x100) == 0 || ((short)puVar7[2] == *(short *)(temp_v9 + 0x62))))) {
            temp_v4 = DAT_00439ca8;
            FUN_003aeaa4(DAT_00439ca8,*(unsigned short *)((int)puVar7 + 0xce),
                         (int)*(char *)(temp_v9 + 0x3c),(int)*(short *)((int)puVar7 + 0x1b6),
                         (int)*(short *)((int)puVar7 + 0x1ba),*(unsigned short *)((int)puVar7 + 0x1c6));
            temp_v7 = temp_v5 + 1;
            param_2[temp_v5 + 0x51] = temp_v4;
            param_2[temp_v5 + 0xd6] = (int)*(short *)((int)puVar7 + 0x6e);
          }
        }
        temp_v10 = temp_v10 + 1;
        temp_v5 = temp_v7;
      } while (temp_v10 < 0x85);
      FUN_003ae850(DAT_00439ca8,*param_1 + 0x1e8c,5);
      FUN_002c4938(param_2 + 0xe,0x85);
      FUN_002c3944((int)param_2 + 0xbd,0x85);
      DAT_00434278 = 0xffffffff;
      temp_v5 = 0;
      do {
        if ((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v5 * 0x114 + 0x50) & 4) != 0) {
          temp_v2 = *(short *)(*(int *)(*param_1 + 0x1e98) + temp_v5 * 0x114 + 0x60);
          if (-1 < temp_v2) {
            *(char *)((int)param_2 + temp_v2 + 0xbd) = (char)temp_v2;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x85);
      temp_v5 = 0;
      temp_v10 = 0x6c;
      while( 1 ) {
        do {
          temp_v0 = *(unsigned char *)((int)param_2 + temp_v10 + 0xbc);
          temp_v7 = *(int *)(*param_1 + 0x1fc0);
          puVar7 = (unsigned int *)(temp_v7 + (unsigned int)temp_v0 * 0x288);
          temp_v4 = *puVar7;
          if ((((temp_v4 & 1) != 0) && ((temp_v4 & 0x40) == 0)) &&
             (((temp_v4 & 0x10) != 0 && ((temp_v4 & 0x100) == 0)))) {
            temp_v1 = *(unsigned char *)((int)param_2 + temp_v10 + 0xbd);
            puVar12 = (unsigned int *)(temp_v7 + (unsigned int)temp_v1 * 0x288);
            temp_v4 = *puVar12;
            if (((((temp_v4 & 1) != 0) && ((temp_v4 & 0x40) == 0)) && ((temp_v4 & 0x10) != 0)) &&
               (((temp_v4 & 0x100) == 0 &&
                (temp_v7 = *(int *)(*param_1 + 0x1e98),
                *(float *)(temp_v7 + (short)puVar12[2] * 0x114 + 0xc) <
                *(float *)(temp_v7 + (short)puVar7[2] * 0x114 + 0xc))))) {
              *(unsigned char *)((int)param_2 + temp_v10 + 0xbd) = temp_v0;
              *(unsigned char *)((int)param_2 + temp_v10 + 0xbc) = temp_v1;
            }
          }
          temp_v10 = temp_v10 - 1;
        } while (temp_v5 < temp_v10);
        temp_v5 = temp_v5 + 1;
        if (temp_v5 >= 0x6c) break;
        temp_v10 = 0x6c;
      }
      temp_v5 = 0;
      do {
        if (*(char *)((int)param_2 + temp_v5 + 0xbd) != '\0') {
          param_2[0x169] = (unsigned int)*(unsigned char *)((int)param_2 + temp_v5 + 0xbd);
          return;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      return;
    }
  } while( 1 );
}
