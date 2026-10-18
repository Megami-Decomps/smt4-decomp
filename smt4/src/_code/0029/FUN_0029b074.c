/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b074` (_code @ 0x29b074, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044dc20; /* 0x44dc20 */

extern int FUN_001add6c(void);
/* Supplied declaration required: FUN_0026f9b4. */
/* Supplied declaration required: FUN_00290f48. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
extern int FUN_002b879c(void);
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */
extern int MapMode_IsBusy(void);


void FUN_0029b074(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0044dc20 != 0) &&
     (temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_0044dc20 + 0xd644)), temp_v0 != 0)) {
    if ((*(char *)(DAT_0044dc20 + 0x3560) == '\x01') && (temp_v0 = FUN_001add6c(), temp_v0 == 0)) {
      temp_v0 = MapMode_IsBusy();
      if ((temp_v0 != 0) || (temp_v0 = FUN_002b879c(), temp_v0 != 0)) {
        FUN_0026f9b4();
      }
      else {
        FUN_00290f48(0x3c);
      }
    }
    FUN_002c43b4(*(unsigned int *)(DAT_0044dc20 + 0xd644),0);
    FUN_00291944();
    FUN_002917b8();
    return;
  }
  return;
}
