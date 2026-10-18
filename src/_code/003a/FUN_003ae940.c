/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae940` (_code @ 0x3ae940, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ae940_arg0 fn_003ae940_arg0;
struct fn_003ae940_arg0 {
    unsigned char pad_0x0[0x3044];
    undefined4 field_0x3044; /* +0x3044 */
    undefined4 field_0x3048; /* +0x3048 */
    undefined4 field_0x304c; /* +0x304c */
    unsigned char pad_0x3050[0xc];
    undefined4 field_0x305c; /* +0x305c */
    unsigned char pad_0x3060[0x3ac];
    undefined4 field_0x340c; /* +0x340c */
    unsigned char pad_0x3410[0x2304];
    undefined2 field_0x5714; /* +0x5714 */
    unsigned char pad_0x5716[0x10];
    undefined2 field_0x5726; /* +0x5726 */
    undefined2 field_0x5728; /* +0x5728 */
    undefined2 field_0x572a; /* +0x572a */
    unsigned char pad_0x572c[0xc];
    undefined2 field_0x5738; /* +0x5738 */
    unsigned char pad_0x573a[0x1e];
    undefined4 field_0x5758; /* +0x5758 */
    unsigned char pad_0x575c[0x3];
    byte field_0x575f; /* +0x575f */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int *DAT_00439ca8; /* 0x439ca8 */

extern unsigned short FUN_0022cac4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027edf8. */
/* Supplied declaration required: FUN_002adb34. */
/* Supplied declaration required: FUN_002dc3fc. */
/* Supplied declaration required: FUN_002e4328. */


void FUN_003ae940(fn_003ae940_arg0 *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  unsigned int *puVar3;
  
  puVar1 = DAT_00439ca8;
  puVar3 = DAT_00439ca8 + 0x1fa5;
  FUN_0027edf8(puVar3,0xffffffff);
  temp_v0 = FUN_0022cac4(*puVar1,0);
  *(unsigned short *)(puVar1 + 0x1fa5) = temp_v0;
  temp_v0 = FUN_0022cac4(*puVar1,1);
  *(unsigned short *)((int)puVar1 + 0x7e96) = temp_v0;
  temp_v0 = FUN_0022cac4(*puVar1,2);
  *(unsigned short *)(puVar1 + 0x1fa6) = temp_v0;
  temp_v0 = FUN_0022cac4(*puVar1,3);
  *(unsigned short *)((int)puVar1 + 0x7e9a) = temp_v0;
  FUN_002adb34(puVar1 + 0x918,puVar3);
  if (param_2 != 0) {
    FUN_002dc3fc();
    return;
  }
  FUN_002e4328(puVar1 + 0x918);
  return;
}
