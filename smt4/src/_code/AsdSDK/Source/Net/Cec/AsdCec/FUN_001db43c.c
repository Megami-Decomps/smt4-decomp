/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db43c` (_code @ 0x1db43c, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00464fa8; /* 0x464fa8 */
extern int DAT_00464fac; /* 0x464fac */

extern unsigned int FUN_002634f4(void);
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
extern unsigned int FUN_00358c24(void);


unsigned int FUN_001db43c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00464fac != 0) {
    FUN_002b2368(*(unsigned int *)(DAT_00464fac + 0xc));
    if (*(int **)(DAT_00464fac + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(DAT_00464fac + 0x18) + 4))();
    }
    FUN_002c415c(DAT_00464fac);
    DAT_00464fac = 0;
  }
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x1c,1);
  DAT_00464fa8 = 0;
  DAT_00464fac = temp_v0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  temp_v0 = 8;
  FUN_002c222c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002634f4();
  }
  *(unsigned int *)(DAT_00464fac + 0xc) = temp_v1;
  temp_v0 = 0x8bc;
  FUN_002c222c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00358c24();
  }
  *(unsigned int *)(DAT_00464fac + 0x18) = temp_v1;
  return 1;
}
