/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103b10` (_code @ 0x103b10, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00464fd8; /* 0x464fd8 */
extern unsigned int DAT_004e0e88; /* 0x4e0e88 */
extern unsigned char DAT_004e0e90; /* 0x4e0e90 */

extern int FUN_0010fd38(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0010fd94. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5dc0. */


unsigned int FUN_00103b10(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  FUN_002c5dc0();
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x10000,1);
  DAT_00464fd8 = temp_v0;
  temp_v1 = FUN_0010fd38(&DAT_004e0e90,temp_v0);
  if (-1 < temp_v1) {
    puVar3 = &DAT_004e0e90;
    FUN_0010fd94();
    if (puVar3 != (unsigned char *)0x0) {
      DAT_004e0e88 = DAT_004e0e88 | 1;
      return 1;
    }
  }
  return 0;
}
