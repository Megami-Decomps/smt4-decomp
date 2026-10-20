#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_002bee58. */


void FUN_002e3150(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1eb4) = 1;
  FUN_002bee58(temp_v0 + 0x274,7);
  FUN_002bee58(temp_v0 + 0x300,8);
  return;
}

} /* extern "C" */
