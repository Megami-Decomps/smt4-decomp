/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017db14` (_code @ 0x17db14, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */
extern unsigned int *DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0017e5a4. */
/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0017db14(unsigned int param_1,int param_2)

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
  puVar6 = *(unsigned int **)((param_1 & 0x1f) * 4 + 0x61a48c);
  if (puVar6 != (unsigned int *)0x0) {
    do {
      temp_v2 = *puVar6;
      if (temp_v2 != param_1) {
        puVar6 = (unsigned int *)puVar6[0x10];
      }
    } while (temp_v2 != param_1 && puVar6 != (unsigned int *)0x0);
  }
  if (DAT_0061a50c == puVar6) {
    puVar6[3] = (int)DAT_005b40e0 - puVar6[1];
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
            if (DAT_0061a50c == puVar6) {
              if (DAT_005b40e0 < DAT_005b40e4) {
                *DAT_005b40e0 = 0;
                DAT_005b40e0[1] = 0x8025e;
                DAT_005b40e0 = DAT_005b40e0 + 2;
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
    FUN_0017e5a4(puVar6,puVar6[6] + puVar6[8] * 0x1c);
  }
  if (DAT_0061a50c == puVar6) {
    DAT_005b40e0 = (unsigned int *)((*(unsigned int *)(param_2 + 8) & 0xfffffffc) + (int)DAT_005b40e0);
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_0018b600();
      puVar6[8] = *(int *)(param_2 + 0xc) + puVar6[8];
      if (((DAT_0061a510 == puVar6) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
        DAT_0061a481 = '\x01';
        FUN_001963e0();
      }
      FUN_0018b610();
      return;
    }
  }
  else {
    puVar6[8] = *(int *)(param_2 + 0xc) + puVar6[8];
  }
  return;
}
