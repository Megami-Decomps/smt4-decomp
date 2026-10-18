/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d02bc` (_code @ 0x3d02bc, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */
extern int DAT_0057f57c; /* 0x57f57c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00185dd4. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001879d0. */
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0028520c. */


unsigned int FUN_003d02bc(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int *piVar12;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16 [3];
  
  temp_v8 = DAT_0057f57c;
  if (*(int *)(DAT_0057f57c + 8) != 0) {
    temp_v9 = *(unsigned int *)(DAT_0057f57c + 0x14);
    temp_v0 = FUN_00187180(0x47,0);
    temp_v1 = FUN_00192798();
    temp_v0 = FUN_00192748(temp_v0);
    puVar3 = &temp_v15;
    temp_v15 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v15 + 2)),(short)temp_v9);
    FUN_00100854(puVar3,temp_v1,temp_v0,4,&LAB_002321f8);
    temp_v2 = 0;
    if (puVar3 != (unsigned int *)0x0) {
      temp_v2 = (int)*(short *)((int)puVar3 + 2);
    }
    temp_v10 = -1;
    if (puVar3 == (unsigned int *)0x0) {
      temp_v2 = -1;
    }
    temp_v3 = FUN_001834a4(0x34,temp_v2 * 1000);
    temp_v5 = DAT_0059dbb4;
    temp_v4 = FUN_001692ac(1,0);
    piVar12 = (int *)(temp_v5 + 0x1258);
    temp_v6 = *piVar12;
    temp_v7 = piVar12[temp_v6 + 2];
    *piVar12 = temp_v6 + 1;
    piVar12[temp_v6 + 3] = temp_v4;
    if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v7 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
    temp_v11 = (float)VectorUnsignedToFloat
                              (*(unsigned short *)(temp_v3 + 4) & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorUnsignedToFloat
                              (*(unsigned short *)(temp_v3 + 6) & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = VectorFloatToUnsigned(temp_v11 * *(float *)(temp_v8 + 0x70),3);
    temp_v12 = VectorFloatToUnsigned(temp_v13 * *(float *)(temp_v8 + 0x74),3);
    temp_v5 = FUN_001834a4(0x27,0xd);
    temp_v11 = 0.25f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v3 = (int)*(short *)(temp_v5 + 10) - (temp_v12 >> 1);
    temp_v16[2] = (int)temp_v11 + ((int)*(short *)(temp_v5 + 8) - (temp_v14 >> 1)) +
                  *(int *)(temp_v8 + 0x24);
    FUN_001677c0();
    temp_v5 = (int)(short)*(unsigned int *)(temp_v8 + 0x14);
    FUN_0028520c();
    if (temp_v5 != 0) {
      temp_v16[1] = 0x15;
      temp_v15 = temp_v14;
      temp_v16[0] = temp_v12;
      FUN_00185dd4(2,0x34,temp_v2 * 1000,temp_v16[2],temp_v3);
    }
    if (*(int *)(temp_v8 + 0x18) != 0) {
      temp_v2 = (int)(short)*(int *)(temp_v8 + 0x18);
      FUN_0028520c();
      if (temp_v2 != 0) {
        temp_v1 = *(unsigned int *)(temp_v8 + 0x18);
        temp_v0 = FUN_00187180(0x47,0);
        temp_v15 = FUN_00192798();
        temp_v0 = FUN_00192748(temp_v0);
        puVar3 = temp_v16;
        temp_v16[0] = romwright_piece_2_2(temp_v16[0]._2_2_,(short)temp_v1);
        FUN_00100854(puVar3,temp_v15,temp_v0,4,&LAB_002321f8);
        if (puVar3 != (unsigned int *)0x0) {
          temp_v10 = (int)*(short *)((int)puVar3 + 2);
        }
        FUN_001834a4(0x34,temp_v10 * 1000);
        temp_v2 = *(int *)(temp_v8 + 0x20);
        temp_v8 = temp_v2 - *(int *)(temp_v8 + 0x1c);
        VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001677c0(temp_v2,temp_v8);
        temp_v16[1] = 0x15;
        temp_v15 = temp_v14;
        temp_v16[0] = temp_v12;
        FUN_00185dd4(2,0x34,temp_v10 * 1000,temp_v16[2],temp_v3);
      }
    }
    FUN_001677c0();
    temp_v8 = DAT_0059dbb4;
    piVar12 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v2 = *piVar12;
    temp_v10 = piVar12[temp_v2 + 2];
    *piVar12 = temp_v2 - 1;
    if (*(char *)(temp_v8 + 0x1270) != '\0' || temp_v10 != piVar12[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v8 + 0x1274))();
      *(unsigned char *)(temp_v8 + 0x1270) = 0;
    }
  }
  return 0;
}
