/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001142fc` (_code @ 0x1142fc, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [8]);

typedef struct fn_001142fc_arg0 fn_001142fc_arg0;
struct fn_001142fc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1c];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined1 field_0x38; /* +0x38 */
    undefined1 field_0x39; /* +0x39 */
    unsigned char pad_0x3a[0x1e];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
};

extern unsigned char LAB_00114364; /* 0x114364 */
extern unsigned char DAT_0055963c; /* 0x55963c */

extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern unsigned int *FUN_002fd1e8(fn_001142fc_arg0 *, unsigned int);
extern int FUN_002ff664(unsigned int *);
extern int onlineListInitialize(unsigned int *, unsigned char *, unsigned int, unsigned char *);


void FUN_001142fc(fn_001142fc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  
  temp_v0 = _ZN9Obj55aff4C1EPKc(temp_v2,&LAB_00114364);
  puVar2 = (unsigned int *)FUN_002fd1e8(param_1,temp_v0);
  _ZN9Obj55aff4D1Ev(temp_v2);
  puVar2[8] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *puVar2 = (unsigned int)&DAT_0055963c;
  *(unsigned char *)(puVar2 + 0xe) = 0;
  *(char *)((int)puVar2 + 0x39) = (char)(int)(puVar2 + 8);
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  temp_v1 = FUN_002ff664(puVar2 + 8);
  puVar2[0xc] = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(unsigned int *)(puVar2[0xc] + 8) = puVar2[0xc];
  *(unsigned int *)(puVar2[0xc] + 0xc) = puVar2[0xc];
  temp_v1 = onlineListInitialize(puVar2 + 0xf,temp_v3,1,temp_v4);
  *(unsigned int *)(temp_v1 + 0x20) = 0;
  *(unsigned int *)(temp_v1 + 0x1c) = 1;
  return;
}

} /* extern "C" */
