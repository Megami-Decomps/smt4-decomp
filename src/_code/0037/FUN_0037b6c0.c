/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b6c0` (_code @ 0x37b6c0, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037b6c0_arg0 fn_0037b6c0_arg0;
struct fn_0037b6c0_arg0 {
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

extern unsigned char DAT_004218c0; /* 0x4218c0 */

/* Supplied declaration required: FUN_002c3b00. */
extern unsigned int *FUN_00376fe0(void);
extern int FUN_0037bf4c(unsigned int *);


int FUN_0037b6c0(fn_0037b6c0_arg0 *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int *puVar2;
  int temp_v0;
  char *pcVar4;
  
  puVar2 = (unsigned int *)FUN_00376fe0();
  *puVar2 = (unsigned int)&DAT_004218c0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  pcVar4 = (char *)(puVar2 + 0x43);
  pcVar1 = (char *)(puVar2 + 0x43);
  pcVar1[0] = -0x50;
  pcVar1[1] = '\b';
  pcVar1[2] = 'B';
  pcVar1[3] = '\0';
  pcVar4[0] = -0x50;
  pcVar4[1] = '\b';
  pcVar4[2] = 'B';
  pcVar4[3] = '\0';
  puVar2[0x49] = 0xe7e3ffff;
  temp_v0 = FUN_0037bf4c(puVar2 + 0x4b);
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned char *)(temp_v0 + 0x54) = 0;
  *(unsigned char *)(temp_v0 + 0x55) = param_2;
  FUN_002c3b00();
  return temp_v0 - 300;
}
