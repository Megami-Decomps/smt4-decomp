/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e720` (_code @ 0x10e720, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineTimeGetNow(int *);
int FUN_002f8cc4(int);
int FUN_002f8cf8(int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern signed char DAT_0059496a; /* 0x59496a */
extern unsigned int DAT_00594b30; /* 0x594b30 */
extern unsigned int DAT_00594b34; /* 0x594b34 */

extern int FUN_0010e7e0(int);
/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002f7f00(int, unsigned int);
extern int rangeIsEmpty3(int);
/* Supplied declaration required: FUN_002f8cc4. */
/* Supplied declaration required: FUN_002f8cf8. */


void FUN_0010e720(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_18;
  
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  temp_v0 = rangeIsEmpty3(param_1 + 0x160);
  if (temp_v0 == 0) {
    onlineTimeGetNow(&temp_v2);
    DAT_00594b34 = temp_v3;
    DAT_00594b30 = temp_v2;
    FUN_002f8cf8(param_1);
    if ((*(char *)(param_1 + 0x8c) != '\0') || (*(char *)(param_1 + 0x70) != '\0')) {
      FUN_002f8cc4(param_1);
      FUN_002f8cf8(param_1);
    }
    temp_v0 = 0;
    if (DAT_0059496a != '\0') {
      do {
        if (*(char *)(param_1 + 0x10e) != '\0') break;
        FUN_002f8cc4(param_1);
        temp_v1 = FUN_0010e7e0(param_1);
        if (temp_v1 != 0) break;
        FUN_002f8cf8(param_1);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
    else {
      do {
        temp_v1 = FUN_002f7f00(param_1 + 0x170,0);
        if ((temp_v1 == 0) || (*(char *)(param_1 + 0x10e) != '\0')) break;
        FUN_002f8cc4(param_1);
        FUN_002f8cf8(param_1);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
    *(int *)(param_1 + 0x2dc) = temp_v0;
  }
  return;
}

} /* extern "C" */
