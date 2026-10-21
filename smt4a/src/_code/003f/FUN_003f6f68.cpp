/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6f68` (_code @ 0x3f6f68, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(int);
int FUN_00228b04(int, int);
int FUN_002a4860(int);

/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(int);


void FUN_003f6f68(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002a4860(param_1 + 0xbc);
  temp_v1 = param_1 + 0xbc;
  FUN_00228b04(temp_v1,0);
  if (temp_v1 != 0) {
    temp_v1 = objectApplyIfUnblocked(param_1 + 0xbc);
    if (param_2 < temp_v1) {
      FUN_002a4860(param_1 + 0xbc);
      temp_v1 = FUN_002a4894(param_1 + 0xbc);
      if ((temp_v1 != param_2 - 1) && (temp_v1 = FUN_002a4894(param_1 + 0xbc), temp_v1 != 0)) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
      temp_v1 = FUN_002a4860(param_1 + 0xbc);
      while ((temp_v1 == temp_v0 &&
             ((temp_v1 = FUN_002a4860(param_1 + 0xbc), temp_v1 != 0 ||
              (temp_v1 = FUN_002a4894(param_1 + 0xbc), temp_v1 != 0))))) {
        temp_v1 = FUN_002a4860(param_1 + 0xbc);
        temp_v2 = objectApplyIfUnblocked(param_1 + 0xbc);
        if ((temp_v1 == temp_v2 - param_2) &&
           (temp_v1 = FUN_002a4894(param_1 + 0xbc), temp_v1 == param_2 - 1)) break;
        FUN_00228b04(param_1 + 0xbc,0);
        temp_v1 = FUN_002a4860(param_1 + 0xbc);
      }
    }
    temp_v3 = FUN_002a4860(param_1 + 0xbc);
    *(unsigned int *)(param_1 + 0x50) = temp_v3;
  }
  return;
}

} /* extern "C" */
