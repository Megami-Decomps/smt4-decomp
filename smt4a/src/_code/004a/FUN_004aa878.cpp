/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa878` (_code @ 0x4aa878, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */


unsigned int FUN_004aa878(void)

{
  char temp_v0;
  unsigned char temp_v1;
  
  if (*(int *)(*(*(int * *)((unsigned char *)&g_btlUi + 0x10)) + 300) < 1) {
    return 1;
  }
  temp_v0 = (char)(*(int * *)((unsigned char *)&g_btlUi + 0x10))[0x1aab];
  temp_v1 = temp_v0 == '\0';
  if (temp_v1) {
    temp_v0 = *(char *)((int)(*(int * *)((unsigned char *)&g_btlUi + 0x10)) + 0x6aad);
  }
  if (temp_v1 && temp_v0 == '\0') {
    temp_v0 = *(char *)((int)(*(int * *)((unsigned char *)&g_btlUi + 0x10)) + 0x6aae);
    temp_v1 = temp_v0 == '\0';
    if (temp_v1) {
      temp_v0 = *(char *)((int)(*(int * *)((unsigned char *)&g_btlUi + 0x10)) + 0x6aaf);
    }
    if ((temp_v1 && temp_v0 == '\0') && ((char)(*(int * *)((unsigned char *)&g_btlUi + 0x10))[0x1aac] == '\0')) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
