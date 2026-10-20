/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a07a0` (_code @ 0x3a07a0, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bcc(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int DAT_0044e010; /* 0x44e010 */
extern int DAT_0044e014; /* 0x44e014 */
extern int DAT_0044e018; /* 0x44e018 */
extern int DAT_0044e01c; /* 0x44e01c */

/* Supplied declaration required: FUN_00231bcc. */
extern int gameFlagIsSet(unsigned int);


void FUN_003a07a0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6 [18];
  
  if ((((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x10) != 1)) || (param_2 != 7)) &&
     ((*(int *)(param_1 + 0x860) != 0 ||
      ((((*(char *)(param_1 + 0x14) == '\0' && (*(int *)(param_1 + 0x18) != 8)) &&
        (temp_v0 = gameFlagIsSet(0x410), temp_v0 != 0)) || (*(int *)(param_1 + 0x10) == 1)))))) {
    temp_v5 = *(unsigned int *)(param_1 + 0x37c);
    FUN_00231bcc(param_1 + 0x380,0x65,0,0,temp_v5,1);
    FUN_00231bcc(param_1 + 0x380,0x66,0,0,temp_v5,1);
    if (*(int *)(param_1 + 0x10) != 1) {
      temp_v0 = *(int *)(param_1 + 0x860) * 8;
      temp_v2 = *(int *)(temp_v0 + 0x44df9c);
      temp_v4 = *(int *)(temp_v0 + 0x44df98);
    }
    else {
      temp_v0 = *(int *)(param_1 + 0x860) * 8;
      temp_v3 = *(int *)(temp_v0 + 0x44dfd4);
      temp_v0 = *(int *)(temp_v0 + 0x44dfd0);
      if (((*(int *)(param_1 + 0x860) != 0) ||
          (((temp_v2 = DAT_0044e014, temp_v4 = DAT_0044e010, *(char *)(param_1 + 0x14) == '\0' &&
            (*(int *)(param_1 + 0x18) != 8)) &&
           (temp_v1 = gameFlagIsSet(0x410), temp_v2 = DAT_0044e014, temp_v4 = DAT_0044e010, temp_v1 != 0))))
         && ((temp_v2 = temp_v3, temp_v4 = temp_v0, *(int *)(param_1 + 0x860) == 3 &&
             (((*(char *)(param_1 + 0x14) != '\0' || (*(int *)(param_1 + 0x18) == 8)) ||
              (temp_v0 = gameFlagIsSet(0x410), temp_v0 == 0)))))) {
        temp_v2 = DAT_0044e01c;
        temp_v4 = DAT_0044e018;
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
    FUN_00231bcc(param_1 + 0x380,temp_v6[temp_v4],0,0,temp_v5,1);
    FUN_00231bcc(param_1 + 0x380,temp_v6[temp_v2 + 8],0,0,temp_v5,1);
  }
  return;
}

} /* extern "C" */
