/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002498ec` (_code @ 0x2498ec, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4504(int, unsigned int);
int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001264b4; /* 0x1264b4 */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002b4504. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


void FUN_002498ec(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(g_aocSystem + 0x3dc) == 0) ||
      (temp_v0 = g_aocSystem, FUN_002b4504(g_aocSystem,param_1), temp_v0 == 0)) &&
     (temp_v0 = dataTableGet(8,5), temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    libc_bsearch(temp_v3,temp_v1,temp_v2,0x2c,&LAB_001264b4);
  }
  return;
}

} /* extern "C" */
