/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00477744` (_code @ 0x477744, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(int);
int flagObjAdvance(int);
int FUN_0047306c(int, int, int, int);
int jobOwnerFreeSlotAndStop(int);
int FUN_00477d10(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: flagObjAdvance. */
/* Supplied declaration required: FUN_0047306c. */
/* Supplied declaration required: jobOwnerFreeSlotAndStop. */
/* Supplied declaration required: FUN_00477d10. */
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);


void FUN_00477744(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v2 = param_1 + 0x11b0;
  if (temp_v1 == 0) {
    FUN_0047306c(temp_v2,100,1,0);
    FUN_00477d10(param_1,0,1);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if ((temp_v1 == 2) && (*(char *)(param_1 + 0x167a) != '\0')) {
      jobOwnerFreeSlotAndStop(temp_v2);
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0x167a) != '\0') {
    temp_v1 = FUN_004d0584();
    if (temp_v1 != 0) {
      eventQueueAddUniqueIfValid(0x100020e);
      FUN_00477d10(param_1,0xffffffff,0);
      flagObjAdvance(temp_v2);
      temp_v0 = 2;
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v1 = FUN_004d0554();
    if (temp_v1 != 0) {
      eventQueueAddUniqueIfValid(0x100020e);
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
      flagObjAdvance(temp_v2);
      return;
    }
  }
  return;
}

} /* extern "C" */
