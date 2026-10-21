/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00403b84` (_code @ 0x403b84, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int, unsigned int, unsigned int, unsigned int);
int FUN_0039b984(void);
int gameDataSetModeAndFlag(unsigned int, unsigned int);
int FUN_0040a790(unsigned int);
int FUN_0040a7b4(unsigned int);
int FUN_0040a844(unsigned int, int);
int gameDataSetEnabledBit(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int gameFlagIsSet(short);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0039b984. */
extern unsigned int tableByteGet1(unsigned int);
/* Supplied declaration required: gameDataSetModeAndFlag. */
/* Supplied declaration required: FUN_0040a790. */
/* Supplied declaration required: FUN_0040a7b4. */
extern int tableFlagBit0(unsigned int);
/* Supplied declaration required: FUN_0040a844. */
/* Supplied declaration required: gameDataSetEnabledBit. */


void FUN_00403b84(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  sysMemClear(param_1 + 0x408,600,param_3,param_4,param_4);
  temp_v4 = 0;
  temp_v3 = 0;
  *(unsigned int *)(param_1 + 0x660) = 0;
  do {
    if (param_2 <= temp_v4) break;
    psVar1 = (short *)(temp_v3 & 0xffff);
    FUN_0039b984();
    if ((psVar1 != (short *)0x0) && (temp_v4 = temp_v4 + 1, *psVar1 != 0)) {
      temp_v0 = gameFlagIsSet(psVar1[0x2d]);
      if (!(psVar1[0x2d] == 0 || temp_v0 == 0)) {
        temp_v0 = tableFlagBit0(temp_v3);
        if (temp_v0 != 0) {
          FUN_0040a7b4(temp_v3);
        }
      }
      else {
        temp_v0 = tableFlagBit0(temp_v3);
        if (temp_v0 == 0) {
          temp_v0 = gameFlagIsSet(psVar1[0x2e]);
          if ((psVar1[0x2e] != 0) && (temp_v0 == 0)) goto LAB_00403d24;
          FUN_0040a790(temp_v3);
          if (psVar1[0x2c] != 1) {
            if (psVar1[0x2c] == 2) {
              gameDataSetEnabledBit(temp_v3,0);
              FUN_0040a844(temp_v3,0);
            }
          }
          else {
            gameDataSetEnabledBit(temp_v3,0);
            FUN_0040a844(temp_v3,1);
          }
        }
        temp_v1 = tableByteGet1(temp_v3);
        temp_v5 = temp_v1;
        if (temp_v1 < 5) {
          temp_v2 = 0;
          temp_v1 = temp_v2;
          do {
            temp_v0 = gameFlagIsSet(psVar1[temp_v2 + 0x2f]);
            if (temp_v0 != 0) {
              temp_v1 = (temp_v1 + 1) & 0xff;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 5);
        }
        if (temp_v5 < temp_v1) {
          gameDataSetModeAndFlag(temp_v3,temp_v1);
        }
        *(short *)(param_1 + *(int *)(param_1 + 0x660) * 2 + 0x408) = *psVar1;
        *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      }
    }
LAB_00403d24:
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 300);
  *(unsigned int *)(param_1 + 0xfc) = 10;
  if (*(int *)(param_1 + 0x660) < 10) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0x660);
  }
  return;
}

} /* extern "C" */
