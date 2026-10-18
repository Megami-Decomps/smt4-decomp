/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efe78` (_code @ 0x3efe78, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */

extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_003f2aec. */
extern int FUN_004cb638(unsigned short);


void FUN_003efe78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v6;
  int *piVar10;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  
  temp_v7 = 0;
  temp_v6 = 0;
  piVar10 = (int *)(param_1 + 0x1ffc);
  do {
    puVar7 = (unsigned int *)(*piVar10 + temp_v6 * 0x408);
    if (((((DAT_00573978 & *puVar7) != 0 || (DAT_0057397c & puVar7[1]) != 0) &&
         ((puVar7[1] & DAT_005739a4) == 0 && (*puVar7 & DAT_005739a0) == 0)) &&
        ((short)puVar7[0xcd] != 0)) && (temp_v5 = FUN_004cb638((short)puVar7[0x9d]), temp_v5 == 0)) {
      *(unsigned short *)(param_1 + temp_v7 * 2 + 0x3006) =
           *(unsigned short *)(*piVar10 + temp_v6 * 0x408 + 0x6e);
      temp_v7 = temp_v7 + 1;
      *(unsigned short *)(*piVar10 + temp_v6 * 0x408 + 0x390) = 0;
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x6d);
  if (temp_v7 < 1) {
    *(unsigned short *)(param_1 + 0x301e) = 0xffff;
    *(unsigned short *)(param_1 + 0x2004) = 0xffff;
  }
  else {
    *(unsigned short *)(param_1 + 0x301e) = 0;
    temp_v6 = FUN_001633a0((temp_v7 - 1U) & 0xffff);
    temp_v7 = 0;
    temp_v0 = *(short *)(param_1 + temp_v6 * 2 + 0x3006);
    temp_v6 = 0;
    do {
      temp_v5 = temp_v7 + 1;
      temp_v6 = temp_v6 + 2;
      *(unsigned short *)(param_1 + temp_v7 * 2 + 0x3006) = 0xffff;
      temp_v7 = temp_v7 + 2;
      *(unsigned short *)(param_1 + temp_v5 * 2 + 0x3006) = 0xffff;
    } while (temp_v6 < 0xc);
    *(short *)(param_1 + 0x3006) = temp_v0;
    temp_v4 = DAT_005739a4;
    temp_v3 = DAT_005739a0;
    temp_v2 = DAT_0057397c;
    temp_v1 = DAT_00573978;
    temp_v6 = 0;
    do {
      puVar7 = (unsigned int *)(*piVar10 + temp_v6 * 0x408);
      if (((*puVar7 & temp_v1) != 0 || (puVar7[1] & temp_v2) != 0) &&
         ((*puVar7 & temp_v3) == 0 && (puVar7[1] & temp_v4) == 0)) {
        temp_v8 = (short)puVar7[0xcd] == 0;
        puVar8 = (unsigned int *)0x0;
        if (!temp_v8) {
          puVar8 = (unsigned int *)(int)*(short *)((int)puVar7 + 0x6e);
        }
        temp_v9 = puVar8 == (unsigned int *)(int)temp_v0;
        temp_v10 = temp_v8 || temp_v9;
        if (!temp_v8 && !temp_v9) {
          puVar8 = puVar7 + 0x59;
          temp_v10 = puVar8 == (unsigned int *)0x0;
        }
        if (!temp_v10) {
          *(unsigned short *)((int)puVar8 + 0x1ce) = 0;
          *(unsigned short *)(puVar8 + 0x74) = 0;
          *(unsigned short *)((int)puVar8 + 0x1d2) = 0;
          *(unsigned short *)(puVar8 + 0x75) = 0;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x6d);
    FUN_003f2aec(param_1,0);
    *(unsigned short *)(param_1 + 0x2004) =
         *(unsigned short *)(param_1 + *(short *)(param_1 + 0x301e) * 2 + 0x3006);
  }
  return;
}
