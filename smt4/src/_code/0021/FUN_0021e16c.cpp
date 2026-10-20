/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e16c` (_code @ 0x21e16c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int DAT_00447e40; /* 0x447e40 */


char * FUN_0021e16c(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = 0;
  temp_v2 = DAT_00447e40 + param_1 * 0x284;
  do {
    temp_v0 = DAT_00447e40 + temp_v1 * 0x30;
    pcVar2 = (char *)(temp_v0 + 0x2844);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      *(unsigned char *)(temp_v0 + 0x2845) = 0;
      *(unsigned int *)(temp_v0 + 0x284c) = 0;
      *(int *)(temp_v0 + 0x2848) = param_1;
      temp_v3 = *(unsigned int *)(temp_v2 + 8);
      temp_v4 = *(unsigned int *)(temp_v2 + 0xc);
      *(unsigned int *)(temp_v0 + 0x2850) = *(unsigned int *)(temp_v2 + 4);
      *(unsigned int *)(temp_v0 + 0x2854) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x2858) = temp_v4;
      temp_v3 = *(unsigned int *)(temp_v2 + 0x2c);
      temp_v4 = *(unsigned int *)(temp_v2 + 0x30);
      *(unsigned int *)(temp_v0 + 0x2864) = *(unsigned int *)(temp_v2 + 0x34);
      *(unsigned int *)(temp_v0 + 0x285c) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x2860) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x2868) = in_s0;
      *(unsigned int *)(temp_v0 + 0x286c) = 0;
      *(int *)(temp_v0 + 0x2870) = temp_v1;
      return pcVar2;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  return (char *)0x0;
}

} /* extern "C" */
