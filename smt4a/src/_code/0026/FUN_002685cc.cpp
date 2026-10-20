/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002685cc` (_code @ 0x2685cc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char *, unsigned int, unsigned int, int, unsigned char *);
int dataTable04FindById(void);
int FUN_001b2e78(unsigned char *, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_001ac8dc; /* 0x1ac8dc */
extern unsigned char *g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_001b2e78. */


unsigned int FUN_002685cc(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  unsigned short temp_v3;
  
  if (param_1 >= 0x191) {
    puVar1 = g_aocSystem;
    FUN_001b2e78(g_aocSystem,param_1);
    if (puVar1 == (unsigned char *)0x0) {
      temp_v0 = dataTableGet(4,1);
      temp_v1 = dataTableGetEntries();
      temp_v0 = dataTableGetCount(temp_v0);
      temp_v3 = (unsigned short)param_1;
      puVar1 = temp_v2;
      libc_bsearch(puVar1,temp_v1,temp_v0,0x48,&LAB_001ac8dc);
    }
    if (puVar1 != (unsigned char *)0x0) {
      return (*(int *)(puVar1 + 0x44) >> 0x1f) + 1;
    }
  }
  else {
    dataTable04FindById();
    if (param_1 != 0) {
      return ~(*(unsigned int *)(param_1 + 0x3c) >> 0x1d) & 1;
    }
  }
  return 0;
}

} /* extern "C" */
