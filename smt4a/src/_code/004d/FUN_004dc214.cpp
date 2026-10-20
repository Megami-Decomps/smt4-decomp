/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc214` (_code @ 0x4dc214, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_004daf18(int, int);

/* stack frame of param_4: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned int sp9C; /* 0x9c: local_9c */
} param_4_stack;

/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(void);
extern int FUN_00239234(unsigned short, unsigned char *);
/* Supplied declaration required: FUN_004daf18. */


unsigned int FUN_004dc214(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short temp_v8;
  unsigned char temp_v9 [54];
  unsigned short temp_v10;
  unsigned int temp_v11;
  int iStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  int temp_v12;
  
  temp_v3 = (unsigned int)*(unsigned char *)(param_1 + param_2);
  temp_v8 = 999;
  temp_v11 = 0;
  if (temp_v3 != 0) {
    temp_v6 = param_1 + param_2 * 4;
    temp_v4 = 0;
    temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(temp_v6 + 0x44) + (temp_v3 * 4 - 2));
    temp_v5 = param_3;
    if (param_3 < temp_v1) {
      temp_v5 = temp_v1;
    }
    iStack_34 = param_1;
    iStack_30 = param_2;
    uStack_2c = param_3;
    temp_v12 = param_4;
    if (temp_v3 != 0) {
      do {
        temp_v7 = temp_v4 * 4 + 2;
        temp_v3 = (unsigned int)*(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v7);
        if ((temp_v3 <= temp_v5) && ((int)(temp_v5 - temp_v3) < (int)temp_v8)) {
          puVar3 = (unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v4 * 4);
          if (temp_v12 != 0) {
            puVar4 = (unsigned short *)(unsigned int)*puVar3;
            FUN_00184310();
            if (((*(unsigned int *)(puVar4 + 0x1a) & 0x1c00000) == 0) &&
               ((puVar4[0x1f] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) {
              temp_v0 = puVar4[0x1e];
              if ((temp_v0 & 1) != 0) {
                if ((temp_v0 & 0xfffe) != 0) {
                  temp_v2 = FUN_00239234(temp_v0 >> 1,temp_v9);
                }
                else {
                  temp_v2 = FUN_00239234(*puVar4,temp_v9);
                }
                if ((temp_v2 != 0) && ((temp_v10 & 0xfc) != 0)) {
                  if ((puVar4[5] & 1) != 0) {
                    temp_v11 = (unsigned int)*(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v4 * 4);
                    temp_v8 = temp_v5 - *(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v7);
                  }
                }
              }
              else if ((puVar4[5] & 1) != 0) {
                temp_v11 = (unsigned int)*(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v4 * 4);
                temp_v8 = temp_v5 - *(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v7);
              }
            }
          }
          else {
            temp_v2 = param_1;
            FUN_004daf18(param_1,*puVar3);
            if (temp_v2 != 0) {
              temp_v11 = (unsigned int)*(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v4 * 4);
              temp_v8 = temp_v5 - *(unsigned short *)(*(int *)(temp_v6 + 0x44) + temp_v7);
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(param_1 + param_2));
    }
  }
  return temp_v11;
}

} /* extern "C" */
