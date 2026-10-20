/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a12c` (_code @ 0x10a12c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e97b4(unsigned char [6], unsigned short [128], int);
int FUN_002f32ac(unsigned char [6], unsigned int, int);
int FUN_002f32dc(unsigned int);
int FUN_002f32f8(...);
int FUN_002f3338(...);

/* stack frame of param_4: 5 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned short sp142; /* 0x142: local_142 */
} param_4_stack;

extern unsigned char LAB_0010a1dc; /* 0x10a1dc */
extern unsigned char LAB_0010a1fc; /* 0x10a1fc */

/* Supplied declaration required: FUN_002e97b4. */
/* Supplied declaration required: FUN_002f32ac. */
extern unsigned int *arrayElementAddress_002f32d4(int, unsigned int);
/* Supplied declaration required: FUN_002f32dc. */
/* Supplied declaration required: FUN_002f32f8. */
/* Supplied declaration required: FUN_002f3338. */


unsigned int FUN_0010a12c(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [6];
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short temp_v5 [128];
  int temp_v6;
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    temp_v6 = param_1;
    uStack_20 = param_2;
    iStack_1c = param_3;
    uStack_18 = param_4;
    FUN_002f32ac(temp_v1,param_2,0);
    temp_v0 = 0;
    if ((((temp_v3 & 0xff) != 0 || ((temp_v3 >> 8) & 0xff) != 0) ||
        ((temp_v3 >> 0x10) & 0xff) != 0) || temp_v3 >> 0x18 != 0) {
      temp_v5[0] = 0;
      FUN_002e97b4(temp_v1,temp_v5,0x100);
      temp_v4 = temp_v6 + 0x114;
      puVar1 = (unsigned int *)arrayElementAddress_002f32d4(temp_v4,0);
      FUN_002f32dc(*puVar1);
      puVar1 = (unsigned int *)arrayElementAddress_002f32d4(temp_v4,0);
      temp_v0 = FUN_002f32f8(*puVar1,&LAB_0010a1dc);
      temp_v0 = FUN_002f32f8(temp_v0,temp_v5);
      temp_v0 = FUN_002f32f8(temp_v0,&LAB_0010a1fc);
      FUN_002f3338(temp_v0,param_3);
      temp_v2 = (unsigned short)((param_4 & 0xff) << 8) | ((unsigned short)(param_4 >> 8) & 0xff);
      temp_v5[0] = 0;
      FUN_002e97b4(temp_v1,temp_v5,0x100);
      puVar1 = (unsigned int *)arrayElementAddress_002f32d4(temp_v4,1);
      FUN_002f32dc(*puVar1);
      puVar1 = (unsigned int *)arrayElementAddress_002f32d4(temp_v4,1);
      temp_v0 = FUN_002f32f8(*puVar1,&LAB_0010a1dc);
      temp_v0 = FUN_002f32f8(temp_v0,temp_v5);
      temp_v0 = FUN_002f32f8(temp_v0,&LAB_0010a1fc);
      FUN_002f3338(temp_v0,param_4);
      temp_v0 = 1;
    }
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
