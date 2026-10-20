/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6dd8` (_code @ 0x3a6dd8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002c18e4(unsigned int);
int FUN_002c198c(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */


void FUN_003a6dd8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  FUN_002bed3c();
  *(unsigned int *)(param_1 + 0x594) = 0x1f;
  temp_v0 = param_1 + *(int *)(param_1 + 0x14) * 8;
  pcVar2 = *(romwright_code **)(temp_v0 + 0xa698);
  if ((pcVar2 != (romwright_code *)0x0) ||
     (((*(unsigned int *)(temp_v0 + 0xa69c) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0xa69c) != 0)))) {
    if ((*(unsigned int *)(temp_v0 + 0xa69c) & 1) != 0) {
      pcVar2 = *(romwright_code **)((unsigned char *)pcVar2 + *(int *)(param_1 + ((int)*(unsigned int *)(temp_v0 + 0xa69c) >> 1)));
    }
    (*pcVar2)();
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return;
}

} /* extern "C" */
