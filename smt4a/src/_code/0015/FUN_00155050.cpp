/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155050` (_code @ 0x155050, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommandBlockRelease(void);
int FUN_00167ba0(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: asdModelCommandBlockRelease. */
/* Supplied declaration required: FUN_00167ba0. */


void FUN_00155050(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) =
       param_1 | (param_2 << 8) | (param_3 << 0x10) | (param_4 << 0x18);
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf00c3;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  asdModelCommandBlockRelease();
  return;
}

} /* extern "C" */
