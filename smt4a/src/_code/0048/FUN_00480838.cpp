/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480838` (_code @ 0x480838, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_001762d4(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00167224; /* 0x167224 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001762d4. */
extern int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);


void FUN_00480838(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(g_aocSystem + 0x3c4) == 0) ||
      (temp_v0 = g_aocSystem, FUN_001762d4(g_aocSystem,param_1), temp_v0 == 0)) &&
     (temp_v0 = dataTableGet(8,3), temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    FUN_00100854(temp_v3,temp_v1,temp_v2,0x3c,&LAB_00167224);
  }
  return;
}

} /* extern "C" */
