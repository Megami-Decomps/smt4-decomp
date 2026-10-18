/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114e54` (_code @ 0x114e54, 0x92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00114e54_arg0 fn_00114e54_arg0;
struct fn_00114e54_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00559758; /* 0x559758 */

extern unsigned int FUN_0010b3de(int, unsigned int *);
extern unsigned int FUN_0011367e(void);
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9acc. */
extern int FUN_002ecf28(void);
/* Supplied declaration required: FUN_002f3b58. */
extern unsigned int *FUN_00300ae8(fn_00114e54_arg0 *, unsigned int);
/* Supplied declaration required: FUN_00300b18. */
/* Supplied declaration required: FUN_00300b4c. */


unsigned int *
FUN_00114e54(fn_00114e54_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = param_3;
  temp_v4 = param_4;
  puVar1 = (unsigned int *)FUN_00300ae8(param_1,1);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = (unsigned int)&DAT_00559758;
  temp_v0 = FUN_002e760a(0x2fc);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0011367e();
  }
  puVar1[5] = temp_v1;
  temp_v0 = FUN_002e760a(0x24);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0010b3de(temp_v0,puVar1);
  }
  puVar1[6] = temp_v1;
  temp_v2 = FUN_002e760a(0x44);
  temp_v0 = 0;
  if (temp_v2 != 0) {
    temp_v0 = FUN_00300b18(temp_v2,0);
  }
  puVar1[4] = temp_v0;
  *(unsigned short *)(temp_v0 + 0x20) = 10;
  puVar1[7] = 0;
  FUN_002e9acc(&temp_v3,30000);
  puVar1[8] = temp_v3;
  puVar1[9] = temp_v4;
  FUN_00300b4c();
  temp_v0 = FUN_002e760a(0x44);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00300b18(temp_v0,0);
  }
  temp_v0 = FUN_002ecf28();
  FUN_002f3b58(*(unsigned int *)(temp_v0 + 0xc),10,temp_v1);
  return puVar1;
}
