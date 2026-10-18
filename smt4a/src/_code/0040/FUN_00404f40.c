/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00404f40` (_code @ 0x404f40, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_7_stack;

extern unsigned char LAB_00405258; /* 0x405258 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_0015687c(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001801a4. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_0039b984. */
extern unsigned int FUN_004038e0(unsigned int, unsigned short);
/* Supplied declaration required: FUN_00403d48. */


void FUN_00404f40(unsigned int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [128];
  unsigned int temp_v5;
  
  param_2 = param_2 & 0xffff;
  FUN_0039b984();
  if (param_2 != 0) {
    FUN_002e6354(temp_v4,0x80);
    FUN_001677c0();
    temp_v5 = FUN_004038e0(param_1,*(unsigned short *)(param_2 + 4));
    switch(*(unsigned short *)(param_2 + 4)) {
    default:
      temp_v2 = FUN_001834a4(0x32,0x97);
      FUN_001835b4(2,0x32,1000,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x6a
                  );
      temp_v2 = FUN_001834a4(0x32,0x96);
      FUN_001835b4(2,0x32,temp_v5,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,
                   0x6b);
      break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x12:
      FUN_00184e64(0x57d8ffff);
      temp_v2 = FUN_001834a4(0x32,0x97);
      FUN_001835b4(2,0x32,1000,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x6a
                  );
      temp_v2 = FUN_001834a4(0x32,0x96);
      temp_v3 = *(short *)(temp_v2 + 8) + param_3;
      temp_v2 = *(short *)(temp_v2 + 10) + param_4;
      FUN_001835b4(2,0x32,temp_v5,temp_v3,temp_v2,0x6b);
      FUN_001835b4(2,0x32,0x3f1,temp_v3,temp_v2,0x6b);
      FUN_00183bb0();
    }
    temp_v2 = FUN_001834a4(0x32,0x98);
    temp_v0 = *(short *)(temp_v2 + 8);
    temp_v1 = *(short *)(temp_v2 + 10);
    temp_v3 = param_2 + 0x10;
    temp_v2 = temp_v3;
    FUN_0030ea58(temp_v3,"<pc 0>");
    if (temp_v2 == 0) {
      FUN_001801a4();
      temp_v3 = FUN_0015687c();
    }
    FUN_00100388(temp_v4,&LAB_00405258,temp_v3);
    VectorSignedToFloat(temp_v1 + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v0 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,param_7,temp_v4);
    temp_v2 = FUN_001834a4(0x32,0x99);
    FUN_00403d48(param_1,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x79,
                 param_5,param_6);
    if (*(short *)(param_2 + 6) != 0) {
      FUN_001677c0();
      temp_v2 = FUN_001834a4(0x32,0x9a);
      param_3 = *(short *)(temp_v2 + 8) + param_3;
      param_4 = *(short *)(temp_v2 + 10) + param_4;
      FUN_001835b4(2,0x32,0x9c,param_3,param_4,0x79);
      FUN_001835b4(2,0x32,0x9d,param_3,param_4,0x7a);
    }
    FUN_001677c0();
  }
  return;
}
