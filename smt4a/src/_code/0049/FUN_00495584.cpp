/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00495584` (_code @ 0x495584, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(unsigned int *);
int FUN_00184528(unsigned int *, int);
int FUN_0019de98(int, int);
int lmapSceneGetScript(void);
int FUN_003e5858(void);
int FUN_004935b0(unsigned int *, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(unsigned int *);
extern unsigned int FUN_001654e4(unsigned int *);
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: lmapSceneGetScript. */
/* Supplied declaration required: FUN_003e5858. */
extern int FUN_003e5ae8(void);
/* Supplied declaration required: FUN_004935b0. */


void FUN_00495584(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = lmapSceneGetScript();
  if (temp_v0 != 0) {
    lmapSceneGetScript();
    FUN_003e5858();
  }
  temp_v1 = param_1[2];
  if (temp_v1 == 0) {
    FUN_00184528(param_1 + 0xf3,1);
    param_1[2] = 1;
    FUN_0019de98(0,0x323232ff);
    return;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return;
    }
  }
  else {
    puVar5 = param_1 + 0x11e;
    FUN_00163aa4(puVar5);
    temp_v2 = FUN_001654e4(puVar5);
    temp_v3 = FUN_001654d8(puVar5);
    FUN_004935b0(param_1 + 0xe9,temp_v3,temp_v2);
    if (*(char *)((int)param_1 + 0x502) == '\0') {
      return;
    }
    *param_1 = *param_1 & 0xfffff1ff;
    temp_v0 = lmapSceneGetScript();
    if (temp_v0 == 0) {
      param_1[4] = param_1[1];
      param_1[1] = 0x14;
      param_1[2] = 0;
      return;
    }
    param_1[2] = 2;
  }
  lmapSceneGetScript();
  temp_v0 = FUN_003e5ae8();
  if (temp_v0 == 0) {
    return;
  }
  param_1[4] = param_1[1];
  param_1[1] = 0x14;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
