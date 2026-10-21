/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040b730` (_code @ 0x40b730, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [68], unsigned char *, int, int, unsigned int);
int FUN_00192608(void);
int FUN_003e573c(unsigned int, int, unsigned char [68], unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char LAB_0040b93c; /* 0x40b93c */
extern unsigned char LAB_0040b958; /* 0x40b958 */
extern unsigned char LAB_0040b990; /* 0x40b990 */

/* Supplied declaration required: textFormatBuffer. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_003e573c. */
extern unsigned int FUN_0040b11c(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);


/* WARNING: Removing unreachable block (ram,0x0040b86c) */
/* WARNING: Removing unreachable block (ram,0x0040b8f0) */
/* WARNING: Removing unreachable block (ram,0x0040b7cc) */

void FUN_0040b730(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = gameGetPlayerData();
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 10);
        FUN_00192608();
        temp_v2 = FUN_0040b11c(param_1,2,*(unsigned short *)(temp_v1 + 0x40),*(unsigned short *)(temp_v1 + 0x42),0
                            );
        textFormatBuffer(temp_v3,&LAB_0040b990,*(unsigned short *)(temp_v1 + 0x40),
                     *(unsigned short *)(temp_v1 + 0x42),temp_v2);
      }
    }
    else {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 8);
      FUN_00192608();
      temp_v2 = FUN_0040b11c(param_1,1,*(unsigned short *)(temp_v1 + 0x40),*(unsigned short *)(temp_v1 + 0x42),0);
      textFormatBuffer(temp_v3,&LAB_0040b958,*(unsigned short *)(temp_v1 + 0x40),
                   *(unsigned short *)(temp_v1 + 0x42),temp_v2);
    }
  }
  else {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 6);
    FUN_00192608();
    temp_v2 = FUN_0040b11c(param_1,0,*(unsigned short *)(temp_v1 + 0x40),*(unsigned short *)(temp_v1 + 0x42),0);
    textFormatBuffer(temp_v3,&LAB_0040b93c,*(unsigned short *)(temp_v1 + 0x40),
                 *(unsigned short *)(temp_v1 + 0x42),temp_v2);
  }
  FUN_003e573c(param_1,param_2,temp_v3,param_3);
  return;
}

} /* extern "C" */
