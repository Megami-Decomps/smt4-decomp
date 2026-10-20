/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460e9c` (_code @ 0x460e9c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(void);

typedef struct fn_00460e9c_arg0 fn_00460e9c_arg0;
struct fn_00460e9c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x118];
    undefined4 field_0x11c; /* +0x11c */
    undefined4 field_0x120; /* +0x120 */
    undefined4 field_0x124; /* +0x124 */
    undefined4 field_0x128; /* +0x128 */
    undefined4 field_0x12c; /* +0x12c */
    undefined4 field_0x130; /* +0x130 */
    undefined4 field_0x134; /* +0x134 */
    unsigned char pad_0x138[0x48];
    undefined4 field_0x180; /* +0x180 */
    undefined4 field_0x184; /* +0x184 */
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    undefined1 field_0x190; /* +0x190 */
    undefined1 field_0x191; /* +0x191 */
};

extern unsigned char DAT_0055c0fc; /* 0x55c0fc */

/* Supplied declaration required: FUN_00188b60. */
extern unsigned int *FUN_0045bcec(void);
extern int words38Clear(unsigned int *);


int FUN_00460e9c(fn_00460e9c_arg0 *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int *puVar2;
  int temp_v0;
  char *pcVar4;
  
  puVar2 = (unsigned int *)FUN_0045bcec();
  *puVar2 = (unsigned int)&DAT_0055c0fc;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4c] = 0;
  pcVar4 = (char *)(puVar2 + 0x47);
  pcVar1 = (char *)(puVar2 + 0x47);
  pcVar1[0] = 'D';
  pcVar1[1] = -0x7f;
  pcVar1[2] = 'U';
  pcVar1[3] = '\0';
  pcVar4[0] = 'D';
  pcVar4[1] = -0x7f;
  pcVar4[2] = 'U';
  pcVar4[3] = '\0';
  puVar2[0x4d] = 0xe7e3ffff;
  temp_v0 = words38Clear(puVar2 + 0x4f);
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned char *)(temp_v0 + 0x54) = 0;
  *(unsigned char *)(temp_v0 + 0x55) = param_2;
  FUN_00188b60();
  return temp_v0 - 0x13c;
}

} /* extern "C" */
