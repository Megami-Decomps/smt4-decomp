/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00402e34` (_code @ 0x402e34, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(...);
int FUN_001527d8(unsigned int, unsigned int);
int FUN_001acf98(int, int);
int FUN_002804b0(...);
int FUN_004029f4(int, int, int);
int FUN_00405c94(int);
int FUN_00471d94(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002804b0. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_004029f4. */
/* Supplied declaration required: FUN_00405c94. */
/* Supplied declaration required: FUN_00471d94. */


void FUN_00402e34(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned char *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  FUN_002804b0("event/HunterDataBase/HunterDataBase.mbm",param_1 + 8,0);
  FUN_002804b0("event/HunterDataBase/HunterDataBaseHelp.mbm",param_1 + 0xc,0);
  FUN_00471d94(g_aocSystem);
  *(unsigned short *)(param_1 + 0x18) = 0;
  asdTMTexTableLoadTmx(0x32,0);
  do {
    FUN_001acf98(0x32,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  temp_v1 = 0;
  do {
    if ((temp_v1 & 0xff) == 0) {
      temp_v2 = 1;
    }
    else if ((temp_v1 & 0xff) == 1) {
      temp_v2 = 0xf;
    }
    else {
      temp_v2 = 0xffffffff;
    }
    temp_v0 = FUN_00341940(temp_v2);
    if (temp_v0 == 0) {
      asdTMTexTableLoadTmx(temp_v2,0);
      *(unsigned char *)(param_1 + temp_v1 + 0x18) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 2);
  temp_v0 = 0;
  do {
    temp_v2 = spriteHandleCreate(0);
    *(unsigned int *)(param_1 + temp_v0 * 4 + 0x66c) = temp_v2;
    FUN_001527d8(temp_v2,0xffffffff);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 6);
  FUN_00405c94(param_1);
  FUN_004029f4(param_1,1,0);
  return;
}

} /* extern "C" */
