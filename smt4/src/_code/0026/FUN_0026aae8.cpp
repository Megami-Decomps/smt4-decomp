/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026aae8` (_code @ 0x26aae8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char LAB_00206d2c; /* 0x206d2c */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_0026aae8(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  unsigned short temp_v3;
  
  temp_v0 = dataTableGet(0xc,0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  temp_v3 = param_1;
  libc_bsearch(temp_v2,temp_v1,temp_v0,0x74,&LAB_00206d2c);
  return;
}

} /* extern "C" */
