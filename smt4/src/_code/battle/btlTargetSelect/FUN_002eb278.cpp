/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb278` (_code @ 0x2eb278, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int *g_btlTargetSelect; /* 0x439c60 */


void FUN_002eb278(unsigned int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  piVar1 = g_btlTargetSelect;
  if (*(unsigned char *)(g_btlTargetSelect + 2) != param_1) {
    if (param_1 == 1) {
      temp_v0 = *g_btlTargetSelect;
      temp_v2 = 0;
      temp_v1 = 0;
      *(unsigned int *)(temp_v0 + 0xf0) = 0;
      *(unsigned int *)(temp_v0 + 0xe8) = 0;
      *(unsigned int *)(temp_v0 + 0x124) = 0;
      *(unsigned int *)(temp_v0 + 0x128) = 0x42200000;
      do {
        temp_v3 = temp_v2 + 1;
        temp_v1 = temp_v1 + 2;
        *(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x100) = 0;
        temp_v2 = temp_v2 + 2;
        *(unsigned int *)(temp_v0 + temp_v3 * 4 + 0x100) = 0;
      } while (temp_v1 < 8);
      *(unsigned int *)(temp_v0 + 0xf8) = 0;
      *(unsigned int *)(temp_v0 + 0xec) = 0x40800000;
      *(unsigned int *)(temp_v0 + 0xfc) = 0;
      *(unsigned char *)(temp_v0 + 0xe5) = 0;
    }
    if ((char)piVar1[2] == '\x02') {
      temp_v0 = piVar1[1];
      *(unsigned char *)(temp_v0 + 0x13) = 0;
      *(unsigned char *)(temp_v0 + 0x23) = 0;
      *(unsigned char *)(temp_v0 + 0x33) = 0;
      *(unsigned char *)(temp_v0 + 0x43) = 0;
      *(unsigned char *)(temp_v0 + 0x53) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned int *)(temp_v0 + 0x5c) = 0x42200000;
    }
  }
  *(char *)(piVar1 + 2) = (char)param_1;
  return;
}

} /* extern "C" */
