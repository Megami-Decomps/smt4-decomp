/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eca44` (_code @ 0x2eca44, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorCopyHeader(int, unsigned int);

typedef struct fn_002eca44_arg0 fn_002eca44_arg0;
struct fn_002eca44_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined1 field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    void *field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0xc];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x4];
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern unsigned char DAT_005585a4; /* 0x5585a4 */

extern unsigned int FUN_002e7908(fn_002eca44_arg0 **, unsigned int *);
/* Supplied declaration required: vectorCopyHeader. */
extern unsigned int *_ZN9Obj5593b8C1Ev(void);
extern unsigned int FUN_002e9f94(unsigned int *, unsigned int);
extern int FUN_002e9ff4(unsigned int *);


int FUN_002eca44(fn_002eca44_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  fn_002eca44_arg0 *pfStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  int temp_v2;
  
  pfStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  temp_v2 = param_4;
  puVar1 = (unsigned int *)_ZN9Obj5593b8C1Ev();
  *puVar1 = (unsigned int)&DAT_005585a4;
  *(unsigned char *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  temp_v0 = FUN_002e9f94(puVar1 + 5,1);
  puVar1[9] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(puVar1[9] + 4) = puVar1[9];
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  temp_v1 = FUN_002e9ff4(puVar1 + 0xe);
  *(unsigned int *)(temp_v1 + 0x20) = 0;
  *(unsigned int *)(temp_v1 + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v1 + 0x18) = 0;
  *(unsigned int *)(temp_v1 + 0x24) = 0;
  puVar1 = (unsigned int *)(temp_v1 + 0x20);
  temp_v2 = 0x80010001;
  temp_v0 = FUN_002e7908(&pfStack_20,(unsigned int *)&temp_v2);
  vectorCopyHeader(temp_v1,temp_v0);
  *(unsigned int *)(temp_v1 - 0x2c) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return temp_v1 - 0x38;
}

} /* extern "C" */
