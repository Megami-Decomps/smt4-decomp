/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297e90` (_code @ 0x297e94, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: ptrListRemoveClearOwner. */


void FUN_00297e90(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = *param_1;
  temp_v1 = *(int *)(temp_v0 + 0x2c);
  if (temp_v1 != 0) {
    param_2 = *(int *)(temp_v1 + 4);
  }
  if (temp_v1 != 0 && param_2 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    param_2 = temp_v2;
  }
  temp_v1 = *(int *)(temp_v0 + 0x30);
  if (temp_v1 != 0) {
    param_2 = *(int *)(temp_v1 + 4);
  }
  if (temp_v1 != 0 && param_2 != 0) {
    ptrListRemoveClearOwner(g_handleRegistry);
    param_2 = temp_v3;
  }
  temp_v0 = *(int *)(temp_v0 + 0x34);
  if (temp_v0 != 0) {
    param_2 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return;
  }
  ptrListRemoveClearOwner(g_handleRegistry);
  return;
}

} /* extern "C" */
