/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028520c` (_code @ 0x28520c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int asdTMTexTableNodeIsLoaded(unsigned int, int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern int textureGetIndexedResource(unsigned int);


unsigned int FUN_0028520c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned short temp_v4 [2];
  
  temp_v1 = dataTableGet(0x47,0);
  temp_v2 = dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v1);
  puVar4 = temp_v4;
  temp_v4[0] = param_1;
  libc_bsearch(puVar4,temp_v2,temp_v1,4,&LAB_002321f8);
  if (((puVar4 != (unsigned short *)0x0) && (temp_v0 = puVar4[1], -1 < temp_v0)) &&
     (temp_v3 = textureGetIndexedResource(0x34), temp_v3 != 0)) {
    temp_v1 = asdTMTexTableNodeIsLoaded(0x34,(int)temp_v0);
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
