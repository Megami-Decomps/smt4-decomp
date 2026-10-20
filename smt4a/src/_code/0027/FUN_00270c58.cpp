/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270c58` (_code @ 0x270c58, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, unsigned char [2], int);

/* stack frame of param_1: 12 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short spC; /* 0xc: local_c */
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned short sp12; /* 0x12: local_12 */
    unsigned char sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp1E; /* 0x1e: local_1e */
    unsigned char sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00137ee0. */


unsigned int FUN_00270c58(unsigned short param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [2];
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  
  temp_v6 = 0;
  temp_v8 = 0;
  temp_v7 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v0[0] = 1;
  temp_v2 = 0xffff;
  temp_v4 = 0xffff;
  temp_v3 = 0xffff;
  temp_v5 = 0xffff;
  temp_v1 = param_1;
  FUN_00137ee0(5,temp_v0,0x16);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
