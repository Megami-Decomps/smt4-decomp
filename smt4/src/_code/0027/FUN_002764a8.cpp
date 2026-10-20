/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002764a8` (_code @ 0x2764a8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
} param_1_stack;

extern unsigned char LAB_0038e29c; /* 0x38e29c */
extern unsigned int g_aocMain; /* 0x432fc8 */
extern int g_aocSystem; /* 0x433158 */

extern int FUN_0029022c(void);
extern unsigned int FUN_002903f0(void);
extern int objGetFlagBit16(unsigned int);
/* Supplied declaration required: libc_bsearch. */


unsigned int FUN_002764a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [218];
  
  temp_v0 = FUN_0029022c();
  if ((temp_v0 != 0) && (temp_v1 = FUN_002903f0(), temp_v1 >= 0x15e)) {
    temp_v2[0] = (unsigned short)temp_v1;
    puVar3 = temp_v2;
    libc_bsearch(puVar3,*(unsigned int *)(param_1 + 0x388),*(unsigned int *)(g_aocSystem + 900),0x1b4,
                 &LAB_0038e29c);
    if ((puVar3 == (unsigned short *)0x0) || (temp_v0 = objGetFlagBit16(g_aocMain), temp_v0 == 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
