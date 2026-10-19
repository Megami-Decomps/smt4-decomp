/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001271a0` (_code @ 0x1271a0, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_7_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */

/* Supplied declaration required: FUN_00138f14. */
/* Supplied declaration required: FUN_001392fc. */
/* Supplied declaration required: FUN_001393e4. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: nn_fs_ipc_FileSystem_OpenFileDirectly. */


unsigned int *
FUN_001271a0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *****temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  piVar1 = param_1;
  FUN_001392fc();
  if (piVar1 != (int *)0x0) {
    FUN_002c4938();
    FUN_001393e4();
    if (piVar1 != (int *)0x0) {
      temp_v4 = (unsigned int *****)&temp_v4;
      temp_v2 = 0;
      temp_v3 = 1;
      temp_v5 = 1;
      temp_v6 = DAT_0044e660;
      piVar2 = &temp_v6;
      temp_v1 = param_2;
      nn_fs_ipc_FileSystem_OpenFileDirectly(piVar2,&temp_v2,0,3,1,temp_v4,1,2,param_7,0xc,1,0);
      if (-1 < (int)piVar2) {
        temp_v0 = (int *)0x0;
        piVar2 = (int *)(**(romwright_code **)(*piVar1 + 0x3c))(piVar1,&temp_v0,temp_v2);
        if (-1 < (int)piVar2) {
          piVar2 = piVar1;
          FUN_00138f14(piVar1,temp_v0,temp_v1,param_3,param_4,param_5,param_6);
          if ((int)piVar2 >= 0) {
            piVar2 = (int *)0x0;
          }
          else {
            (**(romwright_code **)(*temp_v0 + 0x2c))();
          }
        }
      }
      if (((unsigned int)piVar2 & 0x80000000) == 0) {
        *param_1 = (int)piVar1;
        return (unsigned int *)0x0;
      }
      (**(romwright_code **)(*piVar1 + 0x30))(piVar1);
      return (unsigned int *)piVar2;
    }
  }
  return (unsigned int *)0xd8604659;
}
