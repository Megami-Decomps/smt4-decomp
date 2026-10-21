/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003832fc` (_code @ 0x3832fc, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(int, unsigned int, int, unsigned char *);
int textFormatBuffer(unsigned char [64], unsigned char *, unsigned int, unsigned int);
int FUN_0031e2bc(unsigned int, unsigned char [64], int);
int dataTable27Sub0GetCount(void);

extern unsigned char LAB_00381b7c; /* 0x381b7c */
extern unsigned char LAB_00383538; /* 0x383538 */
extern unsigned char LAB_00383550; /* 0x383550 */

extern int dataTable27Sub0GetRecord(int, unsigned int);
extern int FUN_0023ea64(int);
extern unsigned int randBetween(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_0031e2bc. */
extern int FUN_00385afc(int);
/* Supplied declaration required: dataTable27Sub0GetCount. */
extern int FUN_00385b1c(int);


void FUN_003832fc(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7 [64];
  
  temp_v0 = FUN_0023ea64(param_1 + 0x20);
  if (((temp_v0 != 0) && (temp_v0 = FUN_00385afc(param_1 + 0x20), temp_v0 != 0)) &&
     (temp_v0 = FUN_00385b1c(param_1 + 0x20), temp_v0 != 0)) {
    temp_v0 = dataTable27Sub0GetRecord(param_1 + 0x20,0);
    temp_v5 = 0;
    temp_v1 = param_1 + 0x20;
    dataTable27Sub0GetCount();
    puVar8 = (unsigned int *)(param_1 + 0xd8c);
    if (0 < temp_v1) {
      do {
        temp_v1 = temp_v0 + temp_v5 * 0x88;
        if ((((unsigned int)*(unsigned short *)(temp_v1 + 0x60) == (int)*(char *)(param_1 + 0x10)) &&
            ((*(short *)(temp_v1 + 0x66) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
           ((*(short *)(temp_v1 + 0x68) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
          temp_v4 = *(int *)(param_1 + 0xd8c);
          temp_v2 = 0;
          if (temp_v2 < temp_v4) {
            do {
              if (*(unsigned int *)(param_1 + temp_v2 * 8 + 0xd60) == (unsigned int)*(unsigned short *)(temp_v1 + 0x62))
              goto LAB_00383410;
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < temp_v4);
          }
          *(int *)(param_1 + temp_v4 * 8 + 0xd5c) = temp_v5;
          *(unsigned int *)(param_1 + *puVar8 * 8 + 0xd60) = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
          temp_v3 = *puVar8;
          *puVar8 = temp_v3 + 1;
          if (temp_v3 + 1 >= 6) break;
        }
LAB_00383410:
        temp_v5 = temp_v5 + 1;
        temp_v1 = param_1 + 0x20;
        dataTable27Sub0GetCount();
      } while (temp_v5 < temp_v1);
    }
    FUN_002b7bca(param_1 + 0xd5c,*(unsigned int *)(param_1 + 0xd8c),8,&LAB_00381b7c);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      temp_v3 = 0;
      do {
        temp_v0 = 0;
        if (temp_v0 < *(int *)(param_1 + 0xd8c)) {
          do {
            if (*(int *)(param_1 + temp_v0 * 8 + 0xd60) == temp_v3 + 1) {
              temp_v0 = dataTable27Sub0GetRecord(param_1 + 0x20,*(unsigned int *)(param_1 + temp_v0 * 8 + 0xd5c));
              if ((*(short *)(temp_v0 + 100) == 1) || (*(short *)(temp_v0 + 100) != 2)) {
                temp_v6 = 2;
              }
              else {
                temp_v6 = 1;
              }
              goto LAB_003834c0;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < *(int *)(param_1 + 0xd8c));
        }
        temp_v6 = randBetween(1,2);
LAB_003834c0:
        textFormatBuffer(temp_v7,&LAB_00383538,temp_v3 + 1,temp_v6);
        temp_v0 = param_1 + temp_v3 * 4;
        FUN_0031e2bc(*(unsigned int *)(*(int *)(temp_v0 + 0xd10) + 8),temp_v7,0);
        textFormatBuffer(temp_v7,&LAB_00383550,temp_v3 + 1,temp_v6);
        FUN_0031e2bc(*(unsigned int *)(*(int *)(temp_v0 + 0xd28) + 8),temp_v7,0);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 6);
    }
    *(unsigned int *)(param_1 + 4) = 2;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
