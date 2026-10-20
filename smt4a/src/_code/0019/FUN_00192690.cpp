/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192690` (_code @ 0x192690, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_001a6858(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0019e30c; /* 0x19e30c */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001a6858. */


void FUN_00192690(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(g_aocSystem + 0x3a0) == 0) ||
      (temp_v0 = g_aocSystem, FUN_001a6858(g_aocSystem,param_1), temp_v0 == 0)) &&
     (temp_v0 = dataTableGet(8,0), temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    libc_bsearch(temp_v3,temp_v1,temp_v2,0x28,&LAB_0019e30c);
  }
  return;
}

} /* extern "C" */
