/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b548` (_code @ 0x13b548, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(unsigned int, int, int);
int FUN_00158a40(unsigned char *, unsigned int, int, unsigned int);
int nn_gr_CTR_Shader_SearchBindSymbol(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0013b5a8; /* 0x13b5a8 */
extern unsigned int DAT_00570d70; /* 0x570d70 */
extern unsigned int DAT_005cc550; /* 0x5cc550 */
extern unsigned char DAT_005cc554; /* 0x5cc554 */
extern unsigned char DAT_005dee3c; /* 0x5dee3c */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_00158a40. */
/* Supplied declaration required: nn_gr_CTR_Shader_SearchBindSymbol. */


void FUN_0013b548(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_00570d70;
  FUN_0013c174(DAT_00570d70,0,1);
  DAT_005cc550 = temp_v0;
  FUN_00158a40(&DAT_005cc554,temp_v0,0,0xffffffff);
  nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc554,&DAT_005dee3c,&LAB_0013b5a8);
  nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc554,0x5dee44,0x13b5b4);
  return;
}

} /* extern "C" */
