/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019d390` (_code @ 0x19d390, 0x10c bytes) from smt4a.cxi.
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


unsigned int FUN_0019d390(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [32];
  unsigned short temp_v5;
  
  if (param_1 >= 0x191) {
    puVar1 = g_aocSystem;
    FUN_001b2e78(g_aocSystem,param_1);
    if (puVar1 == (unsigned char *)0x0) {
      temp_v0 = dataTableGet(4,1);
      temp_v1 = dataTableGetEntries();
      temp_v0 = dataTableGetCount(temp_v0);
      temp_v5 = (unsigned short)param_1;
      puVar1 = temp_v4;
      libc_bsearch(puVar1,temp_v1,temp_v0,0x48,&LAB_001ac8dc);
    }
    if (puVar1 != (unsigned char *)0x0) {
      return *(unsigned int *)(puVar1 + 0x44) >> 0x1f;
    }
  }
  else {
    dataTable04FindById();
    if ((param_1 != 0) && ((*(unsigned int *)(param_1 + 0x3c) & 0x20000000) == 0)) {
      if (*(char *)(param_1 + 0x62) == '\0') {
        return 1;
      }
      temp_v2 = 1;
      while( 1 ) {
        temp_v3 = param_1 + temp_v2 * 2;
        if (*(char *)(temp_v3 + 0x62) == '\0') {
          return temp_v2 + 1;
        }
        if (*(char *)(temp_v3 + 100) == '\0') break;
        temp_v2 = temp_v2 + 2;
        if (temp_v2 >= 9) {
          return 10;
        }
      }
      return temp_v2 + 2;
    }
  }
  return 0;
}

} /* extern "C" */
