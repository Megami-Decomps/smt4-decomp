/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00405aac` (_code @ 0x405aac, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_00404dd0. */


void FUN_00405aac(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  float temp_v8;
  float temp_v9;
  
  temp_v9 = 0.26f;
  temp_v8 = temp_v9;
  FUN_001879d0(DAT_0059dbb4);
  temp_v3 = FUN_001834a4(0x32,0x37);
  temp_v6 = DAT_0059dbb4;
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v4 = (int)*(short *)(temp_v3 + 10);
  temp_v2 = 0;
  temp_v5 = (int)**(short **)(temp_v3 + 0xc);
  temp_v1 = (*(short **)(temp_v3 + 0xc))[1];
  if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
    temp_v7 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
    temp_v3 = *(int *)(temp_v7 + 8);
    *(unsigned int *)(temp_v7 + 8) = 0;
    if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v3 != 0) {
      (**(romwright_code **)(temp_v6 + 0x1334))();
      *(unsigned char *)(temp_v6 + 0x1330) = 0;
    }
    temp_v2 = 1;
  }
  FUN_00168e00((int)temp_v9 + (int)temp_v0,temp_v4,temp_v5,(int)temp_v1);
  if (*(int *)(param_1 + 0x1c) != 1) {
    FUN_00404dd0(param_1,param_2,param_3);
  }
  else {
    FUN_001677c0();
    temp_v6 = FUN_001834a4(0x32,0x38);
    FUN_001879d0(DAT_0059dbb4);
    FUN_001835b4(2,*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) * 1000,
                 (int)*(short *)(*(int *)(param_1 + 0x664) + 0xc) + (int)*(short *)(temp_v6 + 8) +
                 param_2 + (int)temp_v8,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(*(int *)(param_1 + 0x664) + 0xe) +
                 param_3,0x65);
    FUN_001677c0();
  }
  temp_v6 = DAT_0059dbb4;
  if (temp_v2) {
    piVar9 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v3 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = 3;
    if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v3 != 3) {
      (**(romwright_code **)(temp_v6 + 0x1334))();
      *(unsigned char *)(temp_v6 + 0x1330) = 0;
    }
  }
  FUN_00168770();
  return;
}
