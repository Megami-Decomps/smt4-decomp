/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002564cc` (_code @ 0x2564cc, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002564cc_arg0 fn_002564cc_arg0;
struct fn_002564cc_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5c];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
};

/* Supplied declaration required: FUN_002c0ac8. */


unsigned int FUN_002564cc(fn_002564cc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = *(int *)(temp_v0 + 0x60);
  temp_v0 = *(int *)(temp_v0 + 100);
  piVar2 = (int *)FUN_002c0ac8(param_1);
  piVar2 = (int *)*piVar2;
  while( 1 ) {
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    if (*piVar2 == temp_v1 + temp_v0) break;
    piVar2 = (int *)piVar2[6];
  }
  return *(unsigned int *)piVar2[2];
}
