/* NON_MATCHING: romwright 0.5.0 decompilation of `dataTable04FindById` (_code @ 0x1aba54, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_001b2e34(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp78; /* 0x78: local_78 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char LAB_001ac63c; /* 0x1ac63c */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001b2e34. */


void dataTable04FindById(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = g_aocSystem;
  FUN_001b2e34(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(4,0);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v4 = (unsigned short)param_1;
    libc_bsearch(temp_v3,temp_v2,temp_v1,0x88,&LAB_001ac63c);
  }
  return;
}

} /* extern "C" */
