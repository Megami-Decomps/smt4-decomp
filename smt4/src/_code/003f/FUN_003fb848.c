/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb848` (_code @ 0x3fb848, 0x36c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_8_stack;

/* Supplied declaration required: FUN_0022bc54. */


void FUN_003fb848(int *param_1,int param_2,int param_3,unsigned char *param_4,int param_5,int param_6,
                 unsigned char *param_7,unsigned char *param_8)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v4;
  unsigned char *puVar8;
  unsigned char *in_r12;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char *puStack_40;
  int temp_v7;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    temp_v1 = *(int *)(param_2 + 0x10);
    puVar5 = (unsigned char *)0x0;
  }
  else {
    temp_v1 = *(int *)(param_2 + 0x10);
    puVar5 = (unsigned char *)(*(int *)(param_2 + 4) + temp_v1);
  }
  temp_v4 = (int)param_8 - param_5;
  if ((param_4 != puVar5 || param_5 != temp_v1) || param_3 != param_2) {
    FUN_0022bc54(&temp_v5,param_2);
    if ((param_7 == temp_v6 && param_8 == puStack_40) && param_6 == temp_v5) {
      temp_v2 = (param_5 - *(int *)(param_2 + 0x10)) + *(int *)(param_2 + 0x10);
      *(unsigned int *)(param_2 + 0x14) = temp_v2;
      if (*(unsigned int *)(param_2 + 0xc) < temp_v2) {
        *(unsigned int *)(param_2 + 0x14) = temp_v2 - *(unsigned int *)(param_2 + 0xc);
      }
      *(unsigned int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - temp_v4;
      FUN_0022bc54(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    temp_v5 = *(int *)(param_2 + 0x10);
    FUN_0022bc54(&temp_v6,param_2);
    puVar5 = param_4;
    if (temp_v7 - (int)param_8 < param_5 - temp_v5) {
      while( 1 ) {
        if (*(int *)(param_2 + 0x18) != 0) {
          puVar8 = *(unsigned char **)(param_2 + 0x14);
          if (puVar8 != (unsigned char *)0x0) {
            in_r12 = *(unsigned char **)(param_2 + 0xc);
          }
          if (!(puVar8 != (unsigned char *)0x0 && puVar8 != in_r12)) {
            puVar8 = *(unsigned char **)(param_2 + 0xc);
            puVar6 = *(unsigned char **)(param_2 + 4);
          }
          else if (*(unsigned char **)(param_2 + 0x10) < puVar8) {
            puVar6 = puVar8 + *(int *)(param_2 + 4);
          }
          else {
            puVar6 = puVar8 + *(int *)(param_2 + 4);
            puVar8 = puVar8 + (int)in_r12;
          }
        }
        else {
          puVar8 = *(unsigned char **)(param_2 + 0x14);
          puVar6 = (unsigned char *)0x0;
        }
        if ((param_7 == puVar6 && param_8 == puVar8) && param_6 == param_2) break;
        puVar8 = puVar5 + 1;
        if (*(unsigned char **)(param_3 + 4) + *(int *)(param_3 + 0xc) == puVar5 + 1) {
          puVar8 = *(unsigned char **)(param_3 + 4);
        }
        in_r12 = *(unsigned char **)(param_6 + 4);
        puVar6 = param_7 + 1;
        temp_v0 = *param_7;
        param_7 = puVar6;
        if (in_r12 + *(int *)(param_6 + 0xc) == puVar6) {
          param_7 = in_r12;
        }
        param_8 = param_8 + 1;
        *puVar5 = temp_v0;
        puVar5 = puVar8;
      }
      if (*(unsigned int *)(param_2 + 0x14) >= temp_v4) {
        temp_v1 = -temp_v4;
      }
      else {
        temp_v1 = *(int *)(param_2 + 0xc) - temp_v4;
      }
      *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) + temp_v1;
      *(unsigned int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - temp_v4;
      param_1[2] = param_5;
      *param_1 = param_3;
      param_1[1] = (int)param_4;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    param_4 = param_4 + -1;
    if (param_4 < *(unsigned char **)(param_3 + 4)) {
      param_4 = param_4 + *(int *)(param_3 + 0xc);
    }
    puVar5 = param_7 + -1;
    param_5 = param_5 - 1;
    if (puVar5 < *(unsigned char **)(param_6 + 4)) {
      puVar5 = puVar5 + *(int *)(param_6 + 0xc);
    }
    while( 1 ) {
      *puVar5 = *param_4;
      temp_v1 = *(int *)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x18) != 0) {
        puVar8 = (unsigned char *)(*(int *)(param_2 + 4) + temp_v1);
      }
      else {
        puVar8 = (unsigned char *)0x0;
      }
      if ((param_4 == puVar8 && param_5 == temp_v1) && param_3 == param_2) break;
      if (param_4 == *(unsigned char **)(param_3 + 4)) {
        param_4 = *(unsigned char **)(param_3 + 4) + *(int *)(param_3 + 0xc);
      }
      param_4 = param_4 + -1;
      param_5 = param_5 - 1;
      if (puVar5 != *(unsigned char **)(param_6 + 4)) {
        puVar5 = puVar5 + -1;
      }
      else {
        puVar5 = *(unsigned char **)(param_6 + 4) + (*(int *)(param_6 + 0xc) - 1);
      }
    }
    temp_v2 = temp_v1 + temp_v4;
    *(unsigned int *)(param_2 + 0x10) = temp_v2;
    if (*(unsigned int *)(param_2 + 0xc) <= temp_v2) {
      *(unsigned int *)(param_2 + 0x10) = temp_v2 - *(unsigned int *)(param_2 + 0xc);
    }
    *(unsigned int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - temp_v4;
    param_1[2] = (int)param_8;
    *param_1 = param_6;
    param_1[1] = (int)param_7;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*(unsigned int *)(param_2 + 0x18) == temp_v4) {
    *(unsigned int *)(param_2 + 0x18) = 0;
    *(unsigned int *)(param_2 + 0x14) = 0;
    *(unsigned int *)(param_2 + 0x10) = 0;
    FUN_0022bc54(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  temp_v2 = *(int *)(param_2 + 0x10) + temp_v4;
  *(unsigned int *)(param_2 + 0x10) = temp_v2;
  if (*(unsigned int *)(param_2 + 0xc) <= temp_v2) {
    *(unsigned int *)(param_2 + 0x10) = temp_v2 - *(unsigned int *)(param_2 + 0xc);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x18) - temp_v4;
  *(int *)(param_2 + 0x18) = temp_v1;
  temp_v3 = *(int *)(param_2 + 0x10);
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(param_2 + 4);
    param_1[2] = temp_v3;
    param_1[1] = temp_v1 + temp_v3;
    *param_1 = param_2;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  param_1[2] = temp_v3;
  param_1[1] = 0;
  *param_1 = param_2;
                    /* WARNING: Treating indirect jump as return */
  return;
}
