/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9024` (_code @ 0x2b9024, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(...);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_001388cc; /* 0x1388cc */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int);


void FUN_002b9024(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [74];
  
  temp_v2[0] = param_1;
  if (*(int *)(g_aocSystem + 0x360) != 0) {
    puVar1 = temp_v2;
    FUN_002b46f8(puVar1,*(int *)(g_aocSystem + 0x360),*(unsigned int *)(g_aocSystem + 0x35c),0x94,
                 &LAB_001388cc);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = dataTableGet(0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  FUN_002b46f8(temp_v2,temp_v1,temp_v0,0x94,&LAB_001388cc);
  return;
}

} /* extern "C" */
