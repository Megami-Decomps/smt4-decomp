/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00414484` (_code @ 0x414484, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(...);
int FUN_002e9318(...);
int FUN_002e9590(...);
int FUN_002e9afe(...);
int FUN_002ea100(...);
int FUN_004130c0(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00414604; /* 0x414604 */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9590. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea100. */
extern int FUN_002f4e86(int);
/* Supplied declaration required: FUN_004130c0. */


void FUN_00414484(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  
  FUN_002e9afe(param_1 + 0x7c);
  temp_v1 = FUN_002f4e86(param_1 + 0x7c);
  if (temp_v1 == 0) {
    *(unsigned char *)(param_1 + 0xfc) = 1;
  }
  else {
    temp_v2 = 0;
    temp_v1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0);
    while (temp_v1 >> 3 != 0) {
      temp_v0 = (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4)) / 0xc;
      if (temp_v0 <= temp_v2) {
        FUN_002e32a4(9,&LAB_00414604,&LAB_00414604,temp_v2,temp_v0);
      }
      temp_v1 = FUN_002f4e86(*(int *)(param_1 + 0xc4) + temp_v2 * 0xc);
      if ((temp_v1 == 0) &&
         (temp_v0 = (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4)) / 0xc, temp_v0 <= temp_v2)) {
        FUN_002e32a4(9,&LAB_00414604,&LAB_00414604,temp_v2,temp_v0);
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0);
    }
    temp_v1 = *(int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0xbc) != temp_v1) {
      do {
        if (*(int *)(temp_v1 + 8) != 0 || *(int *)(temp_v1 + 0xc) != 0) {
          FUN_002ea100(temp_v3,"not check");
          if ((*(int *)(temp_v1 + 0xa4) - *(int *)(temp_v1 + 0xa0)) >> 3 != 0) {
            FUN_002e9590(temp_v3);
          }
          FUN_002e9318(temp_v3);
        }
        temp_v1 = temp_v1 + 0xb8;
      } while (*(int *)(param_1 + 0xbc) != temp_v1);
    }
    FUN_004130c0(param_1,6);
  }
  return;
}

} /* extern "C" */
