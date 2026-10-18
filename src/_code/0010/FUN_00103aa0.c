/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103aa0` (_code @ 0x103aa0, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00464fd8; /* 0x464fd8 */
extern unsigned int DAT_004e0e88; /* 0x4e0e88 */
extern unsigned char DAT_004e0e90; /* 0x4e0e90 */

extern int FUN_0010fc44(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0010fca0. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5fbc. */


unsigned int FUN_00103aa0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  FUN_002c5fbc();
  DAT_00464fd8 = FUN_002c4b84(0x100,0x100,0,0x10000,1);
  temp_v0 = FUN_0010fc44(&DAT_004e0e90,DAT_00464fd8);
  if (-1 < temp_v0) {
    puVar2 = &DAT_004e0e90;
    FUN_0010fca0();
    if (puVar2 != (unsigned char *)0x0) {
      DAT_004e0e88 = DAT_004e0e88 | 1;
      return 1;
    }
  }
  return 0;
}
