/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040b27c` (_code @ 0x40b27c, 0x4b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00192608(void);
int FUN_003e573c(...);
int FUN_0040b11c(...);

typedef struct fn_0040b27c_arg2 fn_0040b27c_arg2;
struct fn_0040b27c_arg2 {
    unsigned char pad_0x0[0x22];
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x1d];
    ushort field_0x40; /* +0x40 */
    ushort field_0x42; /* +0x42 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_0040b674; /* 0x40b674 */
extern unsigned char LAB_0040b690; /* 0x40b690 */
extern unsigned char LAB_0040b6c8; /* 0x40b6c8 */

/* Supplied declaration required: textFormatBuffer. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_003e573c. */
/* Supplied declaration required: FUN_0040b11c. */


/* WARNING: Removing unreachable block (ram,0x0040b6e4) */
/* WARNING: Removing unreachable block (ram,0x0040b324) */
/* WARNING: Removing unreachable block (ram,0x0040b448) */
/* WARNING: Removing unreachable block (ram,0x0040b3c4) */
/* WARNING: Removing unreachable block (ram,0x0040b5c8) */
/* WARNING: Removing unreachable block (ram,0x0040b57c) */

void FUN_0040b27c(unsigned int param_1,int param_2,fn_0040b27c_arg2 *param_3,unsigned int param_4)

{
/* irregular: 10 native warning(s); review required */
  fn_0040b27c_arg2 *pfVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  
  pfVar1 = param_3;
  FUN_00192608();
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (pfVar1->field_0x22 != 6) {
          return;
        }
        temp_v0 = FUN_0040b11c(param_1,2,pfVar1->field_0x40,pfVar1->field_0x42,0);
        textFormatBuffer(temp_v3,&LAB_0040b6c8,pfVar1->field_0x40,pfVar1->field_0x42,temp_v0);
      }
    }
    else {
      if (pfVar1->field_0x22 != 5) {
        return;
      }
      temp_v0 = FUN_0040b11c(param_1,1,pfVar1->field_0x40,pfVar1->field_0x42,0);
      textFormatBuffer(temp_v3,&LAB_0040b690,pfVar1->field_0x40,pfVar1->field_0x42,temp_v0);
    }
  }
  else {
    if (pfVar1->field_0x22 != 4) {
      return;
    }
    temp_v0 = FUN_0040b11c(param_1,0,pfVar1->field_0x40,pfVar1->field_0x42,0);
    textFormatBuffer(temp_v3,&LAB_0040b674,pfVar1->field_0x40,pfVar1->field_0x42,temp_v0);
  }
  FUN_003e573c(param_1,param_2,temp_v3,param_4);
  if (param_2 != 0) {
    if (param_2 == 1) {
      temp_v1 = gameGetPlayerData();
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 6);
      FUN_00192608();
      temp_v0 = FUN_0040b11c(param_1,0,*(unsigned short *)(temp_v2 + 0x40),*(unsigned short *)(temp_v2 + 0x42),
                           param_3);
      textFormatBuffer(temp_v3,&LAB_0040b674,*(unsigned short *)(temp_v2 + 0x40),
                   *(unsigned short *)(temp_v2 + 0x42),temp_v0);
      FUN_003e573c(param_1,0,temp_v3,param_4);
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 10);
      FUN_00192608();
      temp_v0 = FUN_0040b11c(param_1,2,*(unsigned short *)(temp_v2 + 0x40),*(unsigned short *)(temp_v2 + 0x42),
                           param_3);
      textFormatBuffer(temp_v3,&LAB_0040b6c8,*(unsigned short *)(temp_v2 + 0x40),
                   *(unsigned short *)(temp_v2 + 0x42),temp_v0);
      FUN_003e573c(param_1,2,temp_v3,param_4);
      return;
    }
  }
  else {
    temp_v1 = gameGetPlayerData();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
    FUN_00192608();
    temp_v0 = FUN_0040b11c(param_1,1,*(unsigned short *)(temp_v2 + 0x40),*(unsigned short *)(temp_v2 + 0x42),
                         param_3);
    textFormatBuffer(temp_v3,&LAB_0040b690,*(unsigned short *)(temp_v2 + 0x40),
                 *(unsigned short *)(temp_v2 + 0x42),temp_v0);
    FUN_003e573c(param_1,1,temp_v3,param_4);
  }
  return;
}

} /* extern "C" */
