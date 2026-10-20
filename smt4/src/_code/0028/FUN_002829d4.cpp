/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002829d4` (_code @ 0x2829d4, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char LAB_00145c78; /* 0x145c78 */

extern int gameDataGetFlagBits(void);
extern unsigned int FUN_00295cec(void);
/* Supplied declaration required: libc_bsearch. */
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(void);
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


unsigned char FUN_002829d4(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [32];
  unsigned short temp_v8;
  
  temp_v1 = dataTableGet(0xb,0);
  temp_v6 = 0;
  if (temp_v1 != 0) {
    temp_v2 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v1);
    puVar5 = temp_v7;
    temp_v8 = param_1;
    libc_bsearch(puVar5,temp_v2,temp_v3,0x40,&LAB_00145c78);
    if ((puVar5 != (unsigned char *)0x0) &&
       (temp_v1 = gameGetPlayerData(), (unsigned char)puVar5[0x2b] <= *(unsigned char *)(temp_v1 + 0x76))) {
      temp_v1 = 0;
      do {
        if ((*(short *)(puVar5 + temp_v1 * 2 + 0x2c) != 0) && (temp_v4 = gameFlagIsSet(), temp_v4 == 0)) {
          return (unsigned char)2;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      temp_v1 = 0;
      while( 1 ) {
        temp_v0 = *(unsigned short *)(puVar5 + temp_v1 * 2 + 0x32);
        if ((temp_v0 != 0) &&
           (temp_v4 = gameDataGetFlagBits(),
           ((unsigned int)*(unsigned char *)(temp_v4 + (unsigned int)(temp_v0 >> 3)) & (1 << (temp_v0 & 7))) == 0)) break;
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 3) {
          temp_v1 = dataTableGet(0xb,0);
          if (temp_v1 != 0) {
            temp_v2 = dataTableGetEntries();
            temp_v3 = dataTableGetCount(temp_v1);
            puVar5 = temp_v7;
            temp_v8 = param_1;
            libc_bsearch(puVar5,temp_v2,temp_v3,0x40,&LAB_00145c78);
            if (puVar5 != (unsigned char *)0x0) {
              temp_v6 = (unsigned int)*(unsigned short *)(puVar5 + 0x26);
            }
          }
          temp_v5 = FUN_00295cec();
          return temp_v5 < temp_v6;
        }
      }
    }
  }
  return (unsigned char)2;
}

} /* extern "C" */
