/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5924` (_code @ 0x2e5924, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_002e5924(int param_1)

{
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0057f65c;
  puVar2 = (unsigned char *)(DAT_0057f65c + 0x144c);
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          *(unsigned char *)(DAT_0057f65c + 0xc) = 1;
          *(unsigned int *)(temp_v0 + 0x10) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          *(unsigned int *)(temp_v0 + 0x18) = 0;
          return;
        }
        if (param_1 == 4) {
          *(unsigned char *)(DAT_0057f65c + 0xc) = 1;
          *(unsigned int *)(temp_v0 + 0x10) = 1;
          *puVar2 = 1;
        }
      }
      else {
        if (*(char *)(DAT_0057f65c + 0xc) == '\0') {
          *(unsigned int *)(temp_v0 + 0x10) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          *(unsigned int *)(temp_v0 + 0x18) = 0;
          return;
        }
        *(unsigned int *)(DAT_0057f65c + 0x14) = 1;
      }
      return;
    }
    *(unsigned char *)(DAT_0057f65c + 0xc) = 1;
    *(unsigned int *)(temp_v0 + 0x10) = 1;
  }
  else {
    *(unsigned char *)(DAT_0057f65c + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
    *(unsigned char *)(temp_v0 + 0x1414) = 0;
    *(unsigned char *)(temp_v0 + 0x1417) = 0;
    *(unsigned char *)(temp_v0 + 0x1418) = 0;
    *(unsigned char *)(temp_v0 + 0x1419) = 0;
  }
  *puVar2 = 0;
  return;
}
