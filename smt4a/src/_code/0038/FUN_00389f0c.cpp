/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389f0c` (_code @ 0x389f0c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short [92], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_1_stack;

extern unsigned char LAB_0018449c; /* 0x18449c */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_00389f0c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [92];
  
  temp_v2[0] = param_1;
  temp_v0 = dataTableGet(0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  libc_bsearch(temp_v2,temp_v1,temp_v0,0xb4,&LAB_0018449c);
  return;
}

} /* extern "C" */
