/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae164` (_code @ 0x2ae164, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014ca60(int, unsigned int);
int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp58; /* 0x58: local_58 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_001457dc; /* 0x1457dc */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0014ca60. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_002ae164(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = g_aocSystem;
  FUN_0014ca60(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(4,0);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v4 = (unsigned short)param_1;
    libc_bsearch(temp_v3,temp_v2,temp_v1,0x68,&LAB_001457dc);
  }
  return;
}

} /* extern "C" */
