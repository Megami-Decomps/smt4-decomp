/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b310` (_code @ 0x29b310, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044dc20; /* 0x44dc20 */

extern int FUN_001adc68(void);
/* Supplied declaration required: FUN_0026fc24. */
/* Supplied declaration required: FUN_002911ec. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
extern int FUN_002b8a80(void);
extern int FUN_002b8adc(void);
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0029b310(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0044dc20 != 0) &&
     (temp_v0 = FUN_002bf41c(*(unsigned int *)(DAT_0044dc20 + 0xd644)), temp_v0 != 0)) {
    if ((*(char *)(DAT_0044dc20 + 0x3560) == '\x01') && (temp_v0 = FUN_001adc68(), temp_v0 == 0)) {
      temp_v0 = FUN_002b8a80();
      if ((temp_v0 != 0) || (temp_v0 = FUN_002b8adc(), temp_v0 != 0)) {
        FUN_0026fc24();
      }
      else {
        FUN_002911ec(0x3c);
      }
    }
    FUN_002c45b8(*(unsigned int *)(DAT_0044dc20 + 0xd644),0);
    FUN_00291be8();
    FUN_00291a5c();
    return;
  }
  return;
}
