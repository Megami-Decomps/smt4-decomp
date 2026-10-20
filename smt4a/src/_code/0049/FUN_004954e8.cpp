/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004954e8` (_code @ 0x4954e8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004cf8dc(int, int);
int sub10OwnerStart(int);
int FUN_004d0738(int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_004cf8dc. */
extern int FUN_004d0058(int, unsigned int);
/* Supplied declaration required: sub10OwnerStart. */
extern unsigned int selectOwnerGetSelected(int);
/* Supplied declaration required: FUN_004d0738. */


unsigned int FUN_004954e8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb60;
  FUN_004d0738(param_1 + 0xb08,temp_v2);
  (**(romwright_code **)(**(int **)(param_1 + 0xb3c) + 0xc))(*(int **)(param_1 + 0xb3c),temp_v2);
  sub10OwnerStart(temp_v2);
  FUN_004cf8dc(param_1 + 0x3cc,2);
  FUN_004cf8dc(param_1 + 0x3cc,0xc);
  temp_v1 = 0;
  if (*(char *)(param_1 + 0xb1a) != '\0') {
    temp_v0 = selectOwnerGetSelected(param_1 + 0xb08);
    temp_v2 = FUN_004d0058(temp_v2,temp_v0);
    if (temp_v2 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
