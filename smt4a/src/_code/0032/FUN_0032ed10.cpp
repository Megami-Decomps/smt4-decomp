/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ed10` (_code @ 0x32ed10, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int FUN_00409d00(void);

extern int FUN_0014af84(void);
/* Supplied declaration required: dataTableGet. */
extern int FUN_0018719c(void);
extern int dataTableGetCount(void);
extern int dataTableGetEntries(void);
extern unsigned int FUN_003dfd44(void);
extern unsigned int FUN_003dfe88(void);
extern unsigned int countersGetB(unsigned int);
/* Supplied declaration required: FUN_00409d00. */
extern unsigned int countersGetA(void);


void FUN_0032ed10(void)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char *pbVar11;
  int temp_v10;
  
  FUN_00409d00();
  dataTableGet(0x4a,0);
  temp_v5 = dataTableGetCount();
  temp_v10 = 0;
  if (temp_v10 < temp_v5) {
    do {
      temp_v0 = (int)(temp_v10 + ((unsigned int)(temp_v10 >> 0x1f) >> 0x1d)) >> 3;
      temp_v6 = FUN_0014af84();
      temp_v1 = 1 << ((temp_v10 % 8) & 0xffU);
      if ((*(unsigned char *)(temp_v6 + temp_v0 + 0x282ec) & temp_v1) == 0) {
        dataTableGet(0x4a,0);
        temp_v6 = dataTableGetEntries();
        temp_v6 = temp_v6 + temp_v10 * 0x2c;
        if (temp_v6 != 0) {
          temp_v3 = 1;
          if ((*(int *)(temp_v6 + 0x28) != 0) && (temp_v7 = FUN_0018719c(), temp_v7 == 0)) {
            temp_v3 = 0;
          }
          temp_v2 = *(unsigned short *)(temp_v6 + 0x22);
          if (temp_v2 == 0) goto LAB_0032eeb4;
          if (temp_v2 < 0x40) {
            temp_v8 = countersGetA();
            if (temp_v8 < *(unsigned int *)(temp_v6 + 0x24)) goto LAB_0032eefc;
            goto LAB_0032eeb4;
          }
          temp_v8 = 0;
          switch(temp_v2 & 0xff) {
          case 0x40:
            temp_v9 = 0x27;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x41:
            temp_v9 = 9;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x42:
            temp_v9 = 10;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x43:
            temp_v9 = 4;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x44:
            temp_v9 = 5;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x45:
            temp_v9 = 0x22;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x46:
            temp_v9 = 0x1e;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x47:
            temp_v9 = 0xb;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x48:
            temp_v9 = 3;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x49:
            temp_v9 = 0x16;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x4a:
            temp_v9 = 0x19;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x4b:
            temp_v9 = 0x12;
            temp_v8 = countersGetB(temp_v9);
            break;
          case 0x4c:
            temp_v8 = FUN_003dfe88();
            break;
          case 0x4d:
            temp_v8 = FUN_003dfd44();
          default:
          }
          if (*(unsigned int *)(temp_v6 + 0x24) <= temp_v8) {
LAB_0032eeb4:
            if (temp_v3) {
              temp_v6 = FUN_0014af84();
              pbVar11 = (unsigned char *)(temp_v6 + temp_v0 + 0x282ec);
              temp_v4 = (unsigned char)temp_v1;
              *pbVar11 = *pbVar11 | temp_v4;
              temp_v6 = FUN_0014af84();
              pbVar11 = (unsigned char *)(temp_v6 + temp_v0 + 0x282fc);
              *pbVar11 = *pbVar11 | temp_v4;
            }
          }
        }
      }
LAB_0032eefc:
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < temp_v5);
  }
  return;
}

} /* extern "C" */
