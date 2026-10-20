/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002897f0` (_code @ 0x2897f0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned int *, char [10], unsigned int, int, unsigned char *);

/* stack frame of param_2: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_001e16cc; /* 0x1e16cc */
extern unsigned int DAT_0043e3b0; /* 0x43e3b0 */
extern char s___e222_01_0043e3c8[10]; /* 0x43e3c8 */

/* Supplied declaration required: libc_bsearch. */


int FUN_002897f0(unsigned short param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  
  temp_v1 = *param_2;
  temp_v0 = 0;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  puVar1 = (unsigned int *)&temp_v1;
  temp_v4 = param_1;
  libc_bsearch(puVar1,s___e222_01_0043e3c8,DAT_0043e3b0,0x10,&LAB_001e16cc);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = *(unsigned short *)((int)puVar1 + 0xe) + 0x820;
  }
  return temp_v0;
}

} /* extern "C" */
