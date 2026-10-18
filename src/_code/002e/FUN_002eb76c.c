/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb76c` (_code @ 0x2eb76c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002eb76c_arg0 fn_002eb76c_arg0;
struct fn_002eb76c_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x3c];
    void *field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x24];
    void *field_0x70; /* +0x70 */
    undefined2 field_0x74; /* +0x74 */
    undefined2 field_0x76; /* +0x76 */
    unsigned char pad_0x78[0x11];
    undefined1 field_0x89; /* +0x89 */
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_002eb76c(fn_002eb76c_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned short temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v1 = *(unsigned short *)((int)param_1->field_0x48 + 6);
  if (temp_v1 >> 2 != 0) {
    temp_v4 = *(int *)((int)param_1->field_0x48 + 0x18);
    do {
      if (temp_v3 == param_2) {
        psVar3 = (short *)(temp_v4 + temp_v2 * 4);
        goto LAB_002eb7c0;
      }
      temp_v0 = temp_v2 * 4;
      temp_v2 = temp_v2 + 1;
      if (*(short *)(temp_v4 + temp_v0) == -1) {
        temp_v3 = temp_v3 + 1;
      }
    } while (temp_v2 < temp_v1 >> 2);
  }
  psVar3 = (short *)0x0;
LAB_002eb7c0:
  param_1->field_0x70 = psVar3;
  if (psVar3 != (short *)0x0) {
    param_1->field_0x74 = 0;
    param_1->field_0x76 = 0;
    param_1->field_0x89 = 0;
    param_1->field_0x8a = 0;
    param_1->field_0x4 = (int)*psVar3;
    param_1->field_0x8 = 0xffffffff;
  }
  return;
}
