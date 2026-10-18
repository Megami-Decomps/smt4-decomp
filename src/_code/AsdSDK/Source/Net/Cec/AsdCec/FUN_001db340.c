/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db340` (_code @ 0x1db340, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00464fa8; /* 0x464fa8 */
extern int DAT_00464fac; /* 0x464fac */

extern unsigned int FUN_00263720(void);
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00358e34(void);


unsigned int FUN_001db340(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00464fac != 0) {
    FUN_002b2520(*(unsigned int *)(DAT_00464fac + 0xc));
    if (*(int **)(DAT_00464fac + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(DAT_00464fac + 0x18) + 4))();
    }
    FUN_002c4360(DAT_00464fac);
    DAT_00464fac = 0;
  }
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x1c,1);
  DAT_00464fa8 = 0;
  DAT_00464fac = temp_v0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  temp_v0 = 8;
  FUN_002c23f8();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00263720();
  }
  *(unsigned int *)(DAT_00464fac + 0xc) = temp_v1;
  temp_v0 = 0x8bc;
  FUN_002c23f8();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00358e34();
  }
  *(unsigned int *)(DAT_00464fac + 0x18) = temp_v1;
  return 1;
}
