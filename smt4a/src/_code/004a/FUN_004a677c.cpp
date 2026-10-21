/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a677c` (_code @ 0x4a677c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int menu4BUpdate(int);
int FUN_004a580c(void);
int FUN_004a5d5c(int);
int FUN_004a6c50(int, int);
int words4At20Clear(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_002a482c(int);
/* Supplied declaration required: menu4BUpdate. */
/* Supplied declaration required: FUN_004a580c. */
/* Supplied declaration required: FUN_004a5d5c. */
/* Supplied declaration required: FUN_004a6c50. */
/* Supplied declaration required: words4At20Clear. */
extern int rangeGetMinimumLimit(int);


void FUN_004a677c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar4;
  int temp_v3;
  int unaff_r7;
  
  *(unsigned char *)(param_1 + 0xa97e) = 0xff;
  if (*(int *)(param_1 + 0x14) != 4) {
    FUN_004a580c();
  }
  else {
    menu4BUpdate(param_1);
  }
  FUN_004a5d5c(param_1);
  words4At20Clear(param_1 + 0x96);
  temp_v1 = rangeGetMinimumLimit(param_1 + 0x20);
  if (0 < temp_v1) {
    unaff_r7 = param_1 + 0x800;
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v1) {
    do {
      temp_v2 = FUN_002a482c(param_1 + 0x20);
      FUN_004a6c50(param_1 + 0x96,*(unsigned short *)(unaff_r7 + (temp_v2 + temp_v3) * 0x20 + 0x68));
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v1);
  }
  temp_v1 = 0;
  temp_v3 = 0x10;
  do {
    psVar4 = (short *)(param_1 + 0x96 + temp_v1 * 2);
    temp_v0 = *psVar4;
    if ((temp_v0 != -1 && temp_v0 != 0) && (*(char *)(param_1 + 0x96 + temp_v1 + 0x20) == '\0')) {
      *psVar4 = -1;
    }
    temp_v3 = temp_v3 - 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v3 != 0);
  return;
}

} /* extern "C" */
