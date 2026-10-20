/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184310` (_code @ 0x184310, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(...);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_1_stack;

extern unsigned char LAB_0018449c; /* 0x18449c */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_00184310(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [90];
  
  temp_v2[0] = param_1;
  if (*(int *)(g_aocSystem + 0x360) != 0) {
    puVar1 = temp_v2;
    FUN_00100854(puVar1,*(int *)(g_aocSystem + 0x360),*(unsigned int *)(g_aocSystem + 0x35c),0xb4,
                 &LAB_0018449c);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = dataTableGet(0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  FUN_00100854(temp_v2,temp_v1,temp_v0,0xb4,&LAB_0018449c);
  return;
}

} /* extern "C" */
