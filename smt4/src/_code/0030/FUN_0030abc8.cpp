/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030abc8` (_code @ 0x30abc8, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp1B; /* 0x1b: local_1b */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002d0520; /* 0x2d0520 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_0030abc8(unsigned char param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = dataTableGet(5,1);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  puVar3 = &temp_v2;
  temp_v2 = param_1;
  temp_v3 = param_2;
  libc_bsearch(puVar3,temp_v1,temp_v0,4,&LAB_002d0520);
  if (puVar3 == (unsigned char *)0x0) {
    temp_v2 = param_2;
    temp_v3 = param_1;
    libc_bsearch(&temp_v2,temp_v1,temp_v0,4,&LAB_002d0520);
  }
  return;
}

} /* extern "C" */
