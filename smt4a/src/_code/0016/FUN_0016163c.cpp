/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016163c` (_code @ 0x16163c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b600(void);
int FUN_0018b610(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern unsigned char DAT_0061a488; /* 0x61a488 */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */


void FUN_0016163c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0061a510;
  if (DAT_0061a510 == 0) {
    return;
  }
  FUN_0018b600();
  if (DAT_0061a481 == '\0') {
    DAT_0061a482 = DAT_0061a481;
  }
  else {
    *(unsigned char *)(*(int *)(temp_v0 + 0x18) + (*(int *)(temp_v0 + 0x24) * 0x1c - 0x1a)) = 1;
    DAT_0061a488 = 1;
  }
  FUN_0018b610();
  return;
}

} /* extern "C" */
