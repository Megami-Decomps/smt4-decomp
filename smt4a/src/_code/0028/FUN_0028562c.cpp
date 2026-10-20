/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028562c` (_code @ 0x28562c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_002b2b24; /* 0x2b2b24 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


unsigned short * FUN_0028562c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [52];
  
  temp_v0 = dataTableGet(0x38,0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  puVar3 = temp_v2;
  temp_v2[0] = param_1;
  libc_bsearch(puVar3,temp_v1,temp_v0,0x68,&LAB_002b2b24);
  return puVar3 + 0xc;
}

} /* extern "C" */
