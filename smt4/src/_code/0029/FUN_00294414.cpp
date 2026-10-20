/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294414` (_code @ 0x294414, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023f2e4(unsigned int, int, unsigned char [68], int);
int FUN_00294450(unsigned int, int, int);
int dataTable08Sub2GetRecord(void);
int FUN_002be624(unsigned char [68], unsigned char *, int, int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00294588; /* 0x294588 */

extern unsigned int FUN_0023cef0(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_00294450. */
/* Supplied declaration required: dataTable08Sub2GetRecord. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002be624. */


/* WARNING: Removing unreachable block (ram,0x002944d0) */
/* WARNING: Removing unreachable block (ram,0x00294488) */

void FUN_00294414(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [68];
  
  FUN_00294450(*(unsigned int *)(param_1 + 0x4394),0,7);
  FUN_00294450(*(unsigned int *)(param_1 + 0x4394),1,7);
  temp_v0 = *(unsigned int *)(param_1 + 0x4394);
  temp_v1 = gameGetPlayerData();
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 10);
  dataTable08Sub2GetRecord();
  temp_v3 = FUN_0023cef0(temp_v0,2,*(unsigned short *)(temp_v2 + 0x70),*(unsigned short *)(temp_v2 + 0x72),0);
  FUN_002be624(temp_v4,&LAB_00294588,*(unsigned short *)(temp_v2 + 0x70),*(unsigned short *)(temp_v2 + 0x72),
               temp_v3);
  FUN_0023f2e4(temp_v0,2,temp_v4,7);
  return;
}

} /* extern "C" */
