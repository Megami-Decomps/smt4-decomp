/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a270` (_code @ 0x42a270, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_7_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */
extern unsigned int DAT_0062d388; /* 0x62d388 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001885e8. */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);


unsigned int *
FUN_0042a270(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6,
            int param_7)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r9;
  int uStack_68;
  unsigned int temp_v2;
  int *temp_v3;
  unsigned int uStack_5c;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int uStack_4c;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11 [3];
  unsigned int temp_v12 [2];
  
  temp_v11[0] = param_3 | ((param_2 & 0xff0fffff) << 8);
  temp_v11[2] = (unaff_r9 & 0xffffff00) | 1;
  temp_v11[1] = 0x4008c;
  temp_v10 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v12[0] = DAT_005893a8;
  temp_v3 = &temp_v6;
  temp_v5 = 0;
  temp_v2 = 2;
  uStack_5c = 0x14;
  temp_v4 = 1;
  uStack_68 = 0x10;
  puVar1 = temp_v12;
  uStack_4c = param_4;
  FUN_001885e8(puVar1,&temp_v10,0,0x2345678a,2,temp_v11);
  temp_v0 = temp_v10;
  if ((int)puVar1 < 0) {
    return puVar1;
  }
  piVar2 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                            (&DAT_0062d388);
  if (piVar2 == (int *)0x0) {
    software_interrupt(0x23);
    return (unsigned int *)0xf96047a2;
  }
  *piVar2 = (int)"럤B려B";
  piVar2[1] = temp_v0;
  temp_v0 = 0;
  if (param_7 != 0) {
    temp_v0 = (**(romwright_code **)*piVar2)(piVar2,temp_v11 + 2,0,0,&uStack_68,0x28);
    temp_v1 = -1;
    if (((-1 < temp_v0) && (temp_v11[2] == 0x28)) &&
       (temp_v0 = (int)temp_v3 + temp_v6 + temp_v7 + temp_v4, -1 < temp_v0)) {
      temp_v1 = param_5 * 0x20 + param_6 * 0x18 + temp_v0;
    }
  }
  else {
    temp_v1 = param_5 * 0x20 + param_6 * 0x18 + temp_v0;
  }
  *param_1 = temp_v1;
  if (0 < temp_v1) {
    (**(romwright_code **)(*piVar2 + 0x30))(piVar2);
    return (unsigned int *)0x0;
  }
  software_interrupt(0x23);
  return (unsigned int *)0xf96047a2;
}
