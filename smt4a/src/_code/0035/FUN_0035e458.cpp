/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e458` (_code @ 0x35e458, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int dataTable04FindById(void);
int FUN_001b2e78(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_001ac8dc; /* 0x1ac8dc */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_001b2e78. */


/* WARNING: Removing unreachable block (ram,0x0035e4f4) */

int FUN_0035e458(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [32];
  unsigned short temp_v5;
  
  if (param_1 >= 0x191) {
    temp_v2 = g_aocSystem;
    FUN_001b2e78(g_aocSystem,param_1);
    if (temp_v2 == 0) {
      temp_v0 = dataTableGet(4,1);
      temp_v1 = dataTableGetEntries();
      temp_v0 = dataTableGetCount(temp_v0);
      temp_v5 = (unsigned short)param_1;
      libc_bsearch(temp_v4,temp_v1,temp_v0,0x48,&LAB_001ac8dc);
    }
  }
  else {
    dataTable04FindById();
    if (param_1 != 0) {
      temp_v3 = 0;
      temp_v2 = 0;
      do {
        if (*(char *)(param_1 + temp_v2 * 2 + 0x62) == '\0') {
          return temp_v3;
        }
        temp_v2 = temp_v2 + 1;
        temp_v3 = temp_v3 + 1;
      } while (temp_v2 < 9);
      return temp_v3;
    }
  }
  return 0;
}

} /* extern "C" */
