/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522e18` (_code @ 0x522e18, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00520d80. */


void FUN_00522e18(unsigned int *param_1,int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  unsigned char temp_v0;
  char *temp_v1;
  char *temp_v2;
  
  pcVar2 = *(char **)(param_2 + 0x14);
  temp_v0 = 1;
  pcVar3 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(pcVar2 + 4);
    do {
      pcVar3 = pcVar1;
      temp_v0 = *param_3 < *(unsigned int *)(pcVar3 + 0x10);
      if (temp_v0) {
        pcVar1 = *(char **)(pcVar3 + 8);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
    } while (pcVar1 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x1c) == '\0') {
    temp_v2 = pcVar3;
    if (temp_v0) {
      if (pcVar3 == *(char **)(pcVar2 + 8)) {
        FUN_00520d80(&temp_v1);
        temp_v2 = temp_v1;
        *param_1 = (unsigned int)temp_v2;
        return;
      }
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        temp_v2 = *(char **)(pcVar3 + 0xc);
      }
      else {
        temp_v2 = *(char **)(pcVar3 + 8);
        if (temp_v2 != (char *)0x0) {
          for (pcVar3 = *(char **)(temp_v2 + 0xc); pcVar3 != (char *)0x0;
              pcVar3 = *(char **)(pcVar3 + 0xc)) {
            temp_v2 = pcVar3;
          }
        }
        else {
          temp_v2 = *(char **)(pcVar3 + 4);
          pcVar2 = temp_v2;
          if (pcVar3 == *(char **)(temp_v2 + 8)) {
            do {
              temp_v2 = *(char **)(pcVar2 + 4);
              temp_v0 = pcVar2 == *(char **)(temp_v2 + 8);
              pcVar2 = temp_v2;
            } while (temp_v0);
          }
        }
      }
    }
    if (*param_3 <= *(unsigned int *)(temp_v2 + 0x10)) {
      *param_1 = (unsigned int)temp_v2;
      return;
    }
  }
  FUN_00520d80(&temp_v1);
  temp_v2 = temp_v1;
  *param_1 = (unsigned int)temp_v2;
  return;
}
