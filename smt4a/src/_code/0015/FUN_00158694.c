/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158694` (_code @ 0x158694, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_00158794; /* 0x158794 */
extern int DAT_005893a8; /* 0x5893a8 */
extern unsigned int DAT_0062d388; /* 0x62d388 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: FUN_001885e8. */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);


int FUN_00158694(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2 [3];
  unsigned int uStack_54;
  unsigned int temp_v3;
  unsigned int uStack_4c;
  int temp_v4 [2];
  unsigned int **temp_v5;
  unsigned int temp_v6;
  int temp_v7 [2];
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v5 = (unsigned int **)&temp_v5;
  temp_v4[0] = 0;
  temp_v4[1] = 1;
  temp_v6 = 1;
  temp_v7[0] = DAT_005893a8;
  temp_v3 = 1;
  uStack_4c = 0;
  temp_v2[0] = 1;
  temp_v2[1] = 2;
  uStack_54 = 0xc;
  piVar1 = temp_v7;
  temp_v2[2] = param_4;
  FUN_001885e8(piVar1,temp_v4,0,3,1,temp_v5);
  if ((int)piVar1 < 0) {
    FUN_0016e800();
  }
  temp_v0 = temp_v4[0];
  piVar1 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                            (&DAT_0062d388);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)"럤B려B";
    piVar1[1] = temp_v0;
  }
  else {
    software_interrupt(0x23);
    FUN_0016e800(0xf96047a2,&LAB_00158794);
  }
  temp_v0 = 0;
  if (param_3 != 0) {
    temp_v0 = (**(romwright_code **)*piVar1)(piVar1,temp_v2,0,0,&temp_v5,0x28);
    temp_v1 = -1;
    if ((temp_v0 < 0) || (temp_v2[0] != 0x28)) goto LAB_001587d0;
    temp_v0 = temp_v9 + temp_v10 + temp_v7[0] + temp_v8;
    if (-1 < temp_v0) goto LAB_001587c0;
  }
  else {
LAB_001587c0:
    temp_v1 = param_1 * 0x20 + param_2 * 0x18 + temp_v0;
LAB_001587d0:
    if (0 < temp_v1) {
      (**(romwright_code **)(*piVar1 + 0x30))(piVar1);
      return temp_v1;
    }
  }
  software_interrupt(0x23);
  FUN_0016e800(0xf96047a2,0x1587ec);
  (**(romwright_code **)(*piVar1 + 0x30))(piVar1);
  return temp_v1;
}
