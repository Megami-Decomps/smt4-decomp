/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004adbb4` (_code @ 0x4adbb4, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_005211a4. */


unsigned int FUN_004adbb4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = 1;
  temp_v1 = *(int *)(*(int *)(param_1 + 0x1430) + 8);
  if (temp_v1 != *(int *)(param_1 + 0x1430)) {
    do {
      temp_v0 = *(int *)(temp_v1 + 0x18);
      temp_v3 = *(int *)(temp_v0 + 0x10);
      temp_v2 = *(int *)(temp_v3 + 0x48);
      if (temp_v2 != 0) {
        temp_v0 = *(int *)(temp_v2 + 8);
      }
      if (temp_v2 != 0 && temp_v0 != 0) {
        temp_v5 = temp_v3 + 0x44;
        temp_v6 = temp_v3 + 0x54;
        temp_v0 = temp_v3 + 0x2c;
        FUN_005211a4(temp_v0,&temp_v5,&temp_v6);
        puVar6 = (unsigned int *)(temp_v3 + 0x44);
        puVar2 = *(unsigned int **)(temp_v3 + 0x4c);
        if (temp_v0 == 0) {
          temp_v4 = 0;
        }
        if (puVar2 == (unsigned int *)0x0 || puVar2 == puVar6) {
          if (*(int *)(temp_v3 + 0x48) != 0) {
            (**(romwright_code **)(*(int *)*puVar6 + 4))();
          }
        }
        else {
          puVar2[3] = *(unsigned int *)(temp_v3 + 0x50);
          *(unsigned int *)(*(int *)(temp_v3 + 0x50) + 8) = *(unsigned int *)(temp_v3 + 0x4c);
          *(unsigned int *)(temp_v3 + 0x4c) = 0;
          *(unsigned int *)(temp_v3 + 0x50) = 0;
        }
        *(unsigned int *)(temp_v3 + 0x48) = 0;
        *(unsigned int **)(temp_v3 + 0x50) = puVar6;
        *(unsigned int **)(temp_v3 + 0x4c) = puVar6;
        *(unsigned char *)(temp_v2 + 0x11) = 1;
      }
      temp_v0 = *(int *)(temp_v1 + 0xc);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        do {
          temp_v1 = temp_v0;
          temp_v0 = *(int *)(temp_v1 + 8);
        } while (*(int *)(temp_v1 + 8) != 0);
      }
      else {
        temp_v0 = *(int *)(temp_v1 + 4);
        if (temp_v1 == *(int *)(temp_v0 + 0xc)) {
          do {
            temp_v1 = temp_v0;
            temp_v0 = *(int *)(temp_v1 + 4);
          } while (temp_v1 == *(int *)(temp_v0 + 0xc));
        }
        if (*(int *)(temp_v1 + 0xc) != temp_v0) {
          temp_v1 = temp_v0;
        }
      }
    } while (temp_v1 != *(int *)(param_1 + 0x1430));
  }
  return temp_v4;
}
