/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387014` (_code @ 0x387014, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00234b30(void);
int FUN_002737a8(void);
int FUN_00297c3c(void);
int FUN_003401a4(int);
int FUN_003699e4(void);
int FUN_0036a434(int);
int FUN_0036aa04(int);
int FUN_00386720(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00580238; /* 0x580238 */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */

/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_002737a8. */
/* Supplied declaration required: FUN_00297c3c. */
/* Supplied declaration required: FUN_003401a4. */
/* Supplied declaration required: FUN_003699e4. */
/* Supplied declaration required: FUN_0036a434. */
/* Supplied declaration required: FUN_0036aa04. */
/* Supplied declaration required: FUN_00386720. */


void FUN_00387014(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00580238;
  if (DAT_005f1bc4 == '\0') {
    if (*(char *)(DAT_00580238 + 0xb) != '\0') {
      FUN_00386720();
    }
    else {
      FUN_003401a4(DAT_00580238);
    }
  }
  FUN_0036a434(temp_v0);
  FUN_0036aa04(temp_v0);
  FUN_00297c3c();
  FUN_00234b30();
  FUN_002737a8();
  if (*(int *)(DAT_00580238 + 0x40) != 100) {
    FUN_003699e4();
    return;
  }
  return;
}

} /* extern "C" */
