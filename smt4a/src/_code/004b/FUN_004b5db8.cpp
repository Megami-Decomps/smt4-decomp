/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b5db8` (_code @ 0x4b5db8, 0x5c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int asdTMTexTableEntryAt(...);
int drawSetColorFromRGBA8(...);
int FUN_00185dd4(...);
int FUN_003e503c(void);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_10: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_10_stack;

extern unsigned char LAB_004b6388; /* 0x4b6388 */
extern unsigned int DAT_00588c4c; /* 0x588c4c */
extern int DAT_00588c50; /* 0x588c50 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_003e503c. */


void FUN_004b5db8(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9,unsigned int param_10)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  unsigned long long temp_v5;
  
  param_3 = param_3 & 0xffff;
  FUN_003e503c();
  temp_v5 = asdTMTexTableEntryAt(0x1d,param_4 + 0x152);
  temp_v1 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
  temp_v0 = (int)temp_v5;
  switch(param_2) {
  case 0:
    FUN_001835b4(2,0x1d,0x56,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x65);
    break;
  case 1:
    temp_v4 = param_9 == 0;
    temp_v2 = param_9;
    if (param_9 < 1) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_3 + 100);
      temp_v2 = temp_v1 - param_10;
      temp_v4 = temp_v1 == param_10;
    }
    if (!(temp_v4 || temp_v2 < 0 != (param_9 < 1 && SBORROW4(temp_v1,param_10)))) {
      if ((int)((unsigned int)*(unsigned short *)(param_3 + 100) + param_9) >= 100) {
        FUN_001835b4(2,0x1d,0x58,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                     0x6a);
        FUN_001835b4(2,0x1d,0x174,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                     0x6f);
        return;
      }
      if (param_9 < 1) goto LAB_004b5ef4;
    }
    else {
LAB_004b5ef4:
      if ((int)(unsigned int)*(unsigned short *)(param_3 + 100) <= (int)param_10) {
        if ((int)((unsigned int)*(unsigned short *)(param_3 + 100) + param_9) < 100) {
          FUN_001835b4(2,0x1d,0x57,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                       0x6a);
          FUN_001835b4(2,0x1d,0x59,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                       0x6f);
          return;
        }
        FUN_001835b4(2,0x1d,0x57,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                     0x6a);
        FUN_001835b4(2,0x1d,0x173,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                     0x6f);
        return;
      }
    }
    if ((int)((unsigned int)*(unsigned short *)(param_3 + 100) + param_9) < 100) {
      FUN_001835b4(2,0x1d,0x58,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6a
                  );
      FUN_001835b4(2,0x1d,0x5a,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6f
                  );
      return;
    }
    FUN_001835b4(2,0x1d,0x57,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6a);
    FUN_001835b4(2,0x1d,0x173,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6f)
    ;
    return;
  case 2:
    FUN_0018152c((int)*(short *)(param_3 + 0x62),
                 (int)*(short *)(temp_v0 + 8) + (int)*(short *)(DAT_00588c4c + 8) + param_5,
                 (int)*(short *)(DAT_00588c4c + 10) + (int)*(short *)(temp_v0 + 10) + param_6,0x6a,0);
    return;
  case 3:
    FUN_001835b4(2,0x1d,0x5b,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6f);
    FUN_001835b4(2,0x1d,0x5c,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x6f);
    FUN_001835b4(2,0x1d,0x5d,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x74);
    FUN_001835b4(2,0x1d,0x5e,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x79);
    FUN_001835b4(2,0x1d,0x81,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x7e);
    FUN_001835b4(2,0x1d,0x14f,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x65)
    ;
    FUN_001835b4(2,0x1d,0x150,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x65)
    ;
    FUN_001835b4(2,0x1d,0x151,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x65)
    ;
    return;
  case 4:
    temp_v3 = 2;
    if ((int)((unsigned int)*(unsigned short *)(param_3 + 100) + param_9) >= 100) {
      DAT_00588c4c = asdTMTexTableEntryAt(0x1d,0x177);
      temp_v3 = 3;
    }
    else {
      DAT_00588c4c = asdTMTexTableEntryAt(0x1d,0x66);
    }
    temp_v4 = param_9 == 0;
    temp_v2 = param_9;
    temp_v1 = DAT_00588c4c;
    if (param_9 < 1) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_3 + 100);
      temp_v2 = temp_v1 - param_10;
      temp_v4 = temp_v1 == param_10;
    }
    if (temp_v4 || temp_v2 < 0 != (param_9 < 1 && SBORROW4(temp_v1,param_10))) {
      temp_v2 = -1;
    }
    else {
      temp_v2 = 0xff;
    }
    if (DAT_00588c50 != temp_v2) {
      drawSetColorFromRGBA8(temp_v2);
      DAT_00588c50 = temp_v2;
    }
    FUN_00180310(0,(int)*(short *)(DAT_00588c4c + 8) + (int)*(short *)(temp_v0 + 8) + param_5,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(DAT_00588c4c + 10) + param_6,1,temp_v3,
                 0x7e,&LAB_004b6388,(unsigned int)*(unsigned short *)(param_3 + 100) + param_9);
    return;
  case 6:
    if (param_8 == 0) {
      FUN_00185dd4(2,0x1d,0x5f,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                   param_7,(int)*(short *)(*(int *)(DAT_00588c4c + 0xc) + 2),0x83);
      return;
    }
    FUN_001835b4(2,0x1d,0x60,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x83);
    return;
  case 7:
    if (param_8 != 0) {
      if (param_9 < 8) {
        VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
        efctSetSpeed();
      }
      FUN_001835b4(2,0x1d,0x61,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x88
                  );
      FUN_001835b4(2,0x1d,0x61,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,0x89
                  );
      return;
    }
  }
  return;
}

} /* extern "C" */
