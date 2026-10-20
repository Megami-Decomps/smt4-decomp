/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406834` (_code @ 0x406834, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004064a8(int, unsigned int, int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int wstrlen(unsigned int);
/* Supplied declaration required: FUN_004064a8. */


void FUN_00406834(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar5;
  unsigned int *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  int unaff_r7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  *(unsigned int *)(param_1 + 8) = param_2;
  temp_v8 = *(int *)(param_1 + 8) == 0;
  if (!temp_v8) {
    unaff_r7 = *(int *)(param_1 + 8) + 0xc;
    temp_v8 = unaff_r7 == 0;
  }
  if (!temp_v8) {
    temp_v7 = 0;
    temp_v0 = **(int **)(*(int *)(unaff_r7 + 0x30) + 0xa8);
    if (*(int *)(temp_v0 + 0x10) != 0) {
      do {
        temp_v8 = 0;
        temp_v4 = 0;
        temp_v5 = *(int *)(temp_v0 + 0xc) + temp_v7 * 0xc;
        if (*(int *)(temp_v5 + 8) != 0) {
          do {
            temp_v1 = *(int *)(unaff_r7 + 0x30);
            temp_v6 = *(unsigned int *)(*(int *)(temp_v5 + 4) + temp_v4 * 4);
            temp_v2 = wstrlen(temp_v6);
            temp_v1 = FUN_001a7a20(temp_v1 + 0x40,temp_v6,temp_v2);
            if (temp_v1 != 0xffff) {
              temp_v1 = *(int *)(*(int *)(*(int *)(unaff_r7 + 0x30) + 0x3c) + temp_v1 * 4);
              if ((*(unsigned char *)(temp_v1 + 0x28) & 8) != 0) {
                FUN_004064a8(param_1,temp_v7,temp_v1,
                             **(unsigned int **)(*(int *)(unaff_r7 + 0x30) + 0x30));
              }
              else if (*(unsigned char *)(temp_v1 + 0x28) == 2 && !temp_v8) {
                temp_v3 = *(unsigned int *)(temp_v1 + 0x30);
                temp_v8 = 1;
                puVar6 = (unsigned int *)(*(int *)(param_1 + 0x108) + temp_v7 * 8);
                *puVar6 = (temp_v3 << 0x18) | (((temp_v3 >> 8) & 0xff) << 0x10) |
                          (((temp_v3 >> 0x10) & 0xff) << 8) | (temp_v3 >> 0x18);
                *(unsigned char *)(puVar6 + 1) = 1;
                pbVar5 = (unsigned char *)(*(int *)(param_1 + 0x10) + (temp_v7 & 0xffff) * 0x278);
                *pbVar5 = *pbVar5 | 1;
              }
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < *(unsigned int *)(temp_v5 + 8));
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < *(unsigned int *)(temp_v0 + 0x10));
    }
  }
  return;
}

} /* extern "C" */
