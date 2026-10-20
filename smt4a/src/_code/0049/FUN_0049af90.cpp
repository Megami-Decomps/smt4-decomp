/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049af90` (_code @ 0x49af90, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int, unsigned int);
int FUN_0022e774(void);
int FUN_00345718(int);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00345718. */


void FUN_0049af90(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x16004) != 3) {
    if (*(int *)(param_1 + 0x16004) == 1) {
      *(unsigned int *)(param_1 + 0x16004) = 4;
    }
    else {
      FUN_0022e774();
      *(unsigned int *)(param_1 + 0x16004) = 3;
      FUN_00345718(0);
      if (*(int *)(param_1 + 0x16028) != 0) {
        ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x16028) + 4));
        if (*(int **)(param_1 + 0x16028) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(param_1 + 0x16028) + 4))();
          *(unsigned int *)(param_1 + 0x16028) = 0;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
