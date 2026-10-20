/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144ab4` (_code @ 0x144ab4, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154180(int, int, int, int);
int FUN_00154d68(unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_00161044(unsigned int);
int FUN_00161074(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0063fd88; /* 0x63fd88 */
extern unsigned int DAT_0063fdb4; /* 0x63fdb4 */
extern unsigned int DAT_0063fde0; /* 0x63fde0 */
extern int DAT_0063fe0c; /* 0x63fe0c */
extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned char DAT_0063fe4c; /* 0x63fe4c */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern unsigned int *DAT_0063fef4; /* 0x63fef4 */
extern unsigned char *DAT_0063fef8; /* 0x63fef8 */
extern int DAT_0063ff7c; /* 0x63ff7c */
extern unsigned char DAT_0063ff88; /* 0x63ff88 */

/* Supplied declaration required: FUN_00154180. */
/* Supplied declaration required: FUN_00154d68. */
/* Supplied declaration required: FUN_00161044. */
/* Supplied declaration required: FUN_00161074. */


void FUN_00144ab4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  if (param_1 == 0) {
    DAT_0063fef8 = &DAT_0063fe10;
    DAT_0063fef4 = &DAT_0063fd88;
  }
  else if (param_1 != 1) {
    if (param_1 == 2) {
      if (DAT_0063fe0c != 0) {
        DAT_0063fef8 = &DAT_0063fe10;
      }
      else {
        DAT_0063fef8 = &DAT_0063fe88;
      }
      temp_v2 = 1;
      DAT_0063fef4 = &DAT_0063fde0;
    }
  }
  else {
    DAT_0063fef4 = &DAT_0063fdb4;
    DAT_0063fef8 = &DAT_0063fe4c;
  }
  FUN_00154d68(DAT_0063fef8,DAT_0063fef8 + 0x18,*(unsigned int *)(DAT_0063fef8 + 0x30),
               *(unsigned int *)(DAT_0063fef8 + 0x34));
  temp_v0 = *(int *)(DAT_0063fef8 + 0x30);
  temp_v1 = *(int *)(DAT_0063fef8 + 0x34);
  temp_v3 = *(int *)(DAT_0063fef8 + 0x38);
  if (temp_v3 != 0x500) {
    if (temp_v3 != 0x501) {
      if ((temp_v3 == 0x502) && ((&DAT_0063ff88)[temp_v2] == '\0')) {
        temp_v1 = temp_v1 >> 1;
        temp_v0 = temp_v0 >> 1;
      }
    }
    else if ((&DAT_0063ff88)[temp_v2] == '\0') {
      temp_v0 = temp_v0 >> 1;
    }
  }
  FUN_00154180(0,0,temp_v0,temp_v1);
  puVar1 = DAT_0063fef4;
  if (DAT_0063ff7c == 1) {
    temp_v2 = DAT_0063fef4[5];
    FUN_00161044(*DAT_0063fef4);
    FUN_00161074(puVar1[temp_v2 + 2]);
    return;
  }
  return;
}

} /* extern "C" */
