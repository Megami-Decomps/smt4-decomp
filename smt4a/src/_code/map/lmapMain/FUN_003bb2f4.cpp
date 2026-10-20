/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb2f4` (_code @ 0x3bb2f4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

extern unsigned char DAT_005f1a61; /* 0x5f1a61 */
extern unsigned int DAT_005f1a64; /* 0x5f1a64 */
extern unsigned int DAT_005f1a68; /* 0x5f1a68 */
extern unsigned int DAT_005f1a6c; /* 0x5f1a6c */
extern unsigned int DAT_005f1a70; /* 0x5f1a70 */
extern unsigned int DAT_005f1a74; /* 0x5f1a74 */
extern unsigned int DAT_005f1a78; /* 0x5f1a78 */
extern unsigned int DAT_005f1a7c; /* 0x5f1a7c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_003bb2f4(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  
  DAT_005f1a61 = 1;
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_00236038(3);
  temp_v4 = FUN_00236038(4);
  DAT_005f1a7c = FUN_00236038(5);
  DAT_005f1a6c = VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_005f1a64 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_005f1a68 = 0;
  DAT_005f1a70 = temp_v0;
  DAT_005f1a74 = temp_v1;
  DAT_005f1a78 = temp_v2;
  return 1;
}

} /* extern "C" */
