/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002945a4` (_code @ 0x2945a4, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002945a4_arg2 fn_002945a4_arg2;
struct fn_002945a4_arg2 {
    unsigned char pad_0x0[0x52];
    byte field_0x52; /* +0x52 */
    unsigned char pad_0x53[0x1d];
    ushort field_0x70; /* +0x70 */
    ushort field_0x72; /* +0x72 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern unsigned char LAB_0029476c; /* 0x29476c */
extern unsigned char LAB_00294788; /* 0x294788 */
extern unsigned char LAB_002947a4; /* 0x2947a4 */

/* Supplied declaration required: FUN_0023cef0. */
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_002b45e8. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_002945a4(unsigned int param_1,int param_2,fn_002945a4_arg2 *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v0 = FUN_002b45e8(param_3);
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (*(char *)(temp_v0 + 0x52) != '\x06') {
          return;
        }
        temp_v1 = FUN_0023cef0(param_1,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0
                            );
        FUN_002be624(temp_v3,&LAB_002947a4,*(unsigned short *)(temp_v0 + 0x70),
                     *(unsigned short *)(temp_v0 + 0x72),temp_v1);
      }
    }
    else {
      if (*(char *)(temp_v0 + 0x52) != '\x05') {
        return;
      }
      FUN_002be624(temp_v3,&LAB_00294788,*(unsigned short *)(temp_v0 + 0x70),
                   *(unsigned short *)(temp_v0 + 0x72));
    }
  }
  else {
    if (*(char *)(temp_v0 + 0x52) != '\x04') {
      return;
    }
    temp_v1 = FUN_0023cef0(param_1,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
    FUN_002be624(temp_v3,&LAB_0029476c,*(unsigned short *)(temp_v0 + 0x70),
                 *(unsigned short *)(temp_v0 + 0x72),temp_v1);
  }
  FUN_0023f2e4(param_1,param_2,temp_v3,param_4);
  if (param_2 == 1) {
    temp_v0 = FUN_002b63ac();
    temp_v2 = FUN_002b45e8(*(unsigned short *)(temp_v0 + 6));
    temp_v1 = FUN_0023cef0(param_1,0,*(unsigned short *)(temp_v2 + 0x70),*(unsigned short *)(temp_v2 + 0x72),
                         param_3);
    FUN_002be624(temp_v3,&LAB_0029476c,*(unsigned short *)(temp_v2 + 0x70),
                 *(unsigned short *)(temp_v2 + 0x72),temp_v1);
    FUN_0023f2e4(param_1,0,temp_v3,param_4);
    temp_v0 = FUN_002b45e8(*(unsigned short *)(temp_v0 + 10));
    temp_v1 = FUN_0023cef0(param_1,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
                         param_3);
    FUN_002be624(temp_v3,&LAB_002947a4,*(unsigned short *)(temp_v0 + 0x70),
                 *(unsigned short *)(temp_v0 + 0x72),temp_v1);
    FUN_0023f2e4(param_1,2,temp_v3,param_4);
  }
  return;
}
