/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189570` (_code @ 0x189570, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005b479c; /* 0x5b479c */
extern int DAT_005c1490; /* 0x5c1490 */
extern unsigned int DAT_005c1fcc; /* 0x5c1fcc */
extern unsigned int DAT_005c1fd0; /* 0x5c1fd0 */

extern int FUN_001a0d70(unsigned int *);
extern unsigned int FUN_001a0e10(void);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00189570(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001a0e10();
  nn_os_CriticalSection_Enter();
  if (0 < DAT_005c1490) {
    DAT_005c1490 = DAT_005c1490 - 1;
  }
  if ((DAT_005c1490 == 0) && (temp_v1 = FUN_001a0d70(&DAT_005c1fcc), -1 < temp_v1)) {
    DAT_005b479c = 0;
    DAT_005c1fd0 = 0;
  }
  nn_os_CriticalSection_Leave(temp_v0);
  return;
}
