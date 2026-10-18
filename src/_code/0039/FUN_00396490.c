/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396490` (_code @ 0x396490, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00396490_arg0 fn_00396490_arg0;
struct fn_00396490_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x54];
    undefined4 field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x18];
    undefined1 field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x3];
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_00421f88; /* 0x421f88 */

extern unsigned int *FUN_00396178(fn_00396490_arg0 *, unsigned int);


void FUN_00396490(fn_00396490_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00396178(param_1,1);
  *(unsigned char *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  *puVar1 = (unsigned int)&DAT_00421f88;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x16] = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}
