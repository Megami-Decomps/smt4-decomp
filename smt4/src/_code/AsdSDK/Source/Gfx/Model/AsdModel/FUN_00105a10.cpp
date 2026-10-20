/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105a10` (_code @ 0x105a10, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010df48(void);
int FUN_001113b0(unsigned int, unsigned int *);
int FUN_00111724(unsigned int, unsigned short [2]);
int asdGxCommandListCreate(void);

typedef struct fn_00105a10_arg0 fn_00105a10_arg0;
struct fn_00105a10_arg0 {
    unsigned char pad_0x0[0x80];
    undefined4 field_0x80; /* +0x80 */
    ushort field_0x84; /* +0x84 */
    unsigned char pad_0x86[0x2];
    undefined4 field_0x88; /* +0x88 */
};

/* stack frame of param_1: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned short sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern unsigned int DAT_00464bb4; /* 0x464bb4 */
extern unsigned int DAT_00464bb8; /* 0x464bb8 */
extern unsigned int DAT_00471c40; /* 0x471c40 */
extern unsigned int DAT_004dad88; /* 0x4dad88 */
extern unsigned int DAT_004dad90; /* 0x4dad90 */
extern unsigned int DAT_004dadb0; /* 0x4dadb0 */
extern unsigned int DAT_004dadb4; /* 0x4dadb4 */
extern unsigned int DAT_004dadb8; /* 0x4dadb8 */
extern unsigned int DAT_004dadc4; /* 0x4dadc4 */
extern unsigned int DAT_004dadd0; /* 0x4dadd0 */
extern unsigned int DAT_004dade0; /* 0x4dade0 */
extern unsigned int DAT_004dade4; /* 0x4dade4 */
extern unsigned int DAT_004dade8; /* 0x4dade8 */
extern unsigned int DAT_004dadec; /* 0x4dadec */
extern unsigned int DAT_004dadf0; /* 0x4dadf0 */
extern unsigned int DAT_004dadf4; /* 0x4dadf4 */
extern unsigned int DAT_004dae00; /* 0x4dae00 */
extern unsigned int DAT_004dae0c; /* 0x4dae0c */
extern unsigned int DAT_004dae1c; /* 0x4dae1c */
extern unsigned int DAT_004dae28; /* 0x4dae28 */
extern unsigned int DAT_004dae2c; /* 0x4dae2c */

/* Supplied declaration required: FUN_0010df48. */
/* Supplied declaration required: FUN_001113b0. */
/* Supplied declaration required: FUN_00111724. */
extern unsigned int asdMemoryGetDefaultAllocator(void);
/* Supplied declaration required: asdGxCommandListCreate. */


void FUN_00105a10(fn_00105a10_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4 [2];
  unsigned int temp_v5;
  unsigned int uStack_38;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_20;
  
  DAT_00471c40 = asdMemoryGetDefaultAllocator();
  DAT_004dae28 = 1;
  DAT_004dae2c = 0x280;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4[0] = 0x8058;
  temp_v5 = 0x100000;
  uStack_38 = 0x200;
  temp_v9 = 2;
  temp_v10 = 2;
  uStack_20 = 8;
  if (param_1 != (fn_00105a10_arg0 *)0x0) {
    temp_v4[0] = param_1->field_0x84;
  }
  temp_v8 = 0x702;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_00111724(temp_v0,temp_v4);
  DAT_00464bb4 = temp_v0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_00111724(temp_v0,temp_v4);
  DAT_004dadb0 = 0x100;
  DAT_004dadb4 = 0x100;
  DAT_004dadb8 = 0x100;
  DAT_004dadd0 = 10;
  DAT_004dade0 = 0x100;
  DAT_004dadc4 = 10;
  if (param_1 != (fn_00105a10_arg0 *)0x0) {
    DAT_004dade4 = param_1->field_0x80;
    DAT_004dade8 = param_1->field_0x88;
  }
  DAT_00464bb8 = temp_v0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_001113b0(temp_v0,&DAT_004dadb0);
  DAT_004dadec = 0x100;
  DAT_004dadf0 = 0x100;
  DAT_004dadf4 = 0x100;
  DAT_004dae0c = 10;
  DAT_004dae1c = 0x100;
  DAT_004dae00 = 10;
  DAT_00464b7c = temp_v0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_001113b0(temp_v0,&DAT_004dadec);
  temp_v2 = 0;
  DAT_00464b80 = temp_v0;
  do {
    temp_v1 = temp_v2 * 3;
    asdGxCommandListCreate();
    (&DAT_004dad88)[temp_v2 * 6] = temp_v1;
    asdGxCommandListCreate();
    *(int *)(temp_v2 * 0x18 + 0x4dad8c) = temp_v1;
    FUN_0010df48();
    temp_v3 = temp_v2 + 1;
    (&DAT_004dad90)[temp_v2 * 6] = temp_v1;
    temp_v2 = temp_v3;
  } while (temp_v3 < 2);
  return;
}

} /* extern "C" */
