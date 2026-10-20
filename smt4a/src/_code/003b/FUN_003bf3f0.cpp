/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf3f0` (_code @ 0x3bf3f0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int sub68OwnerCall6(void);
int sub68OwnerCall8(void);
int FUN_003b61ec(void);
int FUN_003c5848(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: sub68OwnerCall6. */
/* Supplied declaration required: sub68OwnerCall8. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c5848. */


void FUN_003bf3f0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    (*(unsigned char *)((unsigned char *)&g_gameState + 0x295)) = 1;
    sub68OwnerCall8();
    FUN_003b61ec();
    sysPlaySe(0x92);
    return;
  }
  (*(unsigned char *)((unsigned char *)&g_gameState + 0x295)) = 0;
  temp_v0 = FUN_0018719c(0x49a);
  if (temp_v0 != 0) {
    FUN_003c5848();
  }
  else {
    FUN_003b61ec();
  }
  temp_v0 = FUN_0018719c(0xc);
  if ((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x10), temp_v0 == 0)) {
    FUN_003b61ec();
  }
  sub68OwnerCall6();
  sysPlaySe(0x10e);
  return;
}

} /* extern "C" */
