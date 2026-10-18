/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2aa0` (_code @ 0x2f2aa0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f2aa0_arg0 fn_002f2aa0_arg0;
struct fn_002f2aa0_arg0 {
    unsigned char pad_0x0[0x20];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x4];
    unsigned char field_0x25; /* +0x25 */
    unsigned char pad_0x26[0x16];
    ushort field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0xca];
    undefined4 field_0x108; /* +0x108 */
    undefined4 field_0x10c; /* +0x10c */
};

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0010cc26. */
extern int FUN_002eac34(unsigned char);
extern unsigned int FUN_002f2dc2(unsigned int *, unsigned char *);


unsigned int FUN_002f2aa0(fn_002f2aa0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6;
  
  if ((param_1->field_0x3c & 0xf) != 7) {
    temp_v6 = param_1->field_0x25;
    temp_v0 = temp_v6 >> 4;
    if ((param_1[1].field_0x20 == '\0') &&
       (temp_v1 = FUN_002eac34(temp_v0), *(char *)(temp_v1 + 0x1c) != '\0')) {
      temp_v1 = FUN_002eac34(temp_v0);
      FUN_0010cc26(temp_v5,temp_v1 + 0x18);
      temp_v4 = param_1->field_0x10c;
      temp_v3 = param_1->field_0x108;
      temp_v2 = FUN_002f2dc2((unsigned int *)&temp_v3,temp_v5);
      return temp_v2;
    }
  }
  return 1;
}
