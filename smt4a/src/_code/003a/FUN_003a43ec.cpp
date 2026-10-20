#include "romwright_types.h"

extern "C" {

int FUN_0019a7f4(int, int);
int asdTMTexTableFreeEntry(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */


void FUN_003a43ec(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0019a7f4(0x24,0);
  asdTMTexTableFreeEntry(0x24);
  return;
}

} /* extern "C" */
