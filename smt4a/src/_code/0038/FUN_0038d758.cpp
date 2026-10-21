/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d758` (_code @ 0x38d758, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fb798(int, int, int, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_004fb798. */


unsigned int FUN_0038d758(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  if (((*(unsigned int **)(temp_v1 + 0x1ffc))[1] & DAT_00570d7c) == 0 &&
      (g_battleMaskPresets & **(unsigned int **)(temp_v1 + 0x1ffc)) == 0) {
    temp_v1 = btlGetMainState();
    FUN_004fb798(0,0,0,*(unsigned int *)(temp_v1 + 0x1ed4),0,temp_v0,0xffffffff,0xffffffff,2,0xffffffff,
                 0xffffffff,0xffffffff,0,0,0);
  }
  return 1;
}

} /* extern "C" */
