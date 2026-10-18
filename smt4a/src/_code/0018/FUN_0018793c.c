/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018793c` (_code @ 0x18793c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int FUN_0018793c(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  
  temp_v0 = *param_1;
  temp_v1 = *param_2;
  temp_v3 = 0;
  temp_v2 = 0;
  if ((temp_v0 & 0x200) != 0) {
    temp_v3 = 0x200;
  }
  if ((temp_v1 & 0x200) == 0) {
    temp_v2 = 0x200;
  }
  if ((temp_v0 & 0x400) != 0) {
    temp_v3 = temp_v3 | 0x400;
  }
  if ((temp_v1 & 0x400) == 0) {
    temp_v2 = temp_v2 | 0x400;
  }
  if ((temp_v0 & 0x800) != 0) {
    temp_v3 = temp_v3 | 0x800;
  }
  if ((temp_v1 & 0x800) == 0) {
    temp_v2 = temp_v2 | 0x800;
  }
  if ((temp_v0 & 0x1000) != 0) {
    temp_v3 = temp_v3 | 0x1000;
  }
  if ((temp_v1 & 0x1000) == 0) {
    temp_v2 = temp_v2 | 0x1000;
  }
  if ((temp_v0 & 0x2000) != 0) {
    temp_v3 = temp_v3 | 0x2000;
  }
  if ((temp_v1 & 0x2000) == 0) {
    temp_v2 = temp_v2 | 0x2000;
  }
  if ((temp_v0 & 0x4000) != 0) {
    temp_v3 = temp_v3 | 0x4000;
  }
  if ((temp_v1 & 0x4000) == 0) {
    temp_v2 = temp_v2 | 0x4000;
  }
  if ((temp_v0 & 0x8000) != 0) {
    temp_v3 = temp_v3 | 0x8000;
  }
  *param_2 = temp_v3 | temp_v1;
  if ((temp_v1 & 0x8000) == 0) {
    temp_v2 = temp_v2 | 0x8000;
  }
  return temp_v2;
}
