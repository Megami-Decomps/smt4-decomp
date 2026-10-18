/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8bb4` (_code @ 0x1b8bb4, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

/* Supplied declaration required: FUN_001bc2ec. */
/* Supplied declaration required: FUN_001c44b4. */


void FUN_001b8bb4(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,int param_6,
                 unsigned int *param_7)

{
/* irregular: 3 unstructured edge(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned long long temp_v10;
  
  temp_v6 = 0;
  temp_v8 = ~(*(unsigned char *)(param_6 + 0x40) >> 2) & 1;
  FUN_001c44b4(0x20000);
  temp_v0 = FUN_001bc2ec();
  temp_v7 = 0;
  temp_v5 = 0;
  temp_v9 = *param_7;
  temp_v10 = (unsigned long long)temp_v9;
  if (param_4 != 0) {
    do {
      temp_v1 = *(unsigned int *)(param_3 + temp_v5 * 4);
      temp_v3 = (temp_v1 & 0x1fffffff) >> 0x19;
      temp_v9 = temp_v1 & 0x1ffffff;
      temp_v4 = *(int *)(param_5 + 0x20);
      if (temp_v3 != 1) {
        temp_v9 = temp_v9 << 2;
      }
      if ((temp_v1 >> 0x1d != 2) || (temp_v2 = temp_v4, temp_v4 == 0)) {
        temp_v2 = *(int *)(param_5 + (temp_v1 >> 0x1d) * 4);
      }
      puVar6 = (unsigned int *)(temp_v2 + temp_v9);
      switch(temp_v3) {
      default:
        temp_v2 = 0;
        break;
      case 1:
        temp_v2 = 1;
        break;
      case 2:
      case 3:
        temp_v2 = 2;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        temp_v2 = 3;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        temp_v2 = 4;
      }
      temp_v9 = *(int *)(param_5 + temp_v2 * 4) + *puVar6;
      switch(temp_v3) {
      case 3:
        if (temp_v4 != 0) {
          temp_v9 = temp_v4 + *puVar6;
        }
      case 0:
      case 1:
      case 2:
      case 4:
      case 9:
        *puVar6 = temp_v9;
        break;
      case 5:
      case 10:
        temp_v3 = FUN_001bc2ec();
        *puVar6 = temp_v3 >> 3;
        if (temp_v8 != 0) {
          temp_v7 = temp_v7 + 1;
          puVar6 = (unsigned int *)((*param_7 + 3) & 0xfffffffc);
          *param_7 = (unsigned int)(puVar6 + 1);
          *puVar6 = temp_v9;
        }
        break;
      case 6:
      case 0xb:
        temp_v4 = FUN_001bc2ec();
        *puVar6 = temp_v4 - temp_v0;
        if (temp_v8 != 0) {
          temp_v7 = temp_v7 + 1;
          puVar6 = (unsigned int *)((*param_7 + 3) & 0xfffffffc);
          *param_7 = (unsigned int)(puVar6 + 1);
          *puVar6 = temp_v9;
        }
        break;
      case 7:
      case 0xc:
        temp_v4 = FUN_001bc2ec();
        *puVar6 = (temp_v4 - temp_v0) | 0x80000000;
        if (temp_v8 != 0) {
          temp_v7 = temp_v7 + 1;
          puVar6 = (unsigned int *)((*param_7 + 3) & 0xfffffffc);
          *param_7 = (unsigned int)(puVar6 + 1);
          *puVar6 = temp_v9;
        }
        break;
      case 8:
      case 0xd:
        temp_v4 = FUN_001bc2ec();
        *puVar6 = temp_v4 - temp_v0;
        if (temp_v8 != 0) {
          temp_v7 = temp_v7 + 1;
          puVar6 = (unsigned int *)((*param_7 + 3) & 0xfffffffc);
          *param_7 = (unsigned int)(puVar6 + 1);
          *puVar6 = temp_v9;
        }
        break;
      case 0xe:
        *puVar6 = temp_v0 >> 3;
        break;
      default:
        temp_v6 = 0x80000080;
      }
      temp_v9 = (unsigned int)temp_v10;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < param_4);
  }
  if (temp_v8 != 0) {
    param_4 = (unsigned int)*(unsigned short *)(param_6 + 0x42);
  }
  if (temp_v8 != 0 && param_4 != temp_v7) {
    temp_v6 = 0x80000080;
  }
  *param_1 = temp_v9;
  param_1[1] = temp_v6;
  return;
}
