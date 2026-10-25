/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dddd8` (_code @ 0x1dddd8, 0x568 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int uiSlotEntryDraw(...);
int FUN_001a7810(...);
int FUN_001af670(...);
int dataTable24Sub0GetRecord(...);
int FUN_0029efc0(...);
int FUN_002bdf94(...);
int FUN_002be5a4(int, unsigned int, unsigned char [72]);
int textFormatBuffer(unsigned char [72], unsigned char *);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_3_stack;

extern unsigned char LAB_001de0f0; /* 0x1de0f0 */
extern unsigned char LAB_001de11c; /* 0x1de11c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: uiSlotEntryDraw. */
/* Supplied declaration required: FUN_001a7810. */
/* Supplied declaration required: FUN_001af670. */
/* Supplied declaration required: dataTable24Sub0GetRecord. */
extern int uniteGetWork(void);
extern int FUN_0029d644(int);
extern unsigned int FUN_0029dde0(void);
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */


void FUN_001dddd8(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  int temp_v12;
  unsigned char temp_v13 [72];
  int iStack_30;
  int iStack_2c;
  int temp_v14;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v14 = param_3;
  temp_v0 = uniteGetWork();
  temp_v1 = FUN_002a0d0c();
  if (temp_v0 != 0) {
    temp_v11 = 0;
    temp_v12 = 0;
    FUN_002bf380(2,0x24,1,param_1,param_2,0x65);
    FUN_002bf288(2,0x24,0x8a,param_1,param_2,0x65);
    FUN_002bf288(2,0x24,0x4a,param_1,param_2,0x65);
    temp_v2 = FUN_002bf4f8(0x24,0x49);
    textFormatBuffer(temp_v13,&LAB_001de0f0);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v13);
    temp_v2 = FUN_002bf4f8(0x24,0x4c);
    temp_v3 = FUN_0029dde0();
    FUN_002bdf94(0,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1,2,0x65,
                 &LAB_001de11c,temp_v3);
    temp_v2 = temp_v0 + 0x4e8;
    temp_v4 = FUN_0029efc0();
    temp_v5 = FUN_0029d644(temp_v2);
    temp_v10 = 0;
    if (temp_v10 < temp_v5) {
      do {
        temp_v6 = FUN_0029efa8(temp_v2);
        if (temp_v6 != temp_v10) {
          efctSetSpeed();
          temp_v6 = temp_v4 + temp_v10;
          temp_v7 = dataTable24Sub0GetRecord();
          temp_v8 = FUN_002bf4f8(0x24,temp_v10 + 0xa9);
          if (temp_v14 != 0) {
            if (temp_v14 != 1) {
              if (temp_v14 == 2) {
                if ((4 >= *(int *)(temp_v0 + 0x3fc)) &&
                   (temp_v11 = FUN_0029efa8(temp_v2), temp_v10 > temp_v11)) {
                  temp_v11 = FUN_0029efa8(temp_v2);
                  temp_v9 = FUN_002bf4f8(0x24,temp_v11 + 0xa9);
                  temp_v11 = ((int)*(short *)(temp_v9 + 8) - (int)*(short *)(temp_v8 + 8)) * 0x1000;
                  temp_v11 = (int)*(short *)(temp_v8 + 8) +
                           (((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) *
                            *(int *)(temp_v0 + 0x3fc) >> 0xc);
                  temp_v9 = ((int)*(short *)(temp_v9 + 10) - (int)*(short *)(temp_v8 + 10)) * 0x1000;
                  temp_v12 = (int)*(short *)(temp_v8 + 10) +
                             (((int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2) *
                              *(int *)(temp_v0 + 0x3fc) >> 0xc);
                }
                else {
                  temp_v11 = (int)*(short *)(temp_v8 + 8);
                  temp_v12 = (int)*(short *)(temp_v8 + 10);
                }
              }
            }
            else if ((*(int *)(temp_v0 + 0x3fc) < 5) &&
                    (temp_v11 = FUN_0029efa8(temp_v2), temp_v11 < temp_v10)) {
              temp_v11 = FUN_0029efa8(temp_v2);
              temp_v9 = FUN_002bf4f8(0x24,temp_v11 + 0xa9);
              temp_v11 = ((int)*(short *)(temp_v8 + 8) - (int)*(short *)(temp_v9 + 8)) * 0x1000;
              temp_v11 = (int)*(short *)(temp_v9 + 8) +
                       (((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) *
                        *(int *)(temp_v0 + 0x3fc) >> 0xc);
              temp_v8 = ((int)*(short *)(temp_v8 + 10) - (int)*(short *)(temp_v9 + 10)) * 0x1000;
              temp_v12 = (int)*(short *)(temp_v9 + 10) +
                         (((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1e)) >> 2) *
                          *(int *)(temp_v0 + 0x3fc) >> 0xc);
            }
            else {
              temp_v11 = (int)*(short *)(temp_v8 + 8);
              temp_v12 = (int)*(short *)(temp_v8 + 10);
            }
          }
          else {
            temp_v12 = (int)*(short *)(temp_v8 + 10);
            temp_v11 = (int)*(short *)(temp_v8 + 8);
          }
          if (temp_v7 != 0) {
            if (temp_v7 != 1) {
              if (temp_v7 == 2) {
                temp_v8 = 0;
                temp_v7 = 0;
                if (temp_v7 < temp_v6) {
                  do {
                    temp_v9 = dataTable24Sub0GetRecord(temp_v7);
                    if (temp_v9 == 2) {
                      temp_v8 = temp_v8 + 1;
                    }
                    temp_v7 = temp_v7 + 1;
                  } while (temp_v7 < temp_v6);
                }
                temp_v8 = temp_v1 + 0x1c + temp_v8;
                FUN_001a7810(temp_v0,temp_v6,param_1 + temp_v11,param_2 + temp_v12,0,
                             (int)*(char *)(temp_v8 + 0x10));
                if (*(char *)(temp_v8 + 0x10) == '\0') break;
              }
            }
            else {
              FUN_001af670(temp_v0,temp_v6,param_1 + temp_v11,param_2 + temp_v12,0);
            }
          }
          else {
            uiSlotEntryDraw(temp_v0,temp_v6,param_1 + temp_v11,param_2 + temp_v12,0);
          }
          efctSetSpeed();
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < temp_v5);
    }
    temp_v4 = FUN_0029efc0(temp_v2);
    temp_v5 = FUN_0029efa8(temp_v2);
    temp_v4 = temp_v4 + temp_v5;
    temp_v5 = dataTable24Sub0GetRecord(temp_v4);
    temp_v2 = FUN_0029efa8(temp_v2);
    temp_v2 = FUN_002bf4f8(0x24,temp_v2 + 0xa9);
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 == 2) {
          temp_v10 = 0;
          temp_v5 = 0;
          if (temp_v5 < temp_v4) {
            do {
              temp_v11 = dataTable24Sub0GetRecord(temp_v5);
              if (temp_v11 == 2) {
                temp_v10 = temp_v10 + 1;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < temp_v4);
          }
          FUN_001a7810(temp_v0,temp_v4,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                       1,(int)*(char *)(temp_v1 + 0x1c + temp_v10 + 0x10));
        }
      }
      else {
        FUN_001af670(temp_v0,temp_v4,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1)
        ;
      }
    }
    else {
      uiSlotEntryDraw(temp_v0,temp_v4,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,1);
    }
    efctSetSpeed();
  }
  return;
}

} /* extern "C" */
