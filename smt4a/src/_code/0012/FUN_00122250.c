/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122250` (_code @ 0x122250, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00122250_arg0 fn_00122250_arg0;
struct fn_00122250_arg0 {
    unsigned char pad_0x0[0xe0];
    undefined4 field_0xe0; /* +0xe0 */
    undefined4 field_0xe4; /* +0xe4 */
    undefined4 field_0xe8; /* +0xe8 */
    unsigned char pad_0xec[0x4];
    undefined4 field_0xf0; /* +0xf0 */
    undefined4 field_0xf4; /* +0xf4 */
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0x4];
    undefined4 field_0x100; /* +0x100 */
    undefined4 field_0x104; /* +0x104 */
};

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

extern unsigned char LAB_00122294; /* 0x122294 */

/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */


void FUN_00122250(fn_00122250_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [20];
  
  param_1->field_0xf8 = param_7;
  param_1->field_0xf4 = param_6;
  param_1->field_0xe8 = param_4;
  param_1->field_0xe4 = param_3;
  param_1->field_0xe0 = param_2;
  param_1->field_0xf0 = param_5;
  FUN_002ea20c(&temp_v1);
  param_1->field_0x100 = temp_v1;
  param_1->field_0x104 = temp_v2;
  temp_v0 = FUN_002ea3c0(temp_v3,0x34,1,&LAB_00122294);
  FUN_002ea3d0(param_1,temp_v0);
  return;
}
