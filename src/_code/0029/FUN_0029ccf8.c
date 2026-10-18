/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ccf8` (_code @ 0x29ccf8, 0x1d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_0044e142; /* 0x44e142 */
extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00288948. */
/* Supplied declaration required: FUN_00288990. */
/* Supplied declaration required: FUN_0029411c. */
/* Supplied declaration required: FUN_0029bc1c. */
extern int FUN_002a0dd4(void);
/* Supplied declaration required: FUN_002a7604. */
extern int FUN_002b8adc(void);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_0029ccf8(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  unsigned int uStack_18;
  
  temp_v0 = DAT_0044e144;
  if (*(int *)(DAT_0044e144 + 0x12dc) == 3) {
    return;
  }
  if (*(char *)(DAT_0044e144 + 0x1e67) == '\x03' || *(char *)(DAT_0044e144 + 0x1e67) == '\t') {
    temp_v1 = FUN_002a0dd4();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v0 + 0x1e80) != 0) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0x1e84);
        uStack_18 = *(unsigned int *)(temp_v0 + 0x1e8c);
        temp_v4 = *(float *)(temp_v0 + 0x1e88) + 1000.0f;
        FUN_0029411c(*(int *)(temp_v0 + 0x1e80),&temp_v3);
        FUN_0029bc1c(1);
        if (*(int *)(temp_v0 + 0x1e80) != 0) {
          FUN_00288948();
        }
      }
    }
    else if (*(int *)(temp_v0 + 0x1e80) != 0) {
      FUN_00288990();
      temp_v1 = FUN_002b8adc();
      if (temp_v1 == 0) {
        FUN_002a7604(0);
      }
      if (DAT_0044e142 != '\0') {
        piVar3 = *(int **)(temp_v0 + 0x1e80);
        if (piVar3 != (int *)0x0) {
          (**(romwright_code **)(*piVar3 + 4))();
          if (*(int *)(temp_v0 + 0x1e80) != 0) {
            FUN_00288948();
          }
        }
      }
      else if (*(int *)(temp_v0 + 0x1e80) != 0) {
        FUN_00288948();
      }
    }
  }
  FUN_002bdac0(temp_v0 + 0x38c,5,0);
  FUN_002bf030(temp_v0 + 0x418,3);
  FUN_002bf030(temp_v0 + 0x4a4,3);
  FUN_002bf030(temp_v0 + 0x530,3);
  FUN_002bdac0(temp_v0 + 0x5bc,5,0);
  FUN_002bdac0(temp_v0 + 0x648,5,0);
  FUN_002bdac0(temp_v0 + 0x6d4,5,0);
  FUN_002bf030(temp_v0 + 0x760,3);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    FUN_002bdac0(temp_v2 + 0x7ec,5,0);
    FUN_002bdac0(temp_v2 + 0xd64,5,0);
    temp_v2 = DAT_0044e144;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  *(unsigned int *)(DAT_0044e144 + 0x10) = 0;
  *(unsigned int *)(temp_v2 + 0x12dc) = 2;
  return;
}
