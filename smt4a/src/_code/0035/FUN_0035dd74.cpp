/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dd74` (_code @ 0x35dd74, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short [14], unsigned int, unsigned int, int, unsigned char *);
int FUN_004704a4(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_002b2d30; /* 0x2b2d30 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_004704a4. */


void FUN_0035dd74(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3 [14];
  
  temp_v0 = g_aocSystem;
  FUN_004704a4(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(5,4);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v3[0] = (unsigned short)param_1;
    libc_bsearch(temp_v3,temp_v2,temp_v1,0x1c,&LAB_002b2d30);
  }
  return;
}

} /* extern "C" */
