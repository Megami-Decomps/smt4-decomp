/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353a88` (_code @ 0x353a88, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(int, int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_mapIf; /* 0x58103c */

/* Supplied declaration required: asdTMTexTableReleaseNode. */


void FUN_00353a88(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = g_mapIf;
  puVar2 = (unsigned char *)(g_mapIf + 0xcbdc);
  if (*(int **)(g_mapIf + 0xcbf8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(g_mapIf + 0xcbf8) + 4))();
    *(unsigned int *)(temp_v0 + 0xcbf8) = 0;
  }
  *puVar2 = 0;
  asdTMTexTableReleaseNode(4,0x25);
  return;
}

} /* extern "C" */
