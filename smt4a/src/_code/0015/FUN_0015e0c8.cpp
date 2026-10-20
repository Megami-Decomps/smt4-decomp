/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e0c8` (_code @ 0x15e0c8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0015e0c8_arg0 fn_0015e0c8_arg0;
struct fn_0015e0c8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    byte field_0x1e; /* +0x1e */
    unsigned char pad_0x1f[0x1];
    int field_0x20; /* +0x20 */
};

extern unsigned char DAT_0059dba4; /* 0x59dba4 */

extern int FUN_00175a78(unsigned int, unsigned int);
extern int FUN_00175c30(unsigned int, unsigned int);
extern unsigned int FUN_00191548(void);
extern unsigned int FUN_001c2484(void);


int FUN_0015e0c8(fn_0015e0c8_arg0 *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = param_1->field_0xc;
  temp_v4 = param_1->field_0x18;
  temp_v5 = param_1->field_0x14;
  temp_v1 = FUN_001c2484();
  temp_v2 = FUN_00175c30(temp_v1,(*(unsigned int *)((unsigned char *)&DAT_0059dba4 + 0x4)));
  temp_v1 = FUN_00191548();
  temp_v3 = FUN_00175a78(temp_v1,(*(unsigned int *)((unsigned char *)&DAT_0059dba4 + 0x4)));
  temp_v0 = temp_v3 + temp_v2 + temp_v0 + temp_v4 + temp_v5;
  if (param_1->field_0x1c == 1) {
    temp_v0 = temp_v0 + param_1->field_0x8;
  }
  if ((param_1->field_0x4 == 1) && (param_1->field_0x1e != 0)) {
    temp_v0 = temp_v0 + param_1->field_0x8;
  }
  temp_v6 = param_1->field_0x1d != 0;
  temp_v2 = 0;
  if (temp_v6) {
    temp_v2 = param_1->field_0x20;
  }
  if (temp_v6 && 0 < temp_v2) {
    temp_v0 = temp_v0 + temp_v2 * 8;
  }
  return temp_v0;
}

} /* extern "C" */
