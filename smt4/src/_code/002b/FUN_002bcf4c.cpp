/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcf4c` (_code @ 0x2bcf4c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00131530(int, unsigned int);
int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001247e0; /* 0x1247e0 */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00131530. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_002bcf4c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = g_aocSystem;
  FUN_00131530(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(0x19,0);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v4 = (unsigned short)param_1;
    libc_bsearch(temp_v3,temp_v2,temp_v1,0x2c,&LAB_001247e0);
  }
  return;
}

} /* extern "C" */
