/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019cac4` (_code @ 0x19cac4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(...);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_1_stack;

extern unsigned char LAB_001ab89c; /* 0x1ab89c */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_0019cac4(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [84];
  
  temp_v2[0] = param_1;
  if (*(int *)(g_aocSystem + 0x368) != 0) {
    puVar1 = temp_v2;
    FUN_00100854(puVar1,*(int *)(g_aocSystem + 0x368),*(unsigned int *)(g_aocSystem + 0x364),0xa8,
                 &LAB_001ab89c);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = dataTableGet(0,1);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  FUN_00100854(temp_v2,temp_v1,temp_v0,0xa8,&LAB_001ab89c);
  return;
}

} /* extern "C" */
