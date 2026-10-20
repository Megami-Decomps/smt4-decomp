/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5894` (_code @ 0x1a5894, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001a5894(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
    do {
      if (*(char *)(param_1 + 0x58) != '\0') {
        temp_v2 = 0x7f;
        temp_v1 = temp_v0 - 0x7f;
        if (0x7f >= temp_v0) {
          temp_v2 = temp_v0;
          temp_v1 = temp_v0;
        }
        temp_v3 = 0;
        if (temp_v1 < 0 == (temp_v0 >= 0x80 && SBORROW4(temp_v0,0x7f))) {
          temp_v3 = temp_v2;
        }
        temp_v1 = piVar1[-0x2e] + (unsigned int)*(unsigned char *)((int)piVar1 - 0x6b);
        if (temp_v1 >= 0x80) {
          temp_v1 = 0x7f;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 0;
        }
        if (temp_v3 <= temp_v1) break;
      }
      else {
        temp_v2 = 0x7f;
        temp_v1 = temp_v0 - 0x7f;
        if (0x7f >= temp_v0) {
          temp_v2 = temp_v0;
          temp_v1 = temp_v0;
        }
        temp_v3 = 0;
        if (temp_v1 < 0 == (temp_v0 >= 0x80 && SBORROW4(temp_v0,0x7f))) {
          temp_v3 = temp_v2;
        }
        temp_v1 = piVar1[-0x2e] + (unsigned int)*(unsigned char *)((int)piVar1 - 0x6b);
        if (temp_v1 >= 0x80) {
          temp_v1 = 0x7f;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 0;
        }
        if (temp_v3 < temp_v1) break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x10));
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 0xc,piVar1,param_2 + 0x108);
  return;
}

} /* extern "C" */
