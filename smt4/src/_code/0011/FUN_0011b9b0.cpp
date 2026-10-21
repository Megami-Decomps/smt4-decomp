/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b9b0` (_code @ 0x11b9b0, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb2c(...);
int nn_fs_ipc_FileSystem_OpenFileDirectly(int *, int [2], int, int, int, unsigned int **);
int software_interrupt(int);

typedef int romwright_code(...);
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

extern unsigned char LAB_0011bab0; /* 0x11bab0 */
extern int DAT_0044e660; /* 0x44e660 */
extern unsigned int g_titleContentAdapterHeap; /* 0x4d4358 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bbb2c. */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
/* Supplied declaration required: nn_fs_ipc_FileSystem_OpenFileDirectly. */


int FUN_0011b9b0(int param_1,int param_2,int param_3,unsigned int param_4)

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
  temp_v7[0] = DAT_0044e660;
  temp_v3 = 1;
  uStack_4c = 0;
  temp_v2[0] = 1;
  temp_v2[1] = 2;
  uStack_54 = 0xc;
  piVar1 = temp_v7;
  temp_v2[2] = param_4;
  nn_fs_ipc_FileSystem_OpenFileDirectly(piVar1,temp_v4,0,3,1,temp_v5);
  if ((int)piVar1 < 0) {
    FUN_002bbb2c();
  }
  temp_v0 = temp_v4[0];
  piVar1 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                            (&g_titleContentAdapterHeap);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)"扄5抄5兀=慬5";
    piVar1[1] = temp_v0;
  }
  else {
    software_interrupt(0x23);
    FUN_002bbb2c(0xf96047a2,&LAB_0011bab0);
  }
  temp_v0 = 0;
  if (param_3 != 0) {
    temp_v0 = (**(romwright_code **)*piVar1)(piVar1,temp_v2,0,0,&temp_v5,0x28);
    temp_v1 = -1;
    if ((temp_v0 < 0) || (temp_v2[0] != 0x28)) goto LAB_0011baec;
    temp_v0 = temp_v9 + temp_v10 + temp_v7[0] + temp_v8;
    if (-1 < temp_v0) goto LAB_0011badc;
  }
  else {
LAB_0011badc:
    temp_v1 = param_1 * 0x20 + param_2 * 0x18 + temp_v0;
LAB_0011baec:
    if (0 < temp_v1) {
      (**(romwright_code **)(*piVar1 + 0x2c))(piVar1);
      return temp_v1;
    }
  }
  software_interrupt(0x23);
  FUN_002bbb2c(0xf96047a2,0x11bb08);
  (**(romwright_code **)(*piVar1 + 0x2c))(piVar1);
  return temp_v1;
}

} /* extern "C" */
