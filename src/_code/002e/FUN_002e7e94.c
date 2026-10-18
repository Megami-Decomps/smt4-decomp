/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7e94` (_code @ 0x2e7e94, 0x258 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e7e94_arg1 fn_002e7e94_arg1;
typedef struct fn_002e7e94_arg1_p90 fn_002e7e94_arg1_p90;
struct fn_002e7e94_arg1 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x7];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x7];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x67];
    fn_002e7e94_arg1_p90 *field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x4];
    uint field_0x98; /* +0x98 */
    unsigned char pad_0x9c[0x10];
    void *field_0xac; /* +0xac */
    int field_0xb0; /* +0xb0 */
};
struct fn_002e7e94_arg1_p90 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
};

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0025c888. */
/* Supplied declaration required: FUN_002c4360. */
extern void FUN_002e7e94(int, fn_002e7e94_arg1 *);


void FUN_002e7e94(int param_1,fn_002e7e94_arg1 *param_2)

{
/* irregular: 6 unstructured edge(s); 5 goto(s); 2 native warning(s); review required */
  fn_002e7e94_arg1 *pfVar1;
  fn_002e7e94_arg1_p90 *pfVar2;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if (param_2->field_0xb0 != 0) {
    *(void **)(param_2->field_0xb0 + 0xac) = param_2->field_0xac;
  }
  else {
    *(void **)(param_1 + 0x8c) = param_2->field_0xac;
  }
  if (param_2->field_0xac != (void *)0x0) {
    *(int *)((int)param_2->field_0xac + 0xb0) = param_2->field_0xb0;
  }
  else {
    *(int *)(param_1 + 0x88) = param_2->field_0xb0;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) - 1;
  if ((param_2->field_0x98 & 1) == 0) {
    for (pfVar1 = *(fn_002e7e94_arg1 **)(param_1 + 0x8c); pfVar1 != (fn_002e7e94_arg1 *)0x0;
        pfVar1 = pfVar1->field_0xac) {
      if (((pfVar1->field_0x98 & 1) != 0) && (pfVar1->field_0x90 == param_2->field_0x90)) {
        do {
          if (pfVar1 == (fn_002e7e94_arg1 *)0x0) goto LAB_002e7f70;
          FUN_002e7e94(param_1,pfVar1);
          pfVar1 = *(fn_002e7e94_arg1 **)(param_1 + 0x8c);
          while( 1 ) {
            if (pfVar1 == (fn_002e7e94_arg1 *)0x0) goto LAB_002e7f70;
            if (((pfVar1->field_0x98 & 1) != 0) && (pfVar1->field_0x90 == param_2->field_0x90))
            break;
            pfVar1 = pfVar1->field_0xac;
          }
        } while( 1 );
      }
    }
LAB_002e7f70:
    if ((param_2->field_0x98 & 2) == 0) {
      temp_v1 = *(int *)(param_1 + 0x8c);
      while( 1 ) {
        if (temp_v1 == 0) goto LAB_002e806c;
        pfVar2 = (fn_002e7e94_arg1_p90 *)(*(unsigned int *)(temp_v1 + 0x98) & 3);
        temp_v2 = pfVar2 == (fn_002e7e94_arg1_p90 *)0x2;
        if (temp_v2) {
          pfVar2 = *(fn_002e7e94_arg1_p90 **)(temp_v1 + 0x94);
        }
        if (temp_v2 && pfVar2 == param_2->field_0x90) break;
        temp_v1 = *(int *)(temp_v1 + 0xac);
      }
      if (temp_v1 != 0) {
        *(unsigned int *)(temp_v1 + 0x98) = *(unsigned int *)(temp_v1 + 0x98) & 0xfffffffd;
        *(unsigned int *)(temp_v1 + 0x94) = 0;
        FUN_0025c888(param_1,temp_v1);
        temp_v0 = *(int *)(param_1 + 0x8c);
        while( 1 ) {
          if (temp_v0 == 0) goto LAB_002e806c;
          pfVar2 = (fn_002e7e94_arg1_p90 *)(*(unsigned int *)(temp_v0 + 0x98) & 3);
          temp_v2 = pfVar2 == (fn_002e7e94_arg1_p90 *)0x2;
          if (temp_v2) {
            pfVar2 = *(fn_002e7e94_arg1_p90 **)(temp_v0 + 0x94);
          }
          if (temp_v2 && pfVar2 == param_2->field_0x90) break;
          temp_v0 = *(int *)(temp_v0 + 0xac);
        }
        do {
          if (temp_v0 == 0) break;
          FUN_0025c888(param_1,temp_v0,temp_v1);
          temp_v0 = *(int *)(param_1 + 0x8c);
          while( 1 ) {
            if (temp_v0 == 0) goto LAB_002e806c;
            pfVar2 = (fn_002e7e94_arg1_p90 *)(*(unsigned int *)(temp_v0 + 0x98) & 3);
            temp_v2 = pfVar2 == (fn_002e7e94_arg1_p90 *)0x2;
            if (temp_v2) {
              pfVar2 = *(fn_002e7e94_arg1_p90 **)(temp_v0 + 0x94);
            }
            if (temp_v2 && pfVar2 == param_2->field_0x90) break;
            temp_v0 = *(int *)(temp_v0 + 0xac);
          }
        } while( 1 );
      }
    }
LAB_002e806c:
    if ((param_2->field_0x98 & 1) == 0) {
      pfVar2 = param_2->field_0x90;
      if (pfVar2->field_0x8 != 0) {
        (**(romwright_code **)((unsigned int)pfVar2->field_0x4 * 0x44 + 0x464120))();
      }
      if (pfVar2->field_0x18 != 0) {
        FUN_002c4360();
        pfVar2->field_0x10 = 0;
        pfVar2->field_0x14 = 0;
        pfVar2->field_0x18 = 0;
      }
      if (pfVar2->field_0x28 != 0) {
        FUN_002c4360();
        pfVar2->field_0x20 = 0;
        pfVar2->field_0x24 = 0;
        pfVar2->field_0x28 = 0;
      }
      FUN_002c4360(pfVar2);
    }
  }
  FUN_002c4360(param_2);
  return;
}
