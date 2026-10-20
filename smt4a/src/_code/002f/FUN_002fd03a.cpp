/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd03a` (_code @ 0x2fd03a, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int byteArrayEnsureAt(...);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: byteArrayEnsureAt. */


void FUN_002fd03a(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int temp_v2;
  
  temp_v0 = *(unsigned char *)(param_1 + 2);
  temp_v1 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
  for (temp_v2 = (unsigned int)temp_v0; temp_v2 < temp_v1; temp_v2 = temp_v2 + 1) {
    pbVar3 = (unsigned char *)byteArrayEnsureAt(param_2,*(unsigned char *)(param_1 + 2) - 1);
    pbVar4 = (unsigned char *)byteArrayEnsureAt(param_2,temp_v2);
    *pbVar3 = *pbVar4 ^ *pbVar3;
  }
  *(unsigned int *)(param_2 + 0x10) = (unsigned int)*(unsigned char *)(param_1 + 2);
  return;
}

} /* extern "C" */
