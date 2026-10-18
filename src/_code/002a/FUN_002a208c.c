/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a208c` (_code @ 0x2a208c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern signed char DAT_0044e7c1; /* 0x44e7c1 */
extern signed char DAT_0044e7c2; /* 0x44e7c2 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004a95c0; /* 0x4a95c0 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_001395ec. */
/* Supplied declaration required: FUN_0015d38c. */
/* Supplied declaration required: FUN_0015d540. */
/* Supplied declaration required: FUN_0015d5e0. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c3424. */


void FUN_002a208c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  
  if (DAT_0044e7c2 != '\0') {
    puVar1 = &DAT_004e6f64;
    FUN_0015d540(&DAT_004e6f64,param_2,0x952b80,0);
    if (puVar1 != (unsigned char *)0x0) {
      FUN_0015d38c(&DAT_004e6f64);
      DAT_0044e7c5 = 0;
      return;
    }
    DAT_0044e7c1 = '\x01';
  }
  if (DAT_0044e7c1 != '\0') {
    FUN_002c3424(&DAT_0044e7c8);
    FUN_001395ec(&DAT_0044e7c8);
  }
  if (DAT_0044e7c3 != '\0') {
    FUN_002bb150(&DAT_004a95c0,0);
    return;
  }
  FUN_0015d5e0(&DAT_004e6f64);
  FUN_0015d38c(&DAT_004e6f64);
  DAT_0044e7c5 = 0;
  return;
}
