/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018bf54` (_code @ 0x18bf54, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002bf41c(void);
/* Supplied declaration required: FUN_002c4460. */
/* Supplied declaration required: FUN_002ebe10. */


unsigned int FUN_0018bf54(void)

{
/* irregular: irregular input(s): in_fpscr, in_r3; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int in_r3;
  unsigned int in_fpscr;
  
  FUN_00296f60(0);
  temp_v0 = FUN_00296f60(1);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar2 = DAT_0043ded0 + 0x18;
  FUN_002ebe10(puVar2,DAT_0043ded0 + 0x19,0x40c00000,in_r3,0x40000000,0x40800000,0x40c00000);
  temp_v1 = FUN_002bf41c();
  if (temp_v1 != 0) {
    FUN_002c4460(*DAT_0043ded0,puVar2);
  }
  return 1;
}
