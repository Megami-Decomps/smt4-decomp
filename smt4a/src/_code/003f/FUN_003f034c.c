/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f034c` (_code @ 0x3f034c, 0x368 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a10; /* 0x573a10 */
extern unsigned int DAT_00573a14; /* 0x573a14 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a30; /* 0x573a30 */
extern unsigned int DAT_00573a34; /* 0x573a34 */
extern unsigned int DAT_00573a70; /* 0x573a70 */
extern unsigned int DAT_00573a74; /* 0x573a74 */
extern unsigned int DAT_00573ab8; /* 0x573ab8 */
extern unsigned int DAT_00573abc; /* 0x573abc */
extern unsigned int DAT_00573ac0; /* 0x573ac0 */
extern unsigned int DAT_00573ac4; /* 0x573ac4 */
extern unsigned int DAT_00573ad8; /* 0x573ad8 */
extern unsigned int DAT_00573adc; /* 0x573adc */
extern unsigned int DAT_00573ae0; /* 0x573ae0 */
extern unsigned int DAT_00573ae4; /* 0x573ae4 */
extern unsigned int DAT_00573af0; /* 0x573af0 */
extern unsigned int DAT_00573af4; /* 0x573af4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003eafa0. */
/* Supplied declaration required: FUN_003eb0cc. */
/* Supplied declaration required: FUN_003f22fc. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_004a9d1c. */
/* Supplied declaration required: FUN_004abbe8. */
/* Supplied declaration required: FUN_004fbf90. */


void FUN_003f034c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  FUN_003fd63c(0x591,0);
  puVar7 = (unsigned int *)(param_1 + 0x45a0);
  temp_v0 = ~DAT_00573a30;
  temp_v7 = ~DAT_00573a70;
  temp_v3 = ~DAT_00573a10;
  temp_v5 = ~DAT_00573af0;
  *(unsigned int *)(param_1 + 0x45a4) =
       *(unsigned int *)(param_1 + 0x45a4) & ~DAT_00573a34 & ~DAT_00573a14 & ~DAT_00573a74 & ~DAT_00573af4;
  *puVar7 = *puVar7 & temp_v0 & temp_v3 & temp_v7 & temp_v5;
  if (*(char *)(param_1 + 0x4cd0) != '\0') {
    temp_v4 = param_1;
    FUN_003eaf20();
    *(unsigned int *)(param_1 + 0x4d68) = *(unsigned int *)(temp_v4 + 0x400);
  }
  temp_v3 = *puVar7 & ~DAT_00573ab8 & ~DAT_00573ac0;
  temp_v5 = *(unsigned int *)(param_1 + 0x45a4) & ~DAT_00573abc & ~DAT_00573ac4;
  *puVar7 = temp_v3;
  *(unsigned int *)(param_1 + 0x45a4) = temp_v5;
  temp_v8 = temp_v3 & DAT_00573ad8;
  temp_v6 = temp_v5 & DAT_00573adc;
  temp_v7 = ~DAT_00573adc;
  temp_v0 = ~DAT_00573ae4;
  *puVar7 = temp_v3 & ~DAT_00573ad8 & ~DAT_00573ae0;
  *(unsigned int *)(param_1 + 0x45a4) = temp_v5 & temp_v7 & temp_v0;
  if (temp_v8 == 0 && temp_v6 == 0) {
    FUN_004a9d1c(DAT_0057a9c8);
    piVar9 = (int *)(param_1 + 0x4ce0);
    pcVar10 = (char *)(param_1 + 0x45b9);
    if ((*puVar7 & DAT_005739f0) != 0 || (*(unsigned int *)(param_1 + 0x45a4) & DAT_005739f4) != 0) {
      temp_v3 = ~DAT_005739f4;
      pcVar11 = (char *)(param_1 + 0x45b8);
      temp_v0 = ~DAT_00573a2c;
      *puVar7 = *puVar7 & ~DAT_005739f0 & ~DAT_00573a28;
      *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) & temp_v3 & temp_v0;
      temp_v1 = *pcVar11 + '\x01';
      *pcVar11 = temp_v1;
      if (temp_v1 == -1) {
        temp_v1 = -1;
      }
      *pcVar11 = temp_v1;
      temp_v1 = *pcVar10 + '\x01';
      *pcVar10 = temp_v1;
      if (temp_v1 == -1) {
        temp_v1 = -1;
      }
      *pcVar10 = temp_v1;
      if (-1 < *piVar9) {
        temp_v4 = *piVar9 + 1;
        *piVar9 = temp_v4;
        if (temp_v4 >= 0xff) {
          temp_v4 = 0xff;
        }
        *piVar9 = temp_v4;
      }
      if (DAT_00573920 != 0) {
        *(unsigned int *)(DAT_00573920 + 0x8c) = 0x18;
      }
      FUN_003eafa0(param_1,0);
      FUN_003f22fc(param_1,1);
      FUN_003eb0cc(param_1,0);
      return;
    }
    if ((*(int *)(param_1 + 0xac) == 2) && (0 < *(int *)(param_1 + 0xb4))) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) - 1;
    }
    FUN_004fbf90(0);
    temp_v3 = *(unsigned int *)(param_1 + 0x45a4) | DAT_005739f4;
    temp_v0 = ~DAT_00573a2c;
    *puVar7 = (*puVar7 | DAT_005739f0) & ~DAT_00573a28;
    *(unsigned int *)(param_1 + 0x45a4) = temp_v3 & temp_v0;
    temp_v1 = *pcVar10 + '\x01';
    *pcVar10 = temp_v1;
    if (temp_v1 == -1) {
      temp_v1 = -1;
    }
    *pcVar10 = temp_v1;
    if (-1 < *piVar9) {
      temp_v4 = *piVar9 + 1;
      *piVar9 = temp_v4;
      if (temp_v4 >= 0xff) {
        temp_v4 = 0xff;
      }
      *piVar9 = temp_v4;
    }
    if (DAT_00573920 != 0) {
      *(unsigned int *)(DAT_00573920 + 0x8c) = 0x18;
    }
    FUN_003eafa0(param_1,1);
    FUN_003f22fc(param_1,0);
    FUN_003eb0cc(param_1,1);
    temp_v2 = *(short *)(param_1 + 0x4e4e) + 1;
    *(unsigned short *)(param_1 + 0x4e4e) = temp_v2;
    if (temp_v2 >= 0xff) {
      temp_v2 = 0xff;
    }
    *(unsigned short *)(param_1 + 0x4e4e) = temp_v2;
    return;
  }
  FUN_003f26d4(param_1);
  FUN_004abbe8(DAT_0057a9c8);
  temp_v3 = ~DAT_00573a14;
  temp_v0 = ~DAT_00573a74;
  *puVar7 = *puVar7 & ~DAT_00573a10 & ~DAT_00573a70;
  *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) & temp_v3 & temp_v0;
  if (DAT_00573920 != 0) {
    *(unsigned int *)(DAT_00573920 + 0x8c) = 0xc;
  }
  return;
}
