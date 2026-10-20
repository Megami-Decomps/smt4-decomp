/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00490898` (_code @ 0x490898, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int dialogClose(int);
int FUN_002d22c0(int);
int FUN_00398450(void);
int FUN_003adc58(void);
int sub68OwnerGetBlock60(void);
int FUN_00492c18(int, int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_002d22c0. */
/* Supplied declaration required: FUN_00398450. */
/* Supplied declaration required: FUN_003adc58. */
/* Supplied declaration required: sub68OwnerGetBlock60. */
/* Supplied declaration required: FUN_00492c18. */


void FUN_00490898(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_003adc58();
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    temp_v0 = 0;
    do {
      FUN_00163aa4(param_1 + temp_v0 * 0x8c + 0xc40);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    FUN_00163aa4(param_1 + 0x112c);
    FUN_00163aa4(param_1 + 0x10a0);
    if (*(char *)(param_1 + 0xf86) != '\0') {
      if (DAT_005f161d != '\0') {
        sub68OwnerGetBlock60();
        temp_v1 = 0;
        temp_v2 = 0;
        FUN_00492c18(param_1 + 0x4cc,&temp_v1);
        *(char *)(param_1 + 100) = (char)*(unsigned int *)(param_1 + 0x20510);
        *(unsigned char *)(param_1 + 0x7b90) = 1;
        *(unsigned char *)(param_1 + 0x7b91) = 1;
        if (DAT_005f1a5c != '\0') {
          FUN_002d22c0(0);
          FUN_00398450();
          return;
        }
        FUN_002d22c0(0);
        dialogClose(1);
      }
      *(unsigned int *)(param_1 + 4) = 2;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
