/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e3f8` (_code @ 0x22e3f8, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00131898(int, unsigned int);
int FUN_002b46f8(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0012654c; /* 0x12654c */
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00131898. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


void FUN_0022e3f8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(g_aocSystem + 0x3d0) == 0) ||
      (temp_v0 = g_aocSystem, FUN_00131898(g_aocSystem,param_1), temp_v0 == 0)) &&
     (temp_v0 = dataTableGet(8,4), temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    FUN_002b46f8(temp_v3,temp_v1,temp_v2,0x30,&LAB_0012654c);
  }
  return;
}

} /* extern "C" */
