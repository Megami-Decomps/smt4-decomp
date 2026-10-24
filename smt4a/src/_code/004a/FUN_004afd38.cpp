/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004afd38` (_code @ 0x4afd38, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN12MoLivePlayer5resetEv(void);
int treeClear(int);
int _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEESI_(unsigned char [4], unsigned int *, int *, int *);
int FUN_00521c8c(unsigned int *, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: _ZN12MoLivePlayer5resetEv. */
/* Supplied declaration required: treeClear. */
/* Supplied declaration required: _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEESI_. */
/* Supplied declaration required: FUN_00521c8c. */


int FUN_004afd38(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  
  _ZN12MoLivePlayer5resetEv();
  treeClear(param_1 + 0x1498);
  treeClear(param_1 + 0x144c);
  FUN_00521c8c((unsigned int *)(param_1 + 0x143c),0,*(unsigned int *)(param_1 + 0x1448));
  piVar1 = *(int **)(param_1 + 0x143c);
  (**(romwright_code **)(*piVar1 + 4))(piVar1,*(unsigned int *)(param_1 + 0x1440));
  *(unsigned int *)(param_1 + 0x1440) = 0;
  *(unsigned int *)(param_1 + 0x1444) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x141c);
  temp_v2 = *(int *)(param_1 + 0x1430);
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEESI_(temp_v3,puVar3,&temp_v1,&temp_v2);
    temp_v0 = *(int *)(param_1 + 0x1430);
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(param_1 + 0x1424);
    *(int *)(param_1 + 0x1424) = temp_v0;
    temp_v0 = *(int *)(param_1 + 0x1420);
    while (temp_v0 != 0) {
      puVar4 = *(unsigned int **)(param_1 + 0x1420);
      *(unsigned int *)(param_1 + 0x1420) = *puVar4;
      (**(romwright_code **)(*(int *)*puVar3 + 4))((int *)*puVar3,puVar4[2]);
      (**(romwright_code **)(*(int *)*puVar3 + 4))((int *)*puVar3,puVar4);
      temp_v0 = *(int *)(param_1 + 0x1420);
    }
  }
  return param_1;
}

} /* extern "C" */
