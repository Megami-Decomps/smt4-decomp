/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e9c8` (_code @ 0x22e9c8, 0x2f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_00230a50(int *, int [3], int);
int FUN_003a6c64(...);
int VectorSignedToFloat(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char LAB_0022ecd0; /* 0x22ecd0 */
extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00230a50. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_003a6c64. */
extern unsigned int FUN_003a6f84(unsigned int);


void FUN_0022e9c8(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  int temp_v11;
  int temp_v12 [3];
  int temp_v13;
  unsigned int temp_v14;
  unsigned short *temp_v15;
  
  temp_v7 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  if (*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) != '\0' && *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) != '\x04') {
    temp_v11 = 0;
    temp_v12[0] = 0;
    temp_v0 = *(unsigned short *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x19a8);
    FUN_00230a50(&temp_v11,temp_v12,0x17);
    efctSetSpeed();
    FUN_001835b4(2,0x12,0x119,temp_v11,temp_v12[0],0xdd);
    FUN_001835b4(2,0x12,0x11a,temp_v11,temp_v12[0],0xdd);
    FUN_001835b4(2,0x12,0x11b,temp_v11,temp_v12[0],0xdd);
    temp_v3 = FUN_001834a4(0x12,0x11c);
    temp_v4 = FUN_001834a4(0x12,0x11d);
    temp_v10 = (int)*(short *)(temp_v3 + 8);
    temp_v1 = **(short **)(temp_v3 + 0xc);
    temp_v13 = (int)*(short *)(temp_v3 + 10);
    if (temp_v0 >= 11) {
      temp_v2 = **(short **)(temp_v4 + 0xc);
      temp_v10 = FUN_001834a4(0x12,0x11e);
      temp_v10 = (int)((int)**(short **)(temp_v10 + 0xc) -
                    (((int)temp_v2 + (int)temp_v1) * (unsigned int)temp_v0 - (int)temp_v2)) / 2;
    }
    temp_v9 = 0;
    temp_v14 = FUN_003a6f84(0);
    temp_v15 = (unsigned short *)(temp_v7 + 0x19d0);
    temp_v3 = 0;
    do {
      puVar9 = (unsigned short *)(temp_v7 + 0x1390);
      if (*(char *)(temp_v7 + 0x2013) != '\0') {
        puVar9 = temp_v15;
      }
      if (-1 < *(int *)(puVar9 + temp_v3 * 4 + 0x2dc)) {
        temp_v8 = temp_v12[0] + temp_v13;
        temp_v5 = ((int)**(short **)(temp_v4 + 0xc) + (int)temp_v1) * temp_v9 + temp_v11 + temp_v10;
        if ((*(char *)(temp_v7 + 0x2017) != '\x0e') &&
           (((*(char *)(temp_v7 + 0x2017) != '\a' || (temp_v6 = FUN_0026264c(*puVar9), temp_v6 != 0)) &&
            (*(char *)(temp_v7 + 0x2017) != '\x10')))) {
          FUN_003a6c64(*(unsigned int *)(puVar9 + temp_v3 * 4 + 0x2dc) & 0xff,
                       (int)*(char *)(puVar9 + temp_v3 * 4 + 0x2de),temp_v5,temp_v8,0xdf);
        }
        else {
          FUN_003a6c64(temp_v14 & 0xff,(int)*(char *)(puVar9 + temp_v3 * 4 + 0x2de),temp_v5,temp_v8,0xdf)
          ;
        }
        temp_v9 = temp_v9 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0xc);
    if (temp_v9 < 1) {
      FUN_001835b4(2,0x12,0x11f,temp_v11,temp_v12[0],0xdd);
      FUN_001835b4(2,0x12,0x120,temp_v11,temp_v12[0],0xdd);
      FUN_001835b4(2,0x12,0x121,temp_v11,temp_v12[0],0xdd);
      temp_v7 = FUN_001834a4(0x12,0x122);
      VectorSignedToFloat(temp_v12[0] + *(short *)(temp_v7 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v11 + *(short *)(temp_v7 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,&LAB_0022ecd0);
    }
  }
  return;
}

} /* extern "C" */
