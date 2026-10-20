/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6644` (_code @ 0x3d6644, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);

extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00493554; /* 0x493554 */
extern unsigned int DAT_00493558; /* 0x493558 */
extern unsigned int DAT_0049355c; /* 0x49355c */

/* Supplied declaration required: FUN_002b9024. */


void FUN_003d6644(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  *(unsigned int *)(param_1 + 0x740) = 0;
  *(unsigned int *)(param_1 + 0x73c) = 0;
  *(unsigned int *)(param_1 + 0x738) = 0;
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) & 0xff7fffff;
  puVar3 = (unsigned int *)(param_1 + 0x764);
  *(unsigned int *)(param_1 + 0x76c) = 0;
  *(unsigned int *)(param_1 + 0x768) = 0;
  *puVar3 = 0;
  puVar4 = (unsigned int *)(param_2 + 0x44a0);
  if (((*(unsigned int *)(param_2 + 0x44a8) & 0x40000000) != 0) && ((*puVar4 & 0x4000000) != 0)) {
    return;
  }
  if ((*puVar4 & 4) != 0) {
    return;
  }
  if ((*(unsigned int *)(param_2 + 0xe4) & 0x10) != 0 || (*puVar4 & 0x200) != 0) {
    return;
  }
  if ((DAT_004342c8 != 0) && ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x2000000) != 0)) {
    return;
  }
  *(unsigned int *)(param_1 + 0x75c) = *(unsigned int *)(param_1 + 0x760);
  *(int *)(param_1 + 0x760) = param_3;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 != 3) {
          return;
        }
        *(unsigned int *)(param_1 + 0x738) = 0x41400000;
        temp_v0 = DAT_0049355c;
        temp_v2 = DAT_00493558;
        *puVar3 = DAT_00493554;
        *(unsigned int *)(param_1 + 0x768) = temp_v2;
        *(unsigned int *)(param_1 + 0x76c) = temp_v0;
        if ((*puVar4 & 0x4000000) != 0) {
          temp_v2 = 0x3fc00000;
          *(unsigned int *)(param_1 + 0x764) = temp_v2;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x738) = 0x40c00000;
        temp_v0 = DAT_0049355c;
        temp_v2 = DAT_00493558;
        *puVar3 = DAT_00493554;
        *(unsigned int *)(param_1 + 0x768) = temp_v2;
        *(unsigned int *)(param_1 + 0x76c) = temp_v0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x738) = 0xc0c00000;
      temp_v0 = DAT_0049355c;
      temp_v2 = DAT_00493558;
      *puVar3 = DAT_00493554;
      *(unsigned int *)(param_1 + 0x768) = temp_v2;
      *(unsigned int *)(param_1 + 0x76c) = temp_v0;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x738) = 0xc1400000;
    temp_v0 = DAT_0049355c;
    temp_v2 = DAT_00493558;
    *puVar3 = DAT_00493554;
    *(unsigned int *)(param_1 + 0x768) = temp_v2;
    *(unsigned int *)(param_1 + 0x76c) = temp_v0;
    if ((*puVar4 & 0x4000000) != 0) {
      temp_v2 = 0xbfc00000;
      *(unsigned int *)(param_1 + 0x764) = temp_v2;
    }
  }
  puVar4 = (unsigned int *)(*(int *)(param_2 + 0x1fc0) + param_3 * 0x288);
  temp_v1 = *puVar4;
  if (((temp_v1 & 2) == 0) && ((temp_v1 & 8) != 0)) {
    temp_v1 = (unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
    FUN_002b9024();
    temp_v1 = (*(unsigned int *)(temp_v1 + 0x2c) & 0x1fffffff) >> 0x19;
    if (temp_v1 == 0) {
      *(unsigned int *)(param_1 + 0x73c) = temp_v3;
    }
    else {
      if (temp_v1 == 1) {
        temp_v3 = 0xc0600000;
      }
      else {
        if (temp_v1 != 2) {
          return;
        }
        temp_v3 = 0x40400000;
      }
      *(unsigned int *)(param_1 + 0x73c) = temp_v3;
    }
  }
  return;
}

} /* extern "C" */
