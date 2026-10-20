/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc250` (_code @ 0x2fc250, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned char g_asdSound; /* 0x4e1f68 */

extern int FUN_0014d3fc(unsigned char *, unsigned int, unsigned char *);
extern int FUN_002bf684(unsigned char *);


unsigned int FUN_002fc250(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned int temp_v3;
  
  temp_v0 = FUN_002bf684(&g_asdSound);
  temp_v1 = 0xffffffff;
  if ((temp_v0 != 0) && (temp_v0 = FUN_0014d3fc(&g_asdSound,param_1,temp_v2), temp_v0 != 0)) {
    temp_v1 = temp_v3;
  }
  return temp_v1;
}

} /* extern "C" */
