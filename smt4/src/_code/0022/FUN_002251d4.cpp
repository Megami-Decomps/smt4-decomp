#include "romwright_types.h"

extern "C" {

int FUN_00298140(...);
int FUN_002a0cb0(...);
int FUN_002b8838(...);

typedef struct fn_002251d4_arg0 fn_002251d4_arg0;
struct fn_002251d4_arg0 {
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

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00298140. */
/* Supplied declaration required: FUN_002a0cb0. */
/* Supplied declaration required: FUN_002b8838. */


void FUN_002251d4(fn_002251d4_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002a0cb0();
  FUN_002b8838();
  FUN_00298140(param_1,param_1->field_0x304c,1);
  return;
}

} /* extern "C" */
