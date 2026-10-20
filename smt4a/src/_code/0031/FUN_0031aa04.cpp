/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031aa04` (_code @ 0x31aa04, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char LAB_002ce078; /* 0x2ce078 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


unsigned short * FUN_0031aa04(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [48];
  
  temp_v0 = dataTableGet(0xc,1);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  puVar3 = temp_v2;
  temp_v2[0] = param_1;
  FUN_00100854(puVar3,temp_v1,temp_v0,0x60,&LAB_002ce078);
  return puVar3 + 1;
}

} /* extern "C" */
