/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494574` (_code @ 0x494574, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int DAT_00588f68; /* 0x588f68 */
extern int DAT_00588f6c; /* 0x588f6c */
extern int DAT_00588f70; /* 0x588f70 */
extern int DAT_00588f74; /* 0x588f74 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0049368c. */


void FUN_00494574(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6 [18];
  
  if ((((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x14) != 1)) || (param_2 != 7)) &&
     (((*(int *)(param_1 + 0xb40) != 0 ||
       ((*(char *)(param_1 + 0x18) == '\0' && (temp_v0 = FUN_0018719c(0x410), temp_v0 != 0)))) ||
      (*(int *)(param_1 + 0x14) == 1)))) {
    temp_v5 = *(unsigned int *)(param_1 + 0x3a0);
    FUN_0049368c(param_1 + 0x3a4,0x65,0,0,temp_v5,1);
    FUN_0049368c(param_1 + 0x3a4,0x66,0,0,temp_v5,1);
    temp_v0 = *(int *)(param_1 + 0xb40);
    if (*(int *)(param_1 + 0x14) != 1) {
      temp_v2 = *(int *)(temp_v0 * 8 + 0x588ef4);
      temp_v0 = *(int *)(temp_v0 * 8 + 0x588ef0);
    }
    else {
      temp_v3 = *(int *)(temp_v0 * 8 + 0x588f2c);
      temp_v4 = *(int *)(temp_v0 * 8 + 0x588f28);
      if (((temp_v0 != 0) ||
          ((temp_v2 = DAT_00588f6c, temp_v0 = DAT_00588f68, *(char *)(param_1 + 0x18) == '\0' &&
           (temp_v1 = FUN_0018719c(0x410), temp_v2 = DAT_00588f6c, temp_v0 = DAT_00588f68, temp_v1 != 0))))
         && ((temp_v2 = temp_v3, temp_v0 = temp_v4, *(int *)(param_1 + 0xb40) == 3 &&
             ((*(char *)(param_1 + 0x18) != '\0' || (temp_v3 = FUN_0018719c(0x410), temp_v3 == 0)))))) {
        temp_v2 = DAT_00588f74;
        temp_v0 = DAT_00588f70;
      }
    }
    temp_v6[0] = 0x67;
    temp_v6[1] = 0x68;
    temp_v6[2] = 0x69;
    temp_v6[3] = 0x6a;
    temp_v6[4] = 0x6b;
    temp_v6[5] = 0x6c;
    temp_v6[6] = 0x6d;
    temp_v6[7] = 0x70;
    temp_v6[8] = 0x72;
    temp_v6[9] = 0x73;
    temp_v6[10] = 0x74;
    temp_v6[0xb] = 0x75;
    temp_v6[0xc] = 0x76;
    temp_v6[0xd] = 0x77;
    temp_v6[0xe] = 0x78;
    temp_v6[0xf] = 0x7b;
    FUN_0049368c(param_1 + 0x3a4,temp_v6[temp_v0],0,0,temp_v5,1);
    FUN_0049368c(param_1 + 0x3a4,temp_v6[temp_v2 + 8],0,0,temp_v5,1);
  }
  return;
}
