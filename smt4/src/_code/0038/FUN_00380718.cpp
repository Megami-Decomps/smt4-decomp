/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380718` (_code @ 0x380718, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3424(int *);
int FUN_00379a14(int *);
int nw_snd_internal_PlayerHeapDataManager_Finalize(int *);
int nw_snd_internal_TaskManager_CancelTask(unsigned int, int *);
int nw_ut_internal_LinkListImpl_erase_2B743C(int, int *);
int nw_ut_internal_LinkListImpl_insert(int, int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_00379a14. */
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Finalize. */
/* Supplied declaration required: nw_snd_internal_TaskManager_CancelTask. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_00380718(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)((int)param_1 + 0x45d) != '\0') {
    *(unsigned char *)((int)param_1 + 0x45d) = 0;
    if ((char)param_1[0x117] == '\x01') {
      temp_v0 = FUN_002bb020();
      nw_snd_internal_TaskManager_CancelTask(temp_v0,param_1 + 0x66);
      FUN_002c3424(param_1 + 0x69);
    }
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(unsigned char *)((int)param_1 + 0x45e) = 0;
    FUN_00379a14(param_1);
    nw_snd_internal_PlayerHeapDataManager_Finalize(param_1 + 0x76);
    temp_v1 = param_1[0x65];
    nw_ut_internal_LinkListImpl_erase_2B743C(temp_v1 + 8,param_1 + 0x35);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    nw_ut_internal_LinkListImpl_insert(temp_v1 + 0x14,temp_v1 + 0x18,param_1 + 0x35);
    return;
  }
  return;
}

} /* extern "C" */
