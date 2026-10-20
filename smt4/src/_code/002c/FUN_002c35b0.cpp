/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c35b0` (_code @ 0x2c35b0, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a258(unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_002bc644(int, int, int, int);
int FUN_002c2620(unsigned int);
int FUN_002c2860(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern unsigned int DAT_004e3a38; /* 0x4e3a38 */
extern int DAT_004e3a64; /* 0x4e3a64 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3aa4; /* 0x4e3aa4 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern unsigned int *DAT_004e3b4c; /* 0x4e3b4c */
extern unsigned char *DAT_004e3b50; /* 0x4e3b50 */
extern int DAT_004e3bd4; /* 0x4e3bd4 */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

/* Supplied declaration required: FUN_0011a258. */
/* Supplied declaration required: FUN_002bc644. */
/* Supplied declaration required: FUN_002c2620. */
/* Supplied declaration required: FUN_002c2860. */


void FUN_002c35b0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  if (param_1 == 0) {
    DAT_004e3b50 = &DAT_004e3a68;
    DAT_004e3b4c = &DAT_004e39e0;
  }
  else if (param_1 != 1) {
    if (param_1 == 2) {
      if (DAT_004e3a64 != 0) {
        DAT_004e3b50 = &DAT_004e3a68;
      }
      else {
        DAT_004e3b50 = &DAT_004e3ae0;
      }
      temp_v2 = 1;
      DAT_004e3b4c = &DAT_004e3a38;
    }
  }
  else {
    DAT_004e3b4c = &DAT_004e3a0c;
    DAT_004e3b50 = &DAT_004e3aa4;
  }
  FUN_0011a258(DAT_004e3b50,DAT_004e3b50 + 0x18,*(unsigned int *)(DAT_004e3b50 + 0x30),
               *(unsigned int *)(DAT_004e3b50 + 0x34));
  temp_v0 = *(int *)(DAT_004e3b50 + 0x30);
  temp_v1 = *(int *)(DAT_004e3b50 + 0x34);
  temp_v3 = *(int *)(DAT_004e3b50 + 0x38);
  if (temp_v3 != 0x500) {
    if (temp_v3 != 0x501) {
      if ((temp_v3 == 0x502) && ((&DAT_004e3be0)[temp_v2] == '\0')) {
        temp_v1 = temp_v1 >> 1;
        temp_v0 = temp_v0 >> 1;
      }
    }
    else if ((&DAT_004e3be0)[temp_v2] == '\0') {
      temp_v0 = temp_v0 >> 1;
    }
  }
  FUN_002bc644(0,0,temp_v0,temp_v1);
  puVar1 = DAT_004e3b4c;
  if (DAT_004e3bd4 == 1) {
    temp_v2 = DAT_004e3b4c[5];
    FUN_002c2860(*DAT_004e3b4c);
    FUN_002c2620(puVar1[temp_v2 + 2]);
    return;
  }
  return;
}

} /* extern "C" */
