/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ff0c` (_code @ 0x11ff0c, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(int *);
int FUN_00307134(unsigned int *, unsigned int);

typedef struct fn_0011ff0c_arg0 fn_0011ff0c_arg0;
struct fn_0011ff0c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x28];
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x10];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    void *field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined1 field_0x58; /* +0x58 */
    undefined1 field_0x59; /* +0x59 */
    unsigned char pad_0x5a[0x2];
    undefined4 field_0x5c; /* +0x5c */
};

extern unsigned char DAT_0055acc0; /* 0x55acc0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0012f76e(void);
extern unsigned int onlineStringConstruct(unsigned int *, char *);
/* Supplied declaration required: onlineStringDestroy. */
extern unsigned int *initVtable00558fb4(fn_0011ff0c_arg0 *, unsigned int);
/* Supplied declaration required: FUN_00307134. */


unsigned long long
FUN_0011ff0c(fn_0011ff0c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)initVtable00558fb4(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055acc0;
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(unsigned char *)(puVar1 + 0x16) = 0;
  *(unsigned char *)((int)puVar1 + 0x59) = 0xc0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  temp_v0 = FUN_0012f76e();
  puVar1[0x14] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(puVar1[0x14] + 8) = puVar1[0x14];
  *(unsigned int *)(puVar1[0x14] + 0xc) = puVar1[0x14];
  puVar1[0x17] = param_2;
  puVar1[0xb] = puVar1[0xb] | 8;
  temp_v1 = onlineStringConstruct((unsigned int *)&uStack_20,"NintendoNotificationEventManager");
  FUN_00307134(puVar1,temp_v1);
  onlineStringDestroy(&uStack_20);
  return romwright_piece_4_4(uStack_20,puVar1);
}

} /* extern "C" */
