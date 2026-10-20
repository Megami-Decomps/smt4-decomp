/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1388` (_code @ 0x3d1388, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int btlUnitGet(void);


int FUN_003d1388(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = btlUnitGet();
  temp_v1 = 0;
  temp_v2 = 0x85;
  piVar3 = (int *)(temp_v0 + 0x5a8);
  piVar4 = (int *)(temp_v0 + 0x5ac);
  do {
    temp_v0 = *piVar3;
    piVar3 = piVar3 + 2;
    temp_v3 = -1 < temp_v0;
    if (temp_v3) {
      temp_v0 = *piVar4;
    }
    piVar4 = piVar4 + 2;
    if (temp_v0 != 0 && (temp_v3 && -1 < temp_v0)) {
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 != 0);
                    /* WARNING: Treating indirect jump as return */
  return temp_v1;
}

} /* extern "C" */
