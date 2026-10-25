/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d938` (_code @ 0x49d938, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textDrawString(...);
int efctSetSpeed(void);
int asdTMTexTableEntryAt(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
extern int recordGetModeForId(int);
extern int flagsAtGetBit1(unsigned short);


void FUN_0049d938(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  
  temp_v7 = 0;
  do {
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + (*(int *)(param_1 + 0x1f0) + temp_v7) * 2 + 0x18);
    if (temp_v2 == 0) {
      return;
    }
    puVar8 = (unsigned short *)(*(int *)(param_1 + 0x10) + temp_v2 * 0x44);
    if (*(int *)(param_1 + 500) == temp_v7) {
      temp_v3 = asdTMTexTableEntryAt(0x33,temp_v7 + 0x71);
      temp_v9 = 0x9fe7ffff;
      temp_v8 = *(short *)(temp_v3 + 8) + param_2;
      temp_v6 = *(short *)(temp_v3 + 10) + param_3;
      temp_v3 = recordGetModeForId((int)*(short *)(param_1 + temp_v7 * 2 + 0x1fc));
      if ((temp_v3 == 1 || temp_v3 == 2) || temp_v3 == 6) {
        temp_v9 = 0xf5ff9fff;
      }
      efctSetSpeed();
      temp_v4 = 0;
      do {
        FUN_001835b4(2,0x33,temp_v4 + 0x67,temp_v8,temp_v6,0xab);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 3);
      efctSetSpeed();
      FUN_001835b4(2,0x33,0x6a,temp_v8,temp_v6,0xab);
      if (!((temp_v3 != 1 && temp_v3 != 2) && temp_v3 != 6)) {
        FUN_001835b4(2,0x33,0x81,temp_v8,temp_v6,0xac);
        FUN_001835b4(2,0x33,0x82,temp_v8,temp_v6,0xac);
        FUN_001835b4(2,0x33,0x83,temp_v8,temp_v6,0xac);
        temp_v5 = 0x84;
      }
      else {
        FUN_001835b4(2,0x33,0x6b,temp_v8,temp_v6,0xac);
        FUN_001835b4(2,0x33,0x6c,temp_v8,temp_v6,0xac);
        FUN_001835b4(2,0x33,0x6d,temp_v8,temp_v6,0xac);
        temp_v5 = 0x80;
      }
      efctSetSpeed();
      FUN_001835b4(2,0x33,temp_v5,temp_v8,temp_v6,0xac);
      efctSetSpeed();
      efctSetSpeed();
      FUN_001835b4(2,0x33,0x6e,temp_v8,temp_v6,0xb5);
      temp_v3 = asdTMTexTableEntryAt(0x33,0x6f);
      temp_v4 = *(short *)(temp_v3 + 10) + temp_v6;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(3,temp_v9,puVar8 + 2,temp_v4);
      temp_v3 = flagsAtGetBit1(*puVar8);
      if (temp_v3 != 0) {
        temp_v3 = asdTMTexTableEntryAt(0x33,0x70);
        temp_v0 = *(short *)(temp_v3 + 8);
        temp_v1 = *(short *)(temp_v3 + 10);
        efctSetSpeed();
        temp_v3 = 0;
        do {
          FUN_001835b4(2,0x33,temp_v3 + 0x7b,temp_v8 + temp_v0,temp_v6 + temp_v1,0xba);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 3);
        efctSetSpeed();
        efctSetSpeed();
      }
    }
    else {
      temp_v3 = asdTMTexTableEntryAt(0x33,temp_v7 + 0x5d);
      temp_v4 = *(short *)(temp_v3 + 8) + param_2;
      temp_v8 = *(short *)(temp_v3 + 10) + param_3;
      efctSetSpeed();
      FUN_001835b4(2,0x33,0x7f,temp_v4,temp_v8,0xa1);
      temp_v3 = asdTMTexTableEntryAt(0x33,0x5a);
      temp_v6 = *(short *)(temp_v3 + 10) + temp_v8;
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xffffffff,puVar8 + 2,temp_v6);
      temp_v3 = flagsAtGetBit1(*puVar8);
      if (temp_v3 != 0) {
        temp_v3 = asdTMTexTableEntryAt(0x33,0x5b);
        temp_v0 = *(short *)(temp_v3 + 8);
        temp_v1 = *(short *)(temp_v3 + 10);
        efctSetSpeed();
        temp_v3 = 0;
        do {
          FUN_001835b4(2,0x33,temp_v3 + 0x7b,temp_v0 + temp_v4,temp_v1 + temp_v8,0xa6);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 3);
        efctSetSpeed();
        efctSetSpeed();
      }
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
