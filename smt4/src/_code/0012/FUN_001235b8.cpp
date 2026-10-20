/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001235b8` (_code @ 0x1235b8, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137780(int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_004c6298; /* 0x4c6298 */
extern int DAT_004c63c0; /* 0x4c63c0 */
extern int DAT_004c63cc; /* 0x4c63cc */
extern int DAT_004c63d8; /* 0x4c63d8 */
extern int DAT_004c63f4; /* 0x4c63f4 */

/* Supplied declaration required: FUN_00137780. */


void FUN_001235b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  temp_v6 = 0;
  do {
    temp_v0 = temp_v6 + 0x400;
    temp_v8 = param_1 != temp_v0;
    if (temp_v8) {
      temp_v0 = param_1 - 0x400;
    }
    temp_v5 = 0;
    if (!temp_v8 || temp_v0 == 2) {
      temp_v0 = temp_v6 * 4;
      temp_v4 = *(int *)(temp_v0 + 0x4c63b8);
      temp_v2 = *(int *)(temp_v4 + 8);
      if (temp_v2 == 0x8057) {
        temp_v1 = 3;
        temp_v3 = 2;
      }
      else if (temp_v2 < 0x8058) {
        if (temp_v2 == 0x8051) {
          temp_v1 = 1;
          temp_v3 = 3;
        }
        else if (temp_v2 == 0x8056) {
          temp_v1 = 4;
          temp_v3 = 2;
        }
        else {
          temp_v1 = 0;
          temp_v3 = 0;
        }
      }
      else if (temp_v2 == 0x8058) {
        temp_v1 = 0;
        temp_v3 = 4;
      }
      else if (temp_v2 == 0x8d62) {
        temp_v1 = 2;
        temp_v3 = temp_v1;
      }
      else {
        temp_v1 = 0;
        temp_v3 = 0;
      }
      if (*(int *)(temp_v4 + 0x14) == 0x10000) {
        temp_v7 = 0x100;
      }
      else {
        temp_v7 = 0x300;
      }
      temp_v1 = temp_v1 | temp_v7;
      temp_v7 = temp_v1;
      if ((((temp_v6 == 0) && (temp_v7 = temp_v1 | 0x40, DAT_004c63f4 != 0x700)) &&
          (temp_v7 = temp_v1, DAT_004c63f4 != 0x701)) && (temp_v7 = temp_v1 | 0x40, DAT_004c63f4 == 0x702))
      {
        temp_v5 = temp_v3 * (*(int *)(DAT_004c63c0 + 0xc) *
                         ((*(int *)(DAT_004c63c0 + 0x10) - DAT_004c6298) - DAT_004c63d8) +
                        DAT_004c63cc) + *(int *)(DAT_004c63c0 + 4);
        temp_v7 = temp_v1 | 0x20;
      }
      FUN_00137780(temp_v6,*(unsigned int *)(temp_v0 + 0x4c63dc),
                   temp_v3 * (*(int *)(temp_v4 + 0xc) *
                            ((*(int *)(temp_v4 + 0x10) - (&DAT_004c6298)[temp_v6]) -
                            *(int *)(temp_v0 + 0x4c63d0)) + *(int *)(temp_v0 + 0x4c63c4)) +
                   *(int *)(temp_v4 + 4),temp_v5,*(int *)(temp_v4 + 0xc) * temp_v3,temp_v7,
                   *(unsigned int *)(temp_v0 + 0x4c63dc));
      *(unsigned int *)(temp_v0 + 0x4c63dc) = (unsigned int)(*(int *)(temp_v0 + 0x4c63dc) == 0);
    }
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 2) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
