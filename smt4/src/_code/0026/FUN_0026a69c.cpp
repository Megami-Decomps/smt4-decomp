/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a69c` (_code @ 0x26a69c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002dca98; /* 0x2dca98 */
extern unsigned char DAT_00404386; /* 0x404386 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned char FUN_0026a69c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [2];
  
  temp_v0 = dataTableGet(6,1);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  puVar3 = temp_v2;
  temp_v2[0] = param_1;
  FUN_002b46f8(puVar3,temp_v1,temp_v0,4,&LAB_002dca98);
  return *(unsigned char *)((int)&(*(unsigned int *)((unsigned char *)&DAT_00404386 - 0x2)) + *(unsigned char *)(puVar3 + 1) + 2);
}

} /* extern "C" */
