/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f960` (_code @ 0x26f960, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c57c8(int, unsigned char [2], int);

/* stack frame of param_1: 10 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp8; /* 0x8: local_8 */
    unsigned short spA; /* 0xa: local_a */
    unsigned char spC; /* 0xc: local_c */
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned short sp12; /* 0x12: local_12 */
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned char sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_0026f960(unsigned short param_1)

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
  
  temp_v2 = 0xffff;
  temp_v4 = 0xffff;
  temp_v3 = 0xffff;
  temp_v5 = 0xffff;
  temp_v0[0] = 1;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = param_1;
  FUN_002c57c8(5,temp_v0,0x12);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
