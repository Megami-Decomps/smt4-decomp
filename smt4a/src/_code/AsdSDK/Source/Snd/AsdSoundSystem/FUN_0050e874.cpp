/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e874` (_code @ 0x50e874, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int packNibblesAndByte(...);
int __aeabi_vec_ctor_nocookie_nodtor(int, unsigned char *, int, int);

extern unsigned char LAB_00192824; /* 0x192824 */
extern unsigned int DAT_0063098c; /* 0x63098c */
extern unsigned int DAT_00630990; /* 0x630990 */
extern unsigned int DAT_00630994; /* 0x630994 */
extern unsigned int DAT_00630998; /* 0x630998 */
extern unsigned int DAT_0063099c; /* 0x63099c */

/* Supplied declaration required: packNibblesAndByte. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0050e874(void)

{
/* irregular: irregular input(s): in_r12, in_s0; 4 native warning(s); review required */
  int in_r12;
  unsigned int in_s0;
  
  *(unsigned int *)(in_r12 + 0x1c) = in_s0;
  *(unsigned int *)(in_r12 + 0x20) = in_s0;
  *(unsigned int *)(in_r12 + 0x24) = in_s0;
  *(unsigned int *)(in_r12 + 0x28) = in_s0;
  __aeabi_vec_ctor_nocookie_nodtor(in_r12 + 0x2c,&LAB_00192824,0x10,4);
  DAT_0063098c = packNibblesAndByte(6,7,0);
  DAT_00630990 = packNibblesAndByte(6,1,0);
  DAT_00630994 = packNibblesAndByte(6,1,2);
  DAT_00630998 = packNibblesAndByte(5,0,1);
  DAT_0063099c = packNibblesAndByte(0,2);
  return;
}

} /* extern "C" */
