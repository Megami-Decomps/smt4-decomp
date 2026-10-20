/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e894` (_code @ 0x11e894, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(int *);

extern unsigned char LAB_00117569; /* 0x117569 */
extern unsigned char LAB_00117579; /* 0x117579 */
extern unsigned char LAB_0011e8dc; /* 0x11e8dc */
extern unsigned char DAT_0055ab98; /* 0x55ab98 */
extern unsigned char *DAT_005949ac; /* 0x5949ac */
extern unsigned char *DAT_005949b0; /* 0x5949b0 */
extern signed char g_systemTable; /* 0x59935c */

extern int FUN_00110594(int);
extern int FUN_0011400c(unsigned int *, unsigned int);
extern unsigned int onlineStringConstruct(unsigned int *, unsigned char *);
/* Supplied declaration required: onlineStringDestroy. */


int FUN_0011e894(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int uStack_10;
  unsigned int uStack_c;
  
  *param_1 = (unsigned int)&DAT_0055ab98;
  uStack_10 = param_3;
  uStack_c = param_4;
  temp_v0 = onlineStringConstruct((unsigned int *)&uStack_10,&LAB_0011e8dc);
  temp_v1 = FUN_0011400c(param_1 + 1,temp_v0);
  onlineStringDestroy(&uStack_10);
  temp_v1 = FUN_00110594(temp_v1 + 0x28);
  if (g_systemTable == '\0') {
    DAT_005949ac = &LAB_00117569;
    DAT_005949b0 = &LAB_00117579;
    g_systemTable = '\x01';
  }
  return temp_v1 - 0x2c;
}

} /* extern "C" */
