/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002deeb8` (_code @ 0x2deeb8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int *DAT_005738e8; /* 0x5738e8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002deeb8(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  piVar1 = DAT_005738e8;
  if (DAT_005738e8 != (int *)0x0) {
    temp_v1 = *DAT_005738e8;
    while (piVar2 = DAT_005738e8, temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0x878) == 0) {
        *DAT_005738e8 = *(int *)(temp_v1 + 0x874);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x878) + 0x874) = *(unsigned int *)(temp_v1 + 0x874);
      }
      if (*(int *)(temp_v1 + 0x874) == 0) {
        piVar2[1] = *(int *)(temp_v1 + 0x878);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x874) + 0x878) = *(unsigned int *)(temp_v1 + 0x878);
      }
      piVar2[2] = piVar2[2] - 1;
      FUN_0019a5a0();
      temp_v1 = *piVar1;
    }
    FUN_0019a5a0(DAT_005738e8);
    DAT_005738e8 = (int *)0x0;
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x70));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x70),0);
    return;
  }
  return;
}
