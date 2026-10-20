/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae7d4` (_code @ 0x2ae7d4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae898(void);
int asdMemFree(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_texTable; /* 0x44ea28 */

/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: asdMemFree. */


void FUN_002ae7d4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int *puVar5;
  
  FUN_002ae898();
  temp_v1 = g_texTable;
  puVar5 = (unsigned int *)(g_texTable + 0x360);
  if (*(int *)(g_texTable + 0x364) != 0) {
    temp_v0 = *(int *)(*(int *)(g_texTable + 0x364) + 4);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x10);
      asdMemFree(*(unsigned int *)(temp_v0 + 0xc));
      asdMemFree(temp_v0);
      temp_v0 = temp_v2;
    }
    asdMemFree(**(unsigned int **)(temp_v1 + 0x364));
    asdMemFree(*(unsigned int *)(temp_v1 + 0x364));
    *(unsigned int *)(temp_v1 + 0x364) = 0;
  }
  piVar3 = (int *)*puVar5;
  if (*piVar3 != 0) {
    asdMemFree();
    *piVar3 = 0;
  }
  if (piVar3[2] != 0) {
    asdMemFree();
    piVar3[2] = 0;
  }
  asdMemFree(piVar3);
  *puVar5 = 0;
  return;
}

} /* extern "C" */
