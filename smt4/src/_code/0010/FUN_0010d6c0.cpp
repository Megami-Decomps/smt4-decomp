/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d6c0` (_code @ 0x10d6c0, 0x538 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_004e3cf4; /* 0x4e3cf4 */
extern int DAT_004e3cf8; /* 0x4e3cf8 */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0010d6c0(int param_1,int param_2)

{
/* irregular: 15 goto(s); 1 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
LAB_0010d6d0:
  temp_v2 = 0;
  puVar2 = (unsigned char *)(param_1 + temp_v3 * 8);
  switch(*puVar2) {
  default:
    if (!temp_v2) {
      return 0;
    }
    break;
  case 1:
    break;
  case 2:
    if (param_2 < *(int *)(puVar2 + 4)) {
      return 0;
    }
    break;
  case 3:
    temp_v1 = 0;
    if (DAT_004e3cf8 < 1) {
      return 0;
    }
    do {
      for (temp_v4 = *(int *)(DAT_004e3cf4 + temp_v1 * 8); temp_v4 != 0; temp_v4 = *(int *)(temp_v4 + 0x4c)) {
        if (((*(unsigned int *)(temp_v4 + 0x24) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
           ((*(unsigned int *)(temp_v4 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010dbb0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_004e3cf8);
    if (!temp_v2) {
      return 0;
    }
    break;
  case 4:
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x24) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010da90;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
    }
    break;
  case 5:
    temp_v2 = 1;
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x24) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) {
            temp_v0 = '\0';
            if (temp_v1 != 0) {
              temp_v0 = *(char *)(temp_v1 + 0x98);
            }
            if (temp_v1 != 0 && temp_v0 != '\x03') {
              return 0;
            }
            goto LAB_0010dbd8;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
      if (!temp_v2) {
        return 0;
      }
    }
    break;
  case 6:
    temp_v1 = 0;
    if (DAT_004e3cf8 < 1) {
      return 0;
    }
    do {
      for (temp_v4 = *(int *)(DAT_004e3cf4 + temp_v1 * 8); temp_v4 != 0; temp_v4 = *(int *)(temp_v4 + 0x4c)) {
        if (((*(unsigned int *)(temp_v4 + 0x8c) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
           ((*(unsigned int *)(temp_v4 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010dbb0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_004e3cf8);
    if (!temp_v2) {
      return 0;
    }
    break;
  case 7:
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x8c) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010da90;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
    }
    break;
  case 8:
    temp_v2 = 1;
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x8c) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) {
            temp_v0 = '\0';
            if (temp_v1 != 0) {
              temp_v0 = *(char *)(temp_v1 + 0x98);
            }
            if (temp_v1 != 0 && temp_v0 != '\x03') {
              return 0;
            }
            goto LAB_0010dbd8;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
      if (!temp_v2) {
        return 0;
      }
    }
    break;
  case 9:
    temp_v1 = 0;
    if (DAT_004e3cf8 < 1) {
      return 0;
    }
    do {
      for (temp_v4 = *(int *)(DAT_004e3cf4 + temp_v1 * 8); temp_v4 != 0; temp_v4 = *(int *)(temp_v4 + 0x4c)) {
        if ((*(int *)(temp_v4 + 0x90) == *(int *)(puVar2 + 4)) &&
           ((*(unsigned int *)(temp_v4 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010dbb0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_004e3cf8);
    if (!temp_v2) {
      return 0;
    }
    break;
  case 10:
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if ((*(int *)(temp_v1 + 0x90) == *(int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) goto joined_r0x0010da90;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
    }
    break;
  case 0xb:
    temp_v2 = 1;
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x24) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) {
            if (temp_v1 == 0) goto LAB_0010dbd8;
            if (*(romwright_code **)(temp_v1 + 0x94) == (romwright_code *)0x0) {
              return 0;
            }
            temp_v4 = (**(romwright_code **)(temp_v1 + 0x94))(*(unsigned int *)(temp_v1 + 0x48));
            goto joined_r0x0010dbb0;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
      if (!temp_v2) {
        return 0;
      }
    }
    break;
  case 0xc:
    temp_v2 = 1;
    temp_v4 = 0;
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c))
        {
          if (((*(unsigned int *)(temp_v1 + 0x8c) & 0xfffff) == *(unsigned int *)(puVar2 + 4)) &&
             ((*(unsigned int *)(temp_v1 + 0x1c) & 0x100000) != 0)) {
            if (temp_v1 == 0) goto LAB_0010dbd8;
            if (*(romwright_code **)(temp_v1 + 0x94) == (romwright_code *)0x0) {
              return 0;
            }
            temp_v4 = (**(romwright_code **)(temp_v1 + 0x94))(*(unsigned int *)(temp_v1 + 0x48));
            goto joined_r0x0010dbb0;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < DAT_004e3cf8);
      if (!temp_v2) {
        return 0;
      }
    }
  }
  goto LAB_0010dbd8;
joined_r0x0010da90:
  if (temp_v1 != 0) {
    return 0;
  }
  goto LAB_0010dbd8;
joined_r0x0010dbb0:
  if (temp_v4 == 0) {
    return 0;
  }
LAB_0010dbd8:
  temp_v3 = temp_v3 + 1;
  if (temp_v3 >= 2) {
    return 1;
  }
  goto LAB_0010d6d0;
}

} /* extern "C" */
