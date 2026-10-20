/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a794` (_code @ 0x26a794, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a9f98(unsigned char *, unsigned int);
int FUN_002ae164(void);
int libc_bsearch(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00145a98; /* 0x145a98 */
extern unsigned char *g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002a9f98. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned int FUN_0026a794(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  unsigned short temp_v3;
  
  if (param_1 >= 0x191) {
    puVar1 = g_aocSystem;
    FUN_002a9f98(g_aocSystem,param_1);
    if (puVar1 == (unsigned char *)0x0) {
      temp_v0 = dataTableGet(4,1);
      temp_v1 = dataTableGetEntries();
      temp_v0 = dataTableGetCount(temp_v0);
      puVar1 = temp_v2;
      temp_v3 = (unsigned short)param_1;
      libc_bsearch(puVar1,temp_v1,temp_v0,0x3c,&LAB_00145a98);
    }
    if (puVar1 != (unsigned char *)0x0) {
      return ~(*(unsigned int *)(puVar1 + 0x38) >> 0x1e) & 1;
    }
  }
  else {
    FUN_002ae164();
    if (param_1 != 0) {
      return (*(int *)(param_1 + 0x38) >> 0x1f) + 1;
    }
  }
  return 0;
}

} /* extern "C" */
