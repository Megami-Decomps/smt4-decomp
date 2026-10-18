/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb188` (_code @ 0x2eb188, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 8 slot(s), 29 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern signed char DAT_0059497e; /* 0x59497e */

extern int FUN_00107d3e(int *, int, unsigned char, unsigned char);
/* Supplied declaration required: FUN_002ea852. */
/* Supplied declaration required: FUN_002eb16e. */
/* Supplied declaration required: FUN_002eb462. */


void FUN_002eb188(int *param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  int temp_v0;
  int *piVar4;
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [16];
  unsigned int temp_v3;
  int *piStack_24;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int iStack_18;
  
  piStack_24 = param_1;
  temp_v4 = param_2;
  temp_v5 = param_3;
  iStack_18 = param_4;
  puVar1 = (unsigned char *)FUN_002eb462(temp_v1,(char)param_1[1],(char)param_1[4]);
  *(unsigned char *)(param_4 + 0x25) = *puVar1;
  puVar1 = (unsigned char *)FUN_002eb462(temp_v1,(char)param_1[1],temp_v5);
  *(unsigned char *)(param_4 + 0x26) = *puVar1;
  (**(romwright_code **)(*param_1 + 0x54))(param_1);
  temp_v1[0] = (unsigned char)temp_v5;
  piVar2 = param_1 + 0x15;
  FUN_002ea852(piVar2,param_4 + 0xdc,temp_v1);
  (**(romwright_code **)(*param_1 + 0x58))(param_1);
  piVar4 = param_1 + 0x30;
  if (piVar2 != (int *)0x0) {
    *(char *)(param_4 + 0x24) = (char)piVar2[0x53];
    temp_v0 = FUN_00107d3e(piVar2,param_4,(char)param_1[1],param_5 != 0);
  }
  else {
    temp_v0 = (**(romwright_code **)(*(int *)param_1[0x3c] + 0x10))
                      ((int *)param_1[0x3c],param_4,(char)param_1[1],param_5 != 0);
  }
  if (temp_v0 != 1) {
    temp_v3 = 0;
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 0x47;
    }
    temp_v0 = (**(romwright_code **)(*(int *)piVar4[0xc] + 8))
                      ((int *)piVar4[0xc],param_4,temp_v0,param_5,(char)param_1[1],param_1 + 0x27,
                       piVar2,temp_v2);
    if (temp_v0 == 0) {
      return;
    }
    FUN_002eb16e(param_4 + 0x28,temp_v2);
  }
  (**(romwright_code **)(*(int *)param_1[3] + 0x20))
            ((int *)param_1[3],temp_v4,(char)param_1[1],(char)param_1[4],temp_v5,param_4,
             (int)DAT_0059497e);
  return;
}
