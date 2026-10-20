/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345098` (_code @ 0x345098, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int FUN_00345098(int param_1,int param_2)

{
  unsigned int temp_v0;
  char temp_v1 [8];
  
  temp_v0 = 0;
  temp_v1[0] = '\0';
  temp_v1[1] = '\x02';
  temp_v1[2] = -1;
  temp_v1[3] = '\x03';
  temp_v1[4] = '\x04';
  temp_v1[5] = '\x01';
  temp_v1[6] = '\0';
  temp_v1[7] = '\0';
  if (temp_v1[param_2] < temp_v1[param_1]) {
    temp_v0 = 0xffffffff;
  }
  if (temp_v1[param_1] < temp_v1[param_2]) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
