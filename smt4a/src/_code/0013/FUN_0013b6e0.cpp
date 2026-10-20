/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b6e0` (_code @ 0x13b6e0, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00146720(void);
int FUN_00189a38(int, int);

extern signed char DAT_00589364; /* 0x589364 */
extern unsigned int DAT_005c0a80; /* 0x5c0a80 */

extern int FUN_001466cc(void);
/* Supplied declaration required: FUN_00146720. */
extern int FUN_00147088(unsigned int *, char *);
extern int FUN_001470f0(void);
/* Supplied declaration required: FUN_00189a38. */
extern void nn_cfg_CTR_Initialize(void);


void FUN_0013b6e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00589364 == '\0') {
    FUN_00146720();
    nn_cfg_CTR_Initialize();
    temp_v0 = FUN_001466cc();
    if (-1 < temp_v0) {
      temp_v0 = FUN_00147088(&DAT_005c0a80,"nim:aoc");
      if ((-1 < temp_v0) && (temp_v0 = FUN_001470f0(), -1 < temp_v0)) {
        temp_v0 = 0;
      }
      if (-1 < temp_v0) {
        temp_v0 = 0;
      }
    }
    if (temp_v0 < 0) {
      FUN_00189a38(temp_v0,0x13b738);
    }
    DAT_00589364 = '\x01';
  }
  return;
}

} /* extern "C" */
