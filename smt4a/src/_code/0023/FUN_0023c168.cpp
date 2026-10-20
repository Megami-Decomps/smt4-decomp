/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c168` (_code @ 0x23c168, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001fc338(...);
int FUN_002e6dd4(int *, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned char DAT_0053faa0; /* 0x53faa0 */
extern unsigned char DAT_00541ba0; /* 0x541ba0 */
extern unsigned char DAT_00543ca0; /* 0x543ca0 */

/* Supplied declaration required: FUN_001fc338. */
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int FUN_0023c168(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  if ((param_6 != 0) && (param_6 == 1)) {
    temp_v9 = param_2 == 0x400;
    if (param_2 < 0x401) {
      temp_v9 = param_5 == 0;
    }
    if (temp_v9) {
      FUN_002e6dd4(param_1,0x20,param_3,param_4,param_4);
      temp_v0 = FUN_001fc338(0x670);
      *param_1 = temp_v0;
      if (temp_v0 != 0) {
        *(unsigned char **)(temp_v0 + 0x3c) = &DAT_0053faa0;
        *(unsigned char **)(temp_v0 + 0x40) = &DAT_00541ba0;
        *(unsigned char **)(temp_v0 + 0x44) = &DAT_00543ca0;
        *(unsigned int *)(temp_v0 + 0x48) = 0;
        *(unsigned int *)(temp_v0 + 4) = param_2;
        *(unsigned int *)(temp_v0 + 8) = param_3;
        param_1[6] = 0x400;
        if (param_2 < 0x201) {
          param_1[6] = 0x200;
        }
        if (param_2 < 0x101) {
          param_1[6] = 0x100;
        }
        param_1[2] = param_4;
        param_1[7] = 1;
        param_1[5] = param_5;
        temp_v0 = FUN_001fc338(param_4 << 2);
        param_1[1] = temp_v0;
        if (temp_v0 != 0) {
          temp_v0 = param_1[6] * (param_3 + (param_3 >> 1) + 1);
          temp_v7 = 0;
          if (param_4 != 0) {
            temp_v1 = param_3 & 1;
            do {
              puVar3 = (unsigned char *)FUN_001fc338(temp_v0);
              *(unsigned char **)(param_1[1] + temp_v7 * 4) = puVar3;
              if (puVar3 == (unsigned char *)0x0) {
                return 0;
              }
              if (param_1[6] * param_3 != 0) {
                temp_v2 = param_1[6] & temp_v1;
                if (temp_v2 == 1) {
                  *puVar3 = 0;
                }
                temp_v3 = (unsigned int)(temp_v2 == 1);
                if (temp_v2 <= param_1[6] * param_3 && param_1[6] * param_3 - temp_v2 != 0) {
                  do {
                    temp_v2 = temp_v2 + 2;
                    *(unsigned char *)(*(int *)(param_1[1] + temp_v7 * 4) + temp_v3) = 0;
                    *(unsigned char *)(*(int *)(param_1[1] + temp_v7 * 4) + temp_v3 + 1) = 0;
                    temp_v3 = temp_v3 + 2;
                  } while (temp_v2 <= param_1[6] * param_3 && param_1[6] * param_3 - temp_v2 != 0);
                }
              }
              temp_v4 = param_1[6] * param_3;
              temp_v2 = temp_v0 - temp_v4;
              if (0 < (int)temp_v2) {
                temp_v5 = 0;
                if (temp_v0 - temp_v4 == 0 || temp_v0 < temp_v4) {
                  temp_v3 = 0;
                }
                else {
                  temp_v3 = temp_v2 & 1;
                  if (temp_v3 == 1) {
                    temp_v5 = 1;
                    *(unsigned char *)(*(int *)(param_1[1] + temp_v7 * 4) + temp_v4) = 0x80;
                  }
                }
                for (; (int)temp_v3 < (int)temp_v2; temp_v3 = temp_v3 + 2) {
                  temp_v8 = temp_v4 + temp_v5;
                  temp_v6 = temp_v5 + 1;
                  temp_v5 = temp_v5 + 2;
                  *(unsigned char *)(*(int *)(param_1[1] + temp_v7 * 4) + temp_v8) = 0x80;
                  *(unsigned char *)(*(int *)(param_1[1] + temp_v7 * 4) + temp_v4 + temp_v6) = 0x80;
                }
              }
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < param_4);
          }
          param_1[3] = param_4 - 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
