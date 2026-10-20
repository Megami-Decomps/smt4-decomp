/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003edfd4` (_code @ 0x3edfd4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eaf20(void);
int FUN_003f1b3c(int, unsigned int, int, unsigned char [8], int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003f1b3c. */
extern unsigned int FUN_0047f4cc(unsigned int);
extern int hasFlag80Or1000(unsigned int);
extern int btlUnitGet(unsigned int);


void FUN_003edfd4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  if ((temp_v0 == 0) || (temp_v0 = hasFlag80Or1000(g_btlScriptUnit), temp_v0 == 0)) {
    temp_v0 = param_1;
    FUN_003eaf20();
    *(unsigned int *)(param_1 + 0x4cec) = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0019acdc(*(unsigned short *)(*(int *)(temp_v0 + 0x400) + 300),1);
      FUN_003f1b3c(param_1,temp_v1,10,temp_v3,&temp_v2);
      temp_v1 = FUN_0047f4cc(temp_v2);
      *(unsigned int *)(param_1 + 0x4cec) = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
