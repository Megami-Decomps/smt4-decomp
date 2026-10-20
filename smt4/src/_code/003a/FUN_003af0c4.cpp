#include "romwright_types.h"

extern "C" {

int FUN_001f5e9c(int);
int FUN_00218be0(int);
int FUN_002dc4e4(int, unsigned int);

typedef struct fn_003af0c4_arg0 fn_003af0c4_arg0;
struct fn_003af0c4_arg0 {
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
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_001f5e9c. */
/* Supplied declaration required: FUN_00218be0. */
/* Supplied declaration required: FUN_002dc4e4. */


void FUN_003af0c4(fn_003af0c4_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  FUN_00218be0((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 8);
  FUN_001f5e9c(temp_v0 + 0x2200);
  FUN_002dc4e4(temp_v0 + 0x2460,param_2);
  return;
}

} /* extern "C" */
