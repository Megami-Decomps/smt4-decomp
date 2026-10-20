/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d6c8` (_code @ 0x34d6c8, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e6a0(...);
int FUN_00282924(unsigned int *, int, int, unsigned int, unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00439ce0; /* 0x439ce0 */
extern unsigned char DAT_00439ce1; /* 0x439ce1 */
extern unsigned char DAT_00439ce2; /* 0x439ce2 */
extern unsigned char DAT_00439ce3; /* 0x439ce3 */
extern unsigned int DAT_00439cf0; /* 0x439cf0 */
#ifndef ROMWRIGHT_STORAGE_s______00439cf4_13_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00439cf4_13_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00439cf4_13_1 {
    char whole[13];
    unsigned char u1[13];
    signed char s1[13];
};
typedef char romwright_storage_s______00439cf4_13_1_size_check[(sizeof(union romwright_storage_s______00439cf4_13_1) == 13) ? 1 : -1];
typedef char romwright_storage_s______00439cf4_13_1_u1_width_check[(sizeof(((union romwright_storage_s______00439cf4_13_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00439cf4_13_1_s1_width_check[(sizeof(((union romwright_storage_s______00439cf4_13_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00439cf4_13_1 s______00439cf4; /* 0x439cf4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0026e6a0. */
/* Supplied declaration required: FUN_00282924. */
extern int aeabi_idivmod(int, int);


unsigned int FUN_0034d6c8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  temp_v2 = puVar1[0x7a6] + param_2 * 0x114;
  FUN_00282924(puVar1,(int)*(short *)(temp_v2 + 0x62),param_2 * 0x45,param_4,param_4);
  if ((*(unsigned int *)(temp_v2 + 0x50) & 8) != 0) {
    temp_v2 = aeabi_idivmod((short)puVar1[0x6d] * 100,(int)*(short *)((int)puVar1 + 0x1b6));
    temp_v1 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x1ea0);
    if (temp_v2 < 0x14) {
      temp_v2 = FUN_0026e6a0(0,0xff,0x1e,temp_v1,0);
      return temp_v2 << 0x18;
    }
    temp_v2 = FUN_0026e6a0(0,0x80,0x1e,temp_v1,0);
    return (temp_v2 << 0x18) | (temp_v2 << 0x10) | (temp_v2 << 8);
  }
  if (((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x2000000) != 0)) &&
     ((*(unsigned short *)((int)puVar1 + 0x1c6) & 0x10) != 0)) {
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)DAT_00439ce0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorUnsignedToFloat((unsigned int)DAT_00439ce1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat((unsigned int)DAT_00439ce2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = VectorFloatToUnsigned(temp_v8 * (float)(*(unsigned int *)&s______00439cf4.u1[0]),3);
    temp_v5 = VectorFloatToUnsigned(temp_v4 * (float)(*(unsigned int *)&s______00439cf4.u1[0]),3);
    temp_v7 = VectorFloatToUnsigned(temp_v6 * (float)(*(unsigned int *)&s______00439cf4.u1[0]),3);
    temp_v0 = FUN_0026e6a0(temp_v3 & 0xff,(unsigned int)DAT_00439ce0,DAT_00439cf0,*(unsigned int *)(temp_v2 + 0x98),
                         0);
    temp_v3 = FUN_0026e6a0(temp_v5 & 0xff,DAT_00439ce1,DAT_00439cf0,*(unsigned int *)(temp_v2 + 0x98),0);
    temp_v5 = FUN_0026e6a0(temp_v7 & 0xff,DAT_00439ce2,DAT_00439cf0,*(unsigned int *)(temp_v2 + 0x98),0);
    return (temp_v0 << 0x18) | ((temp_v3 & 0xff) << 0x10) | ((temp_v5 & 0xff) << 8) | (unsigned int)DAT_00439ce3;
  }
  return 0;
}

} /* extern "C" */
