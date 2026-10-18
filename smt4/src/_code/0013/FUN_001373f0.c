/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001373f0` (_code @ 0x1373f0, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */
extern unsigned int *DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002aa624. */
/* Supplied declaration required: FUN_002ba2b8. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_001373f0(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  
  temp_v0 = 1;
  puVar6 = *(unsigned int **)((param_1 & 0x1f) * 4 + 0x4c62ac);
  if (puVar6 != (unsigned int *)0x0) {
    do {
      temp_v2 = *puVar6;
      if (temp_v2 != param_1) {
        puVar6 = (unsigned int *)puVar6[0x10];
      }
    } while (temp_v2 != param_1 && puVar6 != (unsigned int *)0x0);
  }
  if (DAT_004c632c == puVar6) {
    puVar6[3] = (int)DAT_004652a0 - puVar6[1];
  }
  rt_memcpy_w(puVar6[6] + puVar6[8] * 0x1c,*(int *)(param_2 + 8) + param_2 + 0x10,
              *(int *)(param_2 + 0xc) * 0x1c);
  temp_v2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    do {
      pcVar2 = (char *)(puVar6[6] + (puVar6[8] + temp_v2) * 0x1c);
      if (*pcVar2 == '\x01') {
        if (temp_v0) {
          temp_v3 = puVar6[3];
          if ((*(unsigned int *)(pcVar2 + 8) & 8) != (temp_v3 & 8)) {
            if (DAT_004c632c == puVar6) {
              if (DAT_004652a0 < DAT_004652a4) {
                *DAT_004652a0 = 0;
                DAT_004652a0[1] = 0x8025e;
                DAT_004652a0 = DAT_004652a0 + 2;
              }
            }
            else {
              temp_v4 = puVar6[1];
              *(unsigned int *)(temp_v3 + temp_v4) = 0;
              ((unsigned int *)(temp_v3 + temp_v4))[1] = 0x25e;
            }
            temp_v3 = puVar6[3] + 8;
            puVar6[3] = temp_v3;
          }
          temp_v0 = 0;
          *(unsigned int *)(pcVar2 + 8) = (temp_v3 - puVar6[5]) + *(int *)(pcVar2 + 8);
        }
        *(unsigned int *)(pcVar2 + 4) = puVar6[5] + puVar6[1];
        puVar6[5] = puVar6[5] + *(int *)(pcVar2 + 8);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(unsigned int *)(param_2 + 0xc));
  }
  rt_memcpy(puVar6[1] + puVar6[3],param_2 + 0x10,*(unsigned int *)(param_2 + 8));
  puVar6[3] = *(int *)(param_2 + 8) + puVar6[3];
  temp_v1 = 0;
  if (puVar6[0xd] != 0) {
    temp_v1 = *(int *)(param_2 + 0xc);
  }
  if (puVar6[0xd] != 0 && temp_v1 != 0) {
    FUN_002aa624(puVar6,puVar6[6] + puVar6[8] * 0x1c);
  }
  if (DAT_004c632c == puVar6) {
    DAT_004652a0 = (unsigned int *)((*(unsigned int *)(param_2 + 8) & 0xfffffffc) + (int)DAT_004652a0);
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_0013b608();
      puVar6[8] = *(int *)(param_2 + 0xc) + puVar6[8];
      if (((DAT_004c6330 == puVar6) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
        DAT_004c62a1 = '\x01';
        FUN_002ba2b8();
      }
      FUN_0013b618();
      return;
    }
  }
  else {
    puVar6[8] = *(int *)(param_2 + 0xc) + puVar6[8];
  }
  return;
}
