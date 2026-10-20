/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e068` (_code @ 0x15e068, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);

typedef int romwright_code(...);
extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


unsigned char FUN_0015e068(unsigned char param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2);
  if (temp_v0 != 0) {
    temp_v1 = FUN_00175678();
    temp_v2 = temp_v1;
    FUN_0019102c(temp_v1,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x34;
    *(unsigned char *)(temp_v2 + 0x10) = param_1;
    *(int **)(temp_v2 + 0x14) = param_2;
    listAppendNode(temp_v1,temp_v2);
  }
  return temp_v0 != 0;
}

} /* extern "C" */
