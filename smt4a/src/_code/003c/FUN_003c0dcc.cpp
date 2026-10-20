/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0dcc` (_code @ 0x3c0dcc, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(int);
int dataTableGetEntries(void);
int FUN_0039b984(void);
int FUN_0040a76c(unsigned int, unsigned int);
int FUN_0040a790(unsigned int);
int FUN_0040a7b4(void);
int FUN_0040a844(unsigned int, int);
int FUN_0040a864(unsigned int, int);

extern unsigned int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
extern int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_0039b984. */
extern unsigned int tableByteGet1(unsigned int);
/* Supplied declaration required: FUN_0040a76c. */
/* Supplied declaration required: FUN_0040a790. */
/* Supplied declaration required: FUN_0040a7b4. */
extern int tableFlagBit2(unsigned int);
extern int tableFlagBit0(unsigned int);
extern int tableFlagBit1(unsigned int);
/* Supplied declaration required: FUN_0040a844. */
/* Supplied declaration required: FUN_0040a864. */
extern int FUN_004717e0(unsigned int);


unsigned int FUN_003c0dcc(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  short *psVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v0 = gameFlagIsSet(0x40e);
  if (temp_v0 != 0) {
    temp_v1 = dataTableGet(0x45,0);
    dataTableGetEntries();
    temp_v0 = dataTableGetCount(temp_v1);
    temp_v2 = FUN_004717e0(g_aocSystem);
    temp_v8 = 0;
    temp_v7 = 0;
    do {
      if (temp_v0 + temp_v2 <= temp_v8) {
        return 0;
      }
      psVar4 = (short *)(temp_v7 & 0xffff);
      FUN_0039b984();
      if ((psVar4 != (short *)0x0) && (temp_v8 = temp_v8 + 1, *psVar4 != 0)) {
        temp_v3 = tableFlagBit0(temp_v7);
        if (temp_v3 != 0) {
          temp_v3 = gameFlagIsSet(psVar4[0x2d]);
          if (!(psVar4[0x2d] == 0 || temp_v3 == 0)) {
            FUN_0040a7b4();
          }
          else {
            temp_v3 = tableFlagBit1(temp_v7);
            if (temp_v3 != 0) {
              return 1;
            }
            temp_v3 = tableFlagBit2(temp_v7);
            if (temp_v3 != 0) {
              return 1;
            }
            temp_v4 = tableByteGet1(temp_v7);
            temp_v6 = temp_v4;
            if (temp_v4 < 5) {
              temp_v5 = 0;
              temp_v6 = temp_v5;
              do {
                temp_v3 = gameFlagIsSet(psVar4[temp_v5 + 0x2f]);
                if (temp_v3 != 0) {
                  temp_v6 = (temp_v6 + 1) & 0xff;
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 5);
            }
            if (temp_v4 < temp_v6) {
              FUN_0040a76c(temp_v7,temp_v6);
              return 1;
            }
          }
        }
        else {
          temp_v3 = gameFlagIsSet(psVar4[0x2d]);
          if ((psVar4[0x2d] == 0 || temp_v3 == 0) &&
             ((temp_v3 = gameFlagIsSet(psVar4[0x2e]), psVar4[0x2e] == 0 || (temp_v3 != 0)))) {
            FUN_0040a790(temp_v7);
            if (psVar4[0x2c] == 1) {
              FUN_0040a864(temp_v7,0);
              FUN_0040a844(temp_v7,1);
              return 1;
            }
            if (psVar4[0x2c] != 2) {
              return 1;
            }
            FUN_0040a864(temp_v7,0);
            FUN_0040a844(temp_v7,0);
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < 300);
  }
  return 0;
}

} /* extern "C" */
