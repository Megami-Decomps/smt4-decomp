#include "romwright_types.h"

extern "C" {

int treeSkew(...);
int treeSplit(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: treeSkew. */
/* Supplied declaration required: treeSplit. */


void treeRebalanceAfterErase(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1;
  
  piVar1 = (int *)*param_1;
  int q = *piVar1;
  temp_v0 = *(unsigned char *)(piVar1 + 3) - 1;
  if (((int)*(unsigned char *)(q + 0xc) >= temp_v0) &&
     ((int)*(unsigned char *)(piVar1[1] + 0xc) >= temp_v0)) {
    return;
  }
  temp_v1 = (unsigned char)temp_v0;
  *(unsigned char *)(piVar1 + 3) = temp_v1;
  if (*(unsigned char *)(*(int *)(*param_1 + 4) + 0xc) > temp_v1) {
    *(unsigned char *)(*(int *)(*param_1 + 4) + 0xc) = temp_v1;
  }
  treeSkew(param_1);
  treeSkew(*param_1 + 4);
  treeSkew(*(int *)(*param_1 + 4) + 4);
  treeSplit(param_1);
  treeSplit(*param_1 + 4);
  return;
}

} /* extern "C" */
