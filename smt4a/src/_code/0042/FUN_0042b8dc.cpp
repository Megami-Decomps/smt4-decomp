/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b8dc` (_code @ 0x42b8dc, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int DAT_0062d388; /* 0x62d388 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_00500924(int);
extern unsigned int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern int nn_fs_ipc_FileSystem_OpenFile(unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0042b8dc(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

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
    temp_v0 = nn_fs_ipc_FileSystem_OpenFile
                      (temp_v2,(unsigned int *)&temp_v1,0,param_3[2],*(unsigned int *)(param_1 + 8),
                       *(unsigned int *)(param_1 + 0xc),*param_3,param_3[1],param_3[2],param_4,0);
    if (-1 < temp_v0) {
      puVar2 = (unsigned int *)
               nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                         (&DAT_0062d388);
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = (unsigned int)"럤B려B";
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

} /* extern "C" */
