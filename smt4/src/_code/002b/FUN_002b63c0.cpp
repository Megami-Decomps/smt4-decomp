/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b63c0` (_code @ 0x2b63c0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(...);

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
} param_1_stack;

extern unsigned char LAB_00138c04; /* 0x138c04 */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_002b63c0(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3 [218];
  unsigned int temp_v4 [2];
  
  temp_v4[0] = 0x1b;
  temp_v4[1] = 0x1c;
  temp_v3[0] = param_1;
  if (*(int *)(g_aocSystem + 0x388) != 0) {
    puVar1 = temp_v3;
    FUN_002b46f8(puVar1,*(int *)(g_aocSystem + 0x388),*(unsigned int *)(g_aocSystem + 900),0x1b4,
                 &LAB_00138c04);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v2 = 0;
  do {
    temp_v0 = dataTableGet(temp_v4[temp_v2],0);
    temp_v1 = dataTableGetEntries();
    temp_v0 = dataTableGetCount(temp_v0);
    puVar1 = temp_v3;
    FUN_002b46f8(puVar1,temp_v1,temp_v0,0x1b4,&LAB_00138c04);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
