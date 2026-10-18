/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b5a8` (_code @ 0x42b5a8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_0062d3c4; /* 0x62d3c4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_00500924(int);
extern unsigned int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern int nn_fs_ipc_FileSystem_OpenDirectory(unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0042b5a8(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  if ((unsigned int)param_3[2] >= 0x201) {
    temp_v0 = -0x1f1fb941;
  }
  else {
    temp_v1 = 0;
    temp_v2[0] = FUN_00500924(param_1);
    temp_v0 = nn_fs_ipc_FileSystem_OpenDirectory
                      (temp_v2,(unsigned int *)&temp_v1,*(unsigned int *)(param_1 + 8),
                       *(unsigned int *)(param_1 + 0xc),*param_3,param_3[1],param_3[2]);
    if (-1 < temp_v0) {
      puVar2 = (unsigned int *)
               nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                         (&DAT_0062d3c4);
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = (unsigned int)"먄B릜B";
        puVar2[1] = temp_v1;
      }
      *param_2 = (unsigned int)puVar2;
      if (puVar2 != (unsigned int *)0x0) {
        temp_v0 = 0;
      }
      else {
        software_interrupt(0x23);
        temp_v0 = -0x279fb9a7;
      }
    }
  }
  return temp_v0;
}
