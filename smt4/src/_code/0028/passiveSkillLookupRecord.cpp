/* NON_MATCHING: romwright 0.5.0 decompilation of `passiveSkillLookupRecord` (_code @ 0x283e48, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordTableFindById(int, unsigned int);
int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00145a98; /* 0x145a98 */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: recordTableFindById. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void passiveSkillLookupRecord(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = g_aocSystem;
  recordTableFindById(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(4,1);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v4 = (unsigned short)param_1;
    libc_bsearch(temp_v3,temp_v2,temp_v1,0x3c,&LAB_00145a98);
  }
  return;
}

} /* extern "C" */
