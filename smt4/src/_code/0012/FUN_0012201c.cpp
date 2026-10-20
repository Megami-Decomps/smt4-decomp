/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012201c` (_code @ 0x12201c, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned int FUN_00141ff8(unsigned int);
extern int FUN_00142014(unsigned int, unsigned int, unsigned int *);
extern int FUN_0014204c(unsigned int, int *);


int FUN_0012201c(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  
  temp_v0 = FUN_00141ff8(param_2);
  temp_v5 = 0;
  temp_v4 = temp_v0 * 0x48;
  if (temp_v0 != 0) {
    do {
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v1 = FUN_00142014(param_2,temp_v5 | 0x4000000,&temp_v7);
      temp_v6 = temp_v1 != 0;
      temp_v3 = 0;
      if (temp_v6) {
        temp_v3 = temp_v8;
      }
      temp_v2 = temp_v3;
      if (temp_v6 && temp_v3 != 0) {
        temp_v2 = temp_v7;
      }
      if (((temp_v6 && temp_v3 != 0) && temp_v2 != 0) && -1 < (int)temp_v2) {
        if ((temp_v2 & 1) != 0) {
          temp_v4 = ((temp_v8 + 3) & 0xfffffffc) + ((temp_v4 + 0x3fU) & 0xffffffe0);
        }
        temp_v1 = (int)temp_v7 >> 1;
        if (temp_v1 != 0) {
          temp_v3 = (temp_v8 + 3) & 0xfffffffc;
          do {
            temp_v1 = temp_v1 - 1;
            temp_v4 = temp_v3 + ((((temp_v4 + 0x3fU) & 0xffffffe0) + temp_v3 + 0x3f) & 0xffffffe0);
          } while (temp_v1 != 0);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v0);
  }
  temp_v1 = FUN_0014204c(param_2,&temp_v9);
  if (temp_v1 != 0) {
    temp_v4 = temp_v10 * 0xcc + temp_v11 * 0x2bd4 + temp_v9 * 0x558 + temp_v4 + temp_v12 * 0x460;
  }
  return temp_v4;
}

} /* extern "C" */
