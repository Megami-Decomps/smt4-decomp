/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468878` (_code @ 0x468878, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275f44(unsigned int, int);
int FUN_00357bc8(...);

typedef struct fn_00468878_arg0 fn_00468878_arg0;
struct fn_00468878_arg0 {
    unsigned char pad_0x0[0x284];
    undefined4 field_0x284; /* +0x284 */
    unsigned char pad_0x288[0x4];
    unsigned char field_0x28c; /* +0x28c */
    unsigned char pad_0x28d[0x3];
    undefined4 field_0x290; /* +0x290 */
    unsigned char pad_0x294[0x4];
    unsigned char field_0x298; /* +0x298 */
    unsigned char pad_0x299[0x1b];
    void *field_0x2b4; /* +0x2b4 */
};

/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00357bc8. */


int FUN_00468878(fn_00468878_arg0 *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00357bc8(param_1->field_0x290);
  if (temp_v0 != -1) {
    puVar2 = (unsigned int *)&param_1->field_0x298;
  }
  else {
    temp_v0 = FUN_00357bc8(param_1->field_0x284,param_2);
    puVar2 = (unsigned int *)&param_1->field_0x28c;
  }
  param_1->field_0x2b4 = puVar2;
  FUN_00275f44(*puVar2,temp_v0);
  return temp_v0;
}

} /* extern "C" */
