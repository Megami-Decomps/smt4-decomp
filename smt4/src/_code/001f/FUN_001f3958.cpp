/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3958` (_code @ 0x1f3958, 0x758 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_00288e68(void);
int FUN_0028d1f4(...);
int FUN_0028f694(...);
int FUN_0028f870(...);
int FUN_002b6c34(...);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_3_stack;

extern unsigned char LAB_001f3d90; /* 0x1f3d90 */
extern unsigned char LAB_001f40c0; /* 0x1f40c0 */
extern unsigned char LAB_001f40f8; /* 0x1f40f8 */
extern int g_camp; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int statusGetAvailableChoiceCount(void);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_0028d1f4. */
/* Supplied declaration required: FUN_0028f694. */
/* Supplied declaration required: FUN_0028f870. */
extern int FUN_00298848(unsigned int, unsigned int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_002b6c34. */
extern int aocIndexValueOrDefault(unsigned int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_001f3958(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [64];
  unsigned int temp_v10;
  int iStack_30;
  int iStack_2c;
  int temp_v11;
  
  temp_v5 = g_camp;
  temp_v0 = g_camp + 0x240;
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v11 = param_3;
  FUN_002bf380(2,0x1d,0xb,param_1,param_2,0x65);
  FUN_002bf288(2,0x1d,0x44e,param_1,param_2,0x6a);
  temp_v6 = 0;
  do {
    temp_v1 = statusGetAvailableChoiceCount();
    if (temp_v6 >= temp_v1) {
      FUN_002bf288(2,0x1d,temp_v6 + 0x5a8,param_1,param_2,0x6a);
    }
    else {
      temp_v1 = FUN_0029efc0(temp_v0);
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + (temp_v1 + temp_v6) * 2 + 0x1db4);
      temp_v1 = FUN_002bf4f8(0x1d,temp_v6 + 0x40d);
      FUN_002bf288(2,0x1d,0x44f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf288(2,0x1d,0x450,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf288(2,0x1d,0x451,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf288(2,0x1d,0x452,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6f);
      if ((temp_v7 != 0) && (FUN_00288e68(), temp_v10 = temp_v7, temp_v7 != 0)) {
        temp_v2 = FUN_002bf4f8(0x1d,0x454);
        temp_v3 = aocIndexValueOrDefault(temp_v10);
        if (temp_v3 != 0) {
          temp_v8 = 0xff;
          temp_v4 = FUN_00298848(temp_v10,0xffffffff);
          if (temp_v4 != 0) {
            temp_v4 = FUN_0028d1f4(temp_v10);
            piVar7 = (int *)gameGetSlotTable();
            if (*piVar7 < temp_v4) {
              temp_v8 = 0x5a5a5aff;
            }
          }
          else {
            temp_v8 = 0x5a5a5aff;
          }
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v8,temp_v3,(int)*(short *)(temp_v2 + 8));
        }
        temp_v2 = FUN_002bf4f8(0x1d,0x45c);
        temp_v8 = FUN_0028d1f4(temp_v10);
        textFormatBuffer(temp_v9,&LAB_001f3d90,temp_v8);
        FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,8,0x6f,
                     temp_v9);
        temp_v2 = FUN_002bf4f8(0x1d,0x453);
        FUN_002b6c34((int)(short)temp_v10,
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x6f,0,0);
      }
      else {
        temp_v2 = FUN_002bf4f8(0x1d,0x454);
        textFormatBuffer(temp_v9,&LAB_001f40c0);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0x5a5a5aff,temp_v9,(int)*(short *)(temp_v1 + 8));
        temp_v2 = FUN_002bf4f8(0x1d,0x45c);
        textFormatBuffer(temp_v9,&LAB_001f40f8);
        FUN_002bdf94(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0x6f,
                     temp_v9);
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_0028f870(temp_v0,param_1,param_2,1);
  if (temp_v11 == 0) {
    return;
  }
  temp_v6 = FUN_0029efc0(temp_v0);
  temp_v1 = FUN_0029efa8(temp_v0);
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + (temp_v1 + temp_v6) * 2 + 0x1db4);
  temp_v6 = FUN_0029efa8(temp_v0);
  temp_v6 = FUN_002bf4f8(0x1d,temp_v6 + 0x42e);
  temp_v0 = FUN_0029efa8(temp_v0);
  FUN_0028f694(*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
               (int)*(short *)(temp_v5 + temp_v0 * 2 + 0xe0c));
  if ((temp_v7 == 0) || (FUN_00288e68(), temp_v7 == 0)) {
    temp_v5 = FUN_002bf4f8(0x1d,0x460);
    textFormatBuffer(temp_v9,&LAB_001f40c0);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0x5a5a5aff,temp_v9,(int)*(short *)(temp_v5 + 8));
    FUN_002bf288(2,0x1d,0x45e,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83)
    ;
    temp_v5 = FUN_002bf4f8(0x1d,0x468);
    textFormatBuffer(temp_v9,&LAB_001f40f8);
    FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,1,8,0x83,
                 temp_v9);
    return;
  }
  temp_v5 = FUN_002bf4f8(0x1d,0x460);
  temp_v0 = aocIndexValueOrDefault(temp_v7);
  if (temp_v0 != 0) {
    temp_v8 = 0xffffffff;
    temp_v1 = FUN_00298848(temp_v7,0xffffffff);
    if (temp_v1 != 0) {
      temp_v1 = FUN_0028d1f4(temp_v7);
      piVar7 = (int *)gameGetSlotTable();
      if (*piVar7 < temp_v1) {
        temp_v8 = 0x5a5a5aff;
      }
    }
    else {
      temp_v8 = 0x5a5a5aff;
    }
    VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v8,temp_v0,(int)*(short *)(temp_v5 + 8));
  }
  FUN_002bf288(2,0x1d,0x45e,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83);
  temp_v5 = FUN_002bf4f8(0x1d,0x468);
  temp_v8 = FUN_0028d1f4(temp_v7);
  textFormatBuffer(temp_v9,&LAB_001f3d90,temp_v8);
  FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
               (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,1,8,0x83,
               temp_v9);
  FUN_002bf288(2,0x1d,0x45d,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83);
  temp_v5 = FUN_002bf4f8(0x1d,0x45f);
  FUN_002b6c34((int)(short)temp_v7,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
               (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,0x88,0,0);
  return;
}

} /* extern "C" */
