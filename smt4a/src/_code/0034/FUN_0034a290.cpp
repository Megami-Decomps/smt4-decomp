/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a290` (_code @ 0x34a290, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_001b2e78(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_001ac8dc; /* 0x1ac8dc */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001b2e78. */


void FUN_0034a290(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = g_aocSystem;
  FUN_001b2e78(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(4,1);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_00100854(temp_v3,temp_v2,temp_v1,0x48,&LAB_001ac8dc);
  }
  return;
}

} /* extern "C" */
