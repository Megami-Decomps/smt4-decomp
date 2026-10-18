/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00178150` (_code @ 0x178150, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;


void FUN_00178150(int param_1,int *param_2,int *param_3)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(*param_3 + temp_v1 * 2);
      temp_v3 = *(int *)(*(int *)(param_1 + 0xc) + temp_v1 * 4);
      if (temp_v0 != 0xffff) {
        puVar2 = (unsigned short *)(*param_2 + temp_v0 * 0x158);
        switch(*(unsigned short *)(temp_v3 + 4)) {
        default:
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          *puVar2 = *puVar2 | 0x200;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          temp_v0 = *(unsigned short *)(temp_v3 + 4) - 1;
          if (temp_v0 < 0xb) {
            temp_v0 = temp_v0 & 0xffff;
          }
          else {
            temp_v0 = 0;
          }
          temp_v4 = 0;
          do {
            if (((*(unsigned int *)(puVar2 + 4) >> ((temp_v4 & 0x3f) << 2)) & 0xf) == temp_v0) {
              *puVar2 = *puVar2 | 0x400;
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 6);
          break;
        case 0xc:
        case 0xe:
        case 0x10:
          temp_v2 = *puVar2 | 0x8000;
          *puVar2 = temp_v2;
          break;
        case 0x12:
          temp_v2 = *puVar2 | 0x800;
          *puVar2 = temp_v2;
          break;
        case 0x13:
        case 0x14:
        case 0x15:
          temp_v2 = *puVar2 | 0x1000;
          *puVar2 = temp_v2;
          break;
        case 0x16:
        case 0x17:
        case 0x18:
          temp_v2 = *puVar2 | 0x2000;
          *puVar2 = temp_v2;
          break;
        case 0x19:
        case 0x1a:
        case 0x1b:
          *puVar2 = *puVar2 | 0x4000;
          break;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned int *)(param_1 + 0x10));
  }
  return;
}
