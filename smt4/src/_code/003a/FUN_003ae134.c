/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae134` (_code @ 0x3ae134, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ae134_arg0 fn_003ae134_arg0;
struct fn_003ae134_arg0 {
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

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned char LAB_003ae294; /* 0x3ae294 */
extern unsigned int *DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_001e1104. */
/* Supplied declaration required: FUN_00206368. */
extern unsigned short FUN_0022c930(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026c77c. */
/* Supplied declaration required: FUN_0026c7a0. */
/* Supplied declaration required: FUN_0026c7b8. */
/* Supplied declaration required: FUN_0027eb88. */
/* Supplied declaration required: FUN_002ad8a8. */
/* Supplied declaration required: FUN_002dc464. */
/* Supplied declaration required: FUN_002e439c. */


void FUN_003ae134(fn_003ae134_arg0 *param_1,int param_2,unsigned char param_3,unsigned char param_4,
                 int param_5,int param_6)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned short temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  
  puVar1 = DAT_00439ca8;
  DAT_00439ca8[0x1f8e] = 1;
  puVar1[0x1f91] = 0;
  puVar1[0x1f8f] = param_2;
  *(unsigned char *)((int)puVar1 + 0x7e9d) = param_3;
  *(unsigned char *)((int)puVar1 + 0x7e9e) = param_4;
  temp_v1 = param_5;
  if (param_2 == 0) {
    temp_v1 = 0;
  }
  FUN_001e1104(puVar1 + 0x880,param_2,param_6,temp_v1);
  FUN_00206368(puVar1 + 2,puVar1[0x1f8f],(int)*(char *)((int)puVar1 + 0x7e9d),
               (int)*(char *)((int)puVar1 + 0x7e9e));
  if ((param_2 == 1) && (param_5 != 0)) {
    *(unsigned char *)(puVar1 + 0x3276) = 1;
    puVar1[0x3277] = 0x28;
    puVar1[0x3278] = 0;
    FUN_0026c7b8(&LAB_003ae294);
    FUN_0026c7a0();
    FUN_0026c77c(0);
  }
  puVar2 = DAT_00439ca8;
  if (param_6 != 0 || param_2 != 0) {
    puVar4 = DAT_00439ca8 + 0x1fa5;
    FUN_0027eb88(puVar4,0xffffffff);
    temp_v0 = FUN_0022c930(*puVar2,0);
    *(unsigned short *)(puVar2 + 0x1fa5) = temp_v0;
    temp_v0 = FUN_0022c930(*puVar2,1);
    *(unsigned short *)((int)puVar2 + 0x7e96) = temp_v0;
    temp_v0 = FUN_0022c930(*puVar2,2);
    *(unsigned short *)(puVar2 + 0x1fa6) = temp_v0;
    temp_v0 = FUN_0022c930(*puVar2,3);
    *(unsigned short *)((int)puVar2 + 0x7e9a) = temp_v0;
    FUN_002ad8a8(puVar2 + 0x918,puVar4);
    if (param_2 != 0) {
      FUN_002dc464();
      return;
    }
    FUN_002e439c(puVar1 + 0x918);
    return;
  }
  return;
}
