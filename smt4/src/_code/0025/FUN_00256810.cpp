/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256810` (_code @ 0x256810, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001317c8(int, unsigned int);
int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00125e54; /* 0x125e54 */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_001317c8. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


void FUN_00256810(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(g_aocSystem + 0x3c4) == 0) ||
      (temp_v0 = g_aocSystem, FUN_001317c8(g_aocSystem,param_1), temp_v0 == 0)) &&
     (temp_v0 = dataTableGet(8,3), temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    libc_bsearch(temp_v3,temp_v1,temp_v2,0x3c,&LAB_00125e54);
  }
  return;
}

} /* extern "C" */
