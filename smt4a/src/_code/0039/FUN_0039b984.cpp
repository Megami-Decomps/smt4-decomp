/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b984` (_code @ 0x39b984, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_002b2ac4; /* 0x2b2ac4 */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern int FUN_00470bdc(unsigned int, int);


void FUN_0039b984(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned short temp_v3 [62];
  
  temp_v0 = FUN_00470bdc(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(0x45,0);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    puVar4 = temp_v3;
    temp_v3[0] = (unsigned short)param_1;
    FUN_00100854(puVar4,temp_v2,temp_v1,0x7c,&LAB_002b2ac4);
    if (param_1 == 0x46) {
      puVar4[0x2f] = 0x26c;
    }
  }
  return;
}

} /* extern "C" */
