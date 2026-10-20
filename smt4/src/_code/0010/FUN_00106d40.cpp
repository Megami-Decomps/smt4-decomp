/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106d40` (_code @ 0x106d40, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010f5dc(void);
int FUN_002c131c(int, int);

extern signed char DAT_0044e598; /* 0x44e598 */
extern unsigned int DAT_004719e8; /* 0x4719e8 */

extern int FUN_0010f588(void);
/* Supplied declaration required: FUN_0010f5dc. */
extern int FUN_0010feb4(unsigned int *, char *);
extern int FUN_0010ff1c(void);
/* Supplied declaration required: FUN_002c131c. */
extern void nn_cfg_CTR_Initialize(void);


void FUN_00106d40(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e598 == '\0') {
    FUN_0010f5dc();
    nn_cfg_CTR_Initialize();
    temp_v0 = FUN_0010f588();
    if (-1 < temp_v0) {
      temp_v0 = FUN_0010feb4(&DAT_004719e8,"nim:aoc");
      if ((-1 < temp_v0) && (temp_v0 = FUN_0010ff1c(), -1 < temp_v0)) {
        temp_v0 = 0;
      }
      if (-1 < temp_v0) {
        temp_v0 = 0;
      }
    }
    if (temp_v0 < 0) {
      FUN_002c131c(temp_v0,0x106d98);
    }
    DAT_0044e598 = '\x01';
  }
  return;
}

} /* extern "C" */
