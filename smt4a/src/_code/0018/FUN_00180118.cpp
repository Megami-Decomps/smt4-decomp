/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00180118` (_code @ 0x180118, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00165390; /* 0x165390 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */


void FUN_00180118(unsigned short param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned short temp_v1 [20];
  
  if (*(int *)(g_aocSystem + 0x368) != 0) {
    puVar1 = temp_v1;
    temp_v1[0] = param_1;
    FUN_00100854(puVar1,*(unsigned int *)(g_aocSystem + 0x378),*(unsigned int *)(g_aocSystem + 0x374),
                 0x28,&LAB_00165390);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = dataTableGet(1);
  dataTableGetEntries();
  dataTableGetCount(temp_v0);
  return;
}

} /* extern "C" */
