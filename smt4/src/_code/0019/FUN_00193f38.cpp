/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193f38` (_code @ 0x193f38, 0x340 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int colorKeyTrackAdvanceRgb(int);
int FUN_001dd974(void);
int FUN_001dda40(void);
int FUN_001ee200(void);
int FUN_001ee2bc(void);
int FUN_001ee3dc(void);
int FUN_002030bc(void);
int FUN_002031dc(void);
int FUN_002032fc(void);
int FUN_00291008(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: colorKeyTrackAdvanceRgb. */
/* Supplied declaration required: FUN_001dd974. */
/* Supplied declaration required: FUN_001dda40. */
/* Supplied declaration required: FUN_001ee200. */
/* Supplied declaration required: FUN_001ee2bc. */
/* Supplied declaration required: FUN_001ee3dc. */
/* Supplied declaration required: FUN_002030bc. */
/* Supplied declaration required: FUN_002031dc. */
/* Supplied declaration required: FUN_002032fc. */
/* Supplied declaration required: FUN_00291008. */


void FUN_00193f38(int param_1,unsigned int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x2e1) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x2ec) + 1;
    *(int *)(param_1 + 0x2ec) = temp_v0;
    if (*(int *)(param_1 + 0x314) < temp_v0) {
      *(unsigned int *)(param_1 + 0x2ec) = 0;
      *(unsigned int *)(param_1 + 0x210) = 0;
      *(unsigned int *)(param_1 + 0x214) = 0;
      *(unsigned int *)(param_1 + 0x218) = 0;
      colorKeyTrackAdvanceRgb(param_1);
    }
    else {
      FUN_00291008(param_1 + 0x1e4);
      FUN_00291008(param_1 + 0x1e8);
      FUN_00291008(param_1 + 0x1ec);
    }
  }
  if (*(char *)(param_1 + 0x2e2) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x2f0) + 1;
    *(int *)(param_1 + 0x2f0) = temp_v0;
    if (*(int *)(param_1 + 0x318) < temp_v0) {
      *(unsigned int *)(param_1 + 0x2f0) = 0;
      *(unsigned int *)(param_1 + 0x21c) = temp_v1;
      FUN_001dd974();
    }
    else {
      FUN_00291008(param_1 + 0x1f0,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e3) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x2f4) + 1;
    *(int *)(param_1 + 0x2f4) = temp_v0;
    if (*(int *)(param_1 + 0x31c) < temp_v0) {
      *(unsigned int *)(param_1 + 0x2f4) = 0;
      *(unsigned int *)(param_1 + 0x220) = temp_v1;
      FUN_001dda40();
    }
    else {
      FUN_00291008(param_1 + 500,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e4) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x2f8) + 1;
    *(int *)(param_1 + 0x2f8) = temp_v0;
    if (*(int *)(param_1 + 800) < temp_v0) {
      *(unsigned int *)(param_1 + 0x2f8) = 0;
      *(unsigned int *)(param_1 + 0x224) = temp_v1;
      FUN_001ee200();
    }
    else {
      FUN_00291008(param_1 + 0x1f8,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e5) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x2fc) + 1;
    *(int *)(param_1 + 0x2fc) = temp_v0;
    if (*(int *)(param_1 + 0x324) < temp_v0) {
      *(unsigned int *)(param_1 + 0x2fc) = 0;
      *(unsigned int *)(param_1 + 0x228) = temp_v1;
      FUN_001ee3dc();
    }
    else {
      FUN_00291008(param_1 + 0x1fc,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e6) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x300) + 1;
    *(int *)(param_1 + 0x300) = temp_v0;
    if (*(int *)(param_1 + 0x328) < temp_v0) {
      *(unsigned int *)(param_1 + 0x300) = 0;
      *(unsigned int *)(param_1 + 0x22c) = temp_v1;
      FUN_001ee2bc();
    }
    else {
      FUN_00291008(param_1 + 0x200,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e7) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x304) + 1;
    *(int *)(param_1 + 0x304) = temp_v0;
    if (*(int *)(param_1 + 0x32c) < temp_v0) {
      *(unsigned int *)(param_1 + 0x304) = 0;
      *(unsigned int *)(param_1 + 0x230) = temp_v1;
      FUN_002030bc();
    }
    else {
      FUN_00291008(param_1 + 0x204,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e8) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x308) + 1;
    *(int *)(param_1 + 0x308) = temp_v0;
    if (*(int *)(param_1 + 0x330) < temp_v0) {
      *(unsigned int *)(param_1 + 0x308) = 0;
      *(unsigned int *)(param_1 + 0x234) = temp_v1;
      FUN_002031dc();
    }
    else {
      FUN_00291008(param_1 + 0x208,param_2);
    }
  }
  if (*(char *)(param_1 + 0x2e9) < '\x04') {
    temp_v0 = *(int *)(param_1 + 0x30c) + 1;
    *(int *)(param_1 + 0x30c) = temp_v0;
    if (*(int *)(param_1 + 0x334) < temp_v0) {
      *(unsigned int *)(param_1 + 0x30c) = 0;
      *(unsigned int *)(param_1 + 0x238) = temp_v1;
      FUN_002032fc();
      return;
    }
    FUN_00291008(param_1 + 0x20c,param_2);
    return;
  }
  return;
}

} /* extern "C" */
