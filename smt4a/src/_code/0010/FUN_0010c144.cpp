/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c144` (_code @ 0x10c144, 0x132 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int streamReadU8(...);
int FUN_002f5d1e(int);

/* stack frame of param_4: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int onlineBufferGetData(unsigned int);
/* Supplied declaration required: streamReadU8. */
extern int streamSkip(int);
extern int streamReadU32(int, unsigned int *);
extern int streamReadU16(int, unsigned int *);
extern int streamReadBytes(int, int, unsigned int);
extern int _ZN9Obj55933cC1Et(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f5d1e. */
extern int FUN_002f5d2a(int, int, unsigned int);


unsigned int FUN_0010c144(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [12];
  
  if (param_4 < 0x34) {
    temp_v5 = *(int *)(param_2 + 0xc);
    temp_v2 = temp_v5 + param_4;
    if (temp_v2 <= *(unsigned int *)(*(int *)(param_2 + 8) + 0x10)) {
      temp_v7 = param_3 + 0x50;
      do {
        while( 1 ) {
          if (temp_v2 <= *(unsigned int *)(param_2 + 0xc)) {
            FUN_002f5d1e(param_3 + 0x90);
            temp_v0 = onlineBufferGetData(*(unsigned int *)(param_2 + 8));
            temp_v0 = FUN_002f5d2a(param_3 + 0x90,temp_v0 + temp_v5,param_4);
            if (temp_v0 != 0) {
              return 1;
            }
            return 0;
          }
          temp_v3[0] = 0;
          temp_v4[0] = 0;
          temp_v0 = streamReadU8(param_2,temp_v3);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v0 = streamReadU8(param_2,temp_v4);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v1 = (unsigned int)temp_v4[0];
          if (temp_v2 < *(int *)(param_2 + 0xc) + temp_v1) {
            return 0;
          }
          if (temp_v3[0] != 3) break;
          if (temp_v1 != 2) {
            return 0;
          }
          temp_v0 = streamReadU16(param_2,&temp_v6);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v0 = _ZN9Obj55933cC1Et(temp_v8,temp_v6 & 0xffff);
          *(unsigned short *)(param_3 + 0x4c) = *(unsigned short *)(temp_v0 + 4);
        }
        if (temp_v3[0] < 4) {
          if (temp_v3[0] == 0) {
            if (temp_v1 != 4) {
              return 0;
            }
            temp_v0 = streamReadU32(param_2,&temp_v6);
            if (temp_v0 == 0) {
              return 0;
            }
            *(unsigned int *)(param_3 + 0x8c) = temp_v6;
            continue;
          }
          if (temp_v3[0] == 1) {
            if (temp_v1 != 0x10) {
              return 0;
            }
            temp_v0 = streamReadBytes(param_2,temp_v7,0x10);
            if (temp_v0 == 0) {
              return 0;
            }
            *(unsigned int *)(temp_v7 + 0x10) = 0x10;
            continue;
          }
          if (temp_v3[0] == 2) {
            if (temp_v1 != 1) {
              return 0;
            }
            temp_v0 = streamReadU8(param_2,&temp_v6);
            if (temp_v0 == 0) {
              return 0;
            }
            *(unsigned char *)(param_3 + 100) = (unsigned char)temp_v6;
            continue;
          }
        }
        else if (temp_v3[0] == 4) {
          if (temp_v1 != 1) {
            return 0;
          }
          temp_v0 = streamReadU8(param_2,&temp_v6);
          if (temp_v0 == 0) {
            return 0;
          }
          *(unsigned char *)(param_3 + 0x67) = (unsigned char)temp_v6;
          continue;
        }
        temp_v0 = streamSkip(param_2);
        if (temp_v0 == 0) {
          return 0;
        }
      } while( 1 );
    }
  }
  return 0;
}

} /* extern "C" */
