/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a1e4` (_code @ 0x13a1e4, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00143ae8(void);
int FUN_00148880(unsigned int, unsigned short [2]);
int asdGxCommandListCreate(void);

typedef struct fn_0013a1e4_arg0 fn_0013a1e4_arg0;
struct fn_0013a1e4_arg0 {
    unsigned char pad_0x0[0x80];
    undefined4 field_0x80; /* +0x80 */
    ushort field_0x84; /* +0x84 */
    unsigned char pad_0x86[0x2];
    undefined4 field_0x88; /* +0x88 */
};

/* stack frame of param_1: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned short sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int g_asdModelSlotArray3; /* 0x5b3cb8 */
extern unsigned int DAT_005b3cbc; /* 0x5b3cbc */
extern unsigned int DAT_00636e08; /* 0x636e08 */
extern unsigned int DAT_00636e10; /* 0x636e10 */
extern unsigned int DAT_00636e30; /* 0x636e30 */
extern unsigned int DAT_00636e34; /* 0x636e34 */
extern unsigned int DAT_00636e38; /* 0x636e38 */
extern unsigned int DAT_00636e44; /* 0x636e44 */
extern unsigned int DAT_00636e50; /* 0x636e50 */
extern unsigned int DAT_00636e60; /* 0x636e60 */
extern unsigned int DAT_00636e64; /* 0x636e64 */
extern unsigned int DAT_00636e68; /* 0x636e68 */
extern unsigned int DAT_00636e6c; /* 0x636e6c */
extern unsigned int DAT_00636e70; /* 0x636e70 */
extern unsigned int DAT_00636e74; /* 0x636e74 */
extern unsigned int DAT_00636e80; /* 0x636e80 */
extern unsigned int DAT_00636e8c; /* 0x636e8c */
extern unsigned int DAT_00636e9c; /* 0x636e9c */
extern unsigned int DAT_00636eac; /* 0x636eac */

/* Supplied declaration required: FUN_00143ae8. */
/* Supplied declaration required: FUN_00148880. */
/* Supplied declaration required: asdGxCommandListCreate. */
extern unsigned int asdMemoryGetDefaultAllocator(void);


void FUN_0013a1e4(fn_0013a1e4_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4 [2];
  unsigned int temp_v5;
  unsigned int uStack_30;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_18;
  
  (*(unsigned int *)((unsigned char *)&DAT_00636e30 + 0x78)) = 1;
  DAT_00636eac = 0x280;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4[0] = 0x8058;
  temp_v5 = 0x100000;
  uStack_30 = 0x200;
  temp_v9 = 2;
  temp_v10 = 2;
  uStack_18 = 8;
  if (param_1 != (fn_0013a1e4_arg0 *)0x0) {
    temp_v4[0] = param_1->field_0x84;
  }
  temp_v8 = 0x702;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_00148880(temp_v0,temp_v4);
  g_asdModelSlotArray3 = temp_v0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_00148880(temp_v0,temp_v4);
  DAT_00636e30 = 0x100;
  DAT_00636e34 = 0x100;
  DAT_00636e38 = 0x100;
  DAT_00636e50 = 10;
  DAT_00636e60 = 0x100;
  DAT_00636e44 = 10;
  if (param_1 != (fn_0013a1e4_arg0 *)0x0) {
    DAT_00636e64 = param_1->field_0x80;
    DAT_00636e68 = param_1->field_0x88;
  }
  DAT_00636e6c = 0x100;
  DAT_00636e70 = 0x100;
  DAT_00636e74 = 0x100;
  DAT_00636e8c = 10;
  DAT_00636e9c = 0x100;
  DAT_00636e80 = 10;
  temp_v2 = 0;
  DAT_005b3cbc = temp_v0;
  do {
    temp_v1 = temp_v2 * 3;
    asdGxCommandListCreate();
    (&DAT_00636e08)[temp_v2 * 6] = temp_v1;
    asdGxCommandListCreate();
    *(int *)(temp_v2 * 0x18 + 0x636e0c) = temp_v1;
    FUN_00143ae8();
    temp_v3 = temp_v2 + 1;
    (&DAT_00636e10)[temp_v2 * 6] = temp_v1;
    temp_v2 = temp_v3;
  } while (temp_v3 < 2);
  return;
}

} /* extern "C" */
