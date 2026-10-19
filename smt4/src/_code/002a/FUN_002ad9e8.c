/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad9e8` (_code @ 0x2ad9e8, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_7_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d4358; /* 0x4d4358 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00138f14. */
/* Supplied declaration required: FUN_001392fc. */
/* Supplied declaration required: FUN_001393e4. */
/* Supplied declaration required: FUN_002c4938. */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
/* Supplied declaration required: nn_fs_ipc_FileSystem_OpenFileDirectly. */


unsigned int *
FUN_002ad9e8(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_r12; 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int in_r12;
  int uStack_88;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [2];
  int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_58;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int uStack_44;
  unsigned int temp_v9;
  unsigned int uStack_3c;
  int *temp_v10;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  piVar3 = (int *)0x0;
  temp_v10 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_001392fc();
  if (param_1 != (int *)0x0) {
    FUN_002c4938();
    FUN_001393e4();
    if (param_1 != (int *)0x0) {
      temp_v3[0] = 0;
      temp_v8 = *param_2;
      uStack_44 = param_2[1];
      temp_v9 = (param_2[2] & 0xff) | (in_r12 & 0xffffff00);
      temp_v5 = param_2[3];
      temp_v4 = 0;
      uStack_58 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      uStack_88 = DAT_0044e660;
      piVar4 = &uStack_88;
      temp_v1 = param_4;
      temp_v2 = param_3;
      uStack_3c = param_3;
      nn_fs_ipc_FileSystem_OpenFileDirectly
                (piVar4,temp_v3,0,0x2345678a,2,&temp_v8,0x10,2,&temp_v4,0x14,1,0);
      temp_v0 = temp_v3[0];
      if (-1 < (int)piVar4) {
        piVar2 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                                  (&DAT_004d4358);
        if (piVar2 != (int *)0x0) {
          *piVar2 = (int)"扄5抄5兀=慬5";
          piVar2[1] = temp_v0;
          piVar4 = param_1;
          FUN_00138f14(param_1,piVar2,temp_v2,temp_v1,param_5,param_6,param_7);
          if ((int)piVar4 >= 0) {
            piVar4 = (int *)0x0;
          }
          else {
            (**(romwright_code **)(*piVar2 + 0x2c))(piVar2);
          }
        }
        else {
          software_interrupt(0x23);
          piVar4 = (int *)0xd8604659;
        }
      }
      if (((unsigned int)piVar4 & 0x80000000) == 0) {
        piVar4 = (int *)0x0;
        piVar3 = param_1;
      }
      else {
        (**(romwright_code **)(*param_1 + 0x30))(param_1);
      }
      if (-1 < (int)piVar4) {
        *temp_v10 = (int)piVar3;
        piVar4 = (int *)0x0;
      }
      return (unsigned int *)piVar4;
    }
  }
  piVar4 = (int *)0xd8604659;
  if (-1 < (int)piVar4) {
    *temp_v10 = (int)piVar3;
    piVar4 = (int *)0x0;
  }
  return (unsigned int *)piVar4;
}
