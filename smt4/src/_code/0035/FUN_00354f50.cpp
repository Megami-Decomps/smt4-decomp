/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354f50` (_code @ 0x354f50, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fs_ipc_FileSystem_OpenFileDirectly(int *, int [3], int, int, int, unsigned int [3]);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_7: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_7_stack;

extern int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d4358; /* 0x4d4358 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
/* Supplied declaration required: nn_fs_ipc_FileSystem_OpenFileDirectly. */


/* WARNING: Type propagation algorithm not settling */

int * FUN_00354f50(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6
                  ,int param_7)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r9;
  int temp_v2 [2];
  int *temp_v3;
  unsigned int uStack_5c;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6 [3];
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10 [3];
  int temp_v11 [2];
  
  temp_v10[0] = param_3 | ((param_2 & 0xff0fffff) << 8);
  temp_v10[2] = (unaff_r9 & 0xffffff00) | 1;
  temp_v10[1] = 0x4008c;
  temp_v6[0] = 0;
  temp_v6[1] = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v11[0] = DAT_0044e660;
  temp_v3 = temp_v6 + 1;
  temp_v5 = 0;
  temp_v4 = 1;
  temp_v2[1] = 2;
  uStack_5c = 0x14;
  temp_v2[0] = 0x10;
  piVar1 = temp_v11;
  temp_v6[2] = param_4;
  nn_fs_ipc_FileSystem_OpenFileDirectly(piVar1,temp_v6,0,0x2345678a,2,temp_v10);
  temp_v0 = temp_v6[0];
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  piVar1 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                            (&DAT_004d4358);
  if (piVar1 == (int *)0x0) {
    software_interrupt(0x23);
    return (int *)0xf96047a2;
  }
  *piVar1 = (int)"扄5抄5兀=慬5";
  piVar1[1] = temp_v0;
  temp_v0 = 0;
  if (param_7 != 0) {
    temp_v0 = (**(romwright_code **)*piVar1)(piVar1,temp_v2,0,0,temp_v6 + 2,0x28);
    temp_v1 = -1;
    if (((-1 < temp_v0) && (temp_v2[0] == 0x28)) &&
       (temp_v0 = temp_v10[2] + temp_v11[0] + temp_v8 + temp_v10[0], -1 < temp_v0)) {
      temp_v1 = param_5 * 0x20 + param_6 * 0x18 + temp_v0;
    }
  }
  else {
    temp_v1 = param_5 * 0x20 + param_6 * 0x18 + temp_v0;
  }
  *param_1 = temp_v1;
  if (0 < temp_v1) {
    (**(romwright_code **)(*piVar1 + 0x2c))(piVar1);
    return (int *)0x0;
  }
  software_interrupt(0x23);
  return (int *)0xf96047a2;
}

} /* extern "C" */
