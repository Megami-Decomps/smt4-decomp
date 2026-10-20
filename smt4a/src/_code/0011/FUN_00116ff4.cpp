/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116ff4` (_code @ 0x116ff4, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(unsigned int *, int, int, int);
int onlineStringDestroy(...);
int FUN_002ecac4(int);

extern unsigned char DAT_00559dd4; /* 0x559dd4 */
extern unsigned char DAT_00559e24; /* 0x559e24 */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: onlineStringDestroy. */
extern int FUN_002ea00c(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int vectorDestroyBytes(int);


void FUN_00116ff4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  param_1[0x1a] = (unsigned int)&DAT_00559e24;
  *param_1 = (unsigned int)&DAT_00559dd4;
  rt_vec_dtor(param_1 + 0x42,0x2eda5b,0xc,4);
  temp_v0 = onlineStringDestroy(param_1 + 0x3f);
  temp_v0 = vectorDestroyBytes(temp_v0 - 0x10);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x6c);
  temp_v0 = onlineStringDestroy(temp_v0 - 0x10);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}

} /* extern "C" */
