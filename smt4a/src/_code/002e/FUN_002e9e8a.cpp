/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9e8a` (_code @ 0x2e9e8a, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb310(unsigned int, int);
int FUN_002f3edc(int *, int, int *);
int FUN_002f3f42(int *);
int FUN_002ff380(unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_002eb310. */
extern int FUN_002f3ecc(int *, unsigned char *);
/* Supplied declaration required: FUN_002f3edc. */
/* Supplied declaration required: FUN_002f3f42. */
/* Supplied declaration required: FUN_002ff380. */


void FUN_002e9e8a(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  int iStack_18;
  int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_002ff380(param_3);
  FUN_002f3edc(&temp_v1,param_1 + 0x3c,&uStack_14);
  while (temp_v0 = FUN_002f3ecc(&temp_v1,temp_v2), temp_v0 != 0) {
    FUN_002eb310(param_3,temp_v1 + 0x14);
    FUN_002f3f42(&temp_v1);
  }
  return;
}

} /* extern "C" */
