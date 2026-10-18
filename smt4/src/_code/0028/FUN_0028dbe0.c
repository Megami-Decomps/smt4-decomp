/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028dbe0` (_code @ 0x28dbe0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0028dbe0_arg0 fn_0028dbe0_arg0;
struct fn_0028dbe0_arg0 {
    unsigned char pad_0x0[0x1c];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x3];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0x10];
    void *field_0x34; /* +0x34 */
};

extern int FUN_002a8740(void);
extern unsigned int FUN_002b05d0(int);
extern int FUN_002b63ac(void);


unsigned int FUN_0028dbe0(fn_0028dbe0_arg0 *param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_1->field_0x23 == 0) {
    if ((int)param_1->field_0x34 < 0) {
      temp_v1 = FUN_002b63ac();
      temp_v0 = *(unsigned short *)(temp_v1 + 0x72);
    }
    else {
      temp_v1 = FUN_002a8740();
      temp_v0 = *(unsigned short *)(temp_v1 + 0x44);
    }
    temp_v2 = 1;
    temp_v1 = 0;
    do {
      if (((unsigned int)temp_v0 & (1 << (temp_v2 & 0xff))) != 0) {
        if (param_1->field_0x1c == temp_v1) {
          temp_v3 = FUN_002b05d0((int)(short)temp_v2);
          return temp_v3;
        }
        temp_v1 = temp_v1 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xb);
  }
  return 0xffffffff;
}
