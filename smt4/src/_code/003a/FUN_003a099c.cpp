/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a099c` (_code @ 0x3a099c, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e0c0(unsigned int);
int FUN_00230df0(int);
int FUN_00231240(int, unsigned int, unsigned int);
int FUN_00233240(int, int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int nodeSetTranslation3f(unsigned int, int);
int FUN_002a0428(int, int);
int FUN_002b8ee0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_003a0b50; /* 0x3a0b50 */
extern unsigned char LAB_003a0b60; /* 0x3a0b60 */

/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: FUN_00230df0. */
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: nodeSetTranslation3f. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: FUN_002a0428. */
extern int FUN_002adee0(void);
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);


void FUN_003a099c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      temp_v2 = param_1 + 0x3c8;
      FUN_002b8ee0(temp_v2,0);
      temp_v0 = vec2GetYInt(temp_v2);
      temp_v1 = vec2GetXInt(temp_v2);
      FUN_00231240(param_1 + 0x380,temp_v1,temp_v0);
      if (*(char *)(param_1 + 0x452) != '\0') {
        switch(*(unsigned int *)(param_1 + 0x860)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          temp_v2 = FUN_0029e0f8();
          if (temp_v2 != 0) {
            *(unsigned int *)(param_1 + 4) = 5;
            *(unsigned int *)(param_1 + 8) = 0;
          }
          break;
        case 7:
          *(unsigned int *)(param_1 + 4) = 6;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x160),&LAB_003a0b50);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x168),temp_v0);
          FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
          break;
        case 8:
          *(unsigned int *)(param_1 + 4) = 7;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x160),&LAB_003a0b60);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x168),temp_v0);
          FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
          break;
        default:
        }
      }
    }
  }
  else {
    FUN_00230df0(1);
    FUN_00233240(param_1 + 0x3a8,0);
    *(unsigned int *)(param_1 + 8) = 1;
  }
  piVar3 = (int *)(param_1 + 0x15d48);
  if (((*piVar3 != 0) && (temp_v2 = FUN_002adee0(), temp_v2 != 0)) &&
     (*(int *)(*(int *)(*piVar3 + 8) + 0xc) < 0)) {
    FUN_002a0428(*piVar3,1);
    nodeSetTranslation3f(*(unsigned int *)(*piVar3 + 8),0);
    return;
  }
  return;
}

} /* extern "C" */
