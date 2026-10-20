/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282bf4` (_code @ 0x282bf4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_002ce068; /* 0x2ce068 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_00282bf4(unsigned short param_1)

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
  FUN_00100854(temp_v2,temp_v1,temp_v0,0x78,&LAB_002ce068);
  return;
}

} /* extern "C" */
