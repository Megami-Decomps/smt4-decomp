/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223090` (_code @ 0x223090, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028efe0. */
/* Supplied declaration required: FUN_00290374. */
/* Supplied declaration required: FUN_00290410. */
extern int FUN_002904d0(void);
/* Supplied declaration required: FUN_002904ec. */
extern unsigned int FUN_00290694(void);
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002c0128. */


unsigned int FUN_00223090(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    temp_v0 = FUN_002904d0();
    if (temp_v0 == 0) {
      return 1;
    }
    FUN_00254514(0);
    FUN_00254514(1,0);
  }
  temp_v1 = FUN_002b49d8(0x1e);
  temp_v0 = FUN_002544fc(0);
  if (temp_v0 == 0) {
    temp_v2 = FUN_00290694();
    FUN_0028efe0(temp_v2,0,1);
    FUN_002c0128();
    temp_v3 = FUN_002544fc(1);
    FUN_0025506c(temp_v1,2,temp_v3,6,0);
    temp_v0 = FUN_002544fc(1);
    FUN_00254514(1,temp_v0 + 1);
    if (temp_v1 == 1) {
      FUN_00254514(1,0);
      FUN_00290410(temp_v2,0);
      FUN_002904ec(temp_v2);
      FUN_00290374();
      return 1;
    }
  }
  return 0;
}
