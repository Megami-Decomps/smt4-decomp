/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b4b0` (_code @ 0x37b4b0, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(...);
int builtin_strncpy(...);

typedef struct fn_0037b4b0_arg0 fn_0037b4b0_arg0;
struct fn_0037b4b0_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x108];
    undefined4 field_0x10c; /* +0x10c */
    undefined4 field_0x110; /* +0x110 */
    undefined4 field_0x114; /* +0x114 */
    undefined4 field_0x118; /* +0x118 */
    undefined4 field_0x11c; /* +0x11c */
    undefined4 field_0x120; /* +0x120 */
    undefined4 field_0x124; /* +0x124 */
    unsigned char pad_0x128[0x48];
    undefined4 field_0x170; /* +0x170 */
    undefined4 field_0x174; /* +0x174 */
    undefined4 field_0x178; /* +0x178 */
    undefined4 field_0x17c; /* +0x17c */
    undefined1 field_0x180; /* +0x180 */
    undefined1 field_0x181; /* +0x181 */
};

extern unsigned char DAT_00421c78; /* 0x421c78 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_002c38fc. */
extern unsigned int FUN_00376dd0(void);
extern int FUN_0037bd3c(unsigned int *);


int FUN_0037b4b0(fn_0037b4b0_arg0 *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_00376dd0();
  *puVar1 = (unsigned int)&DAT_00421c78;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  builtin_strncpy((char *)(puVar1 + 0x43),"h\fB",4);
  puVar1[0x49] = 0xe7e3ffff;
  temp_v0 = FUN_0037bd3c(puVar1 + 0x4b);
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned char *)(temp_v0 + 0x54) = 0;
  *(unsigned char *)(temp_v0 + 0x55) = param_2;
  FUN_002c38fc();
  return temp_v0 - 300;
}

} /* extern "C" */
