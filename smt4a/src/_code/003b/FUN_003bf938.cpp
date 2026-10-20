/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf938` (_code @ 0x3bf938, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_003e48dc(unsigned int);
int FUN_003e4e4c(int);
int FUN_004bd410(void);

extern unsigned char DAT_0057f588; /* 0x57f588 */

extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_001846d0. */
extern int FUN_00187168(int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003e48dc. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_004bd410. */


unsigned int FUN_003bf938(void)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v3 = FUN_002deb84();
  temp_v8 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  if ((temp_v3 == 0x1e) &&
     (temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8d), (temp_v0 == '\0' || temp_v0 == '\x02') || temp_v0 == '\x01')
     ) {
    temp_v3 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0xb00;
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8d) = 4;
    FUN_001846d0(temp_v3,2);
    temp_v3 = 0;
    do {
      if (*(int *)(temp_v8 + 0x9c) < temp_v3) break;
      FUN_001846d0(temp_v8 + temp_v3 * 0x8c + 0xdbc,2);
      temp_v5 = temp_v8 + temp_v3;
      temp_v3 = temp_v3 + 1;
      *(unsigned char *)(temp_v5 + 0xa0) = 4;
    } while (temp_v3 < 0xc);
  }
  if (*(char *)(temp_v1 + 0x90) == '\0') {
    temp_v8 = 0;
    do {
      if (*(int *)(temp_v1 + 0x9c) < temp_v8) break;
      temp_v3 = temp_v1 + temp_v8 * 4;
      temp_v7 = *(unsigned int *)(temp_v3 + 0xac);
      if (temp_v7 != 0) {
        if (*(char *)(temp_v1 + temp_v8 + 0xdc) != '\0') {
          FUN_004bd410();
          *(unsigned int *)(temp_v3 + 0xac) = 0;
        }
        else {
          FUN_003e48dc(temp_v7 & 0xffff);
          *(unsigned int *)(temp_v3 + 0xac) = 0;
          temp_v3 = saveSlotFindSelected();
          if (*(unsigned short *)(temp_v3 + 300) == temp_v7) {
            temp_v6 = 0;
            do {
              temp_v3 = FUN_003e4d68(temp_v6 & 0xffff);
              if ((*(unsigned short *)(temp_v3 + 300) != temp_v7) && (temp_v5 = FUN_00187168(temp_v3), temp_v5 != 0))
              {
                temp_v2 = *(unsigned short *)(temp_v3 + 300);
                goto LAB_003bfa8c;
              }
              temp_v6 = temp_v6 + 1;
            } while ((int)temp_v6 < 0xc);
            temp_v2 = 0;
LAB_003bfa8c:
            FUN_003e4e4c(temp_v2);
          }
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0xc);
    temp_v4 = 1;
    *(unsigned char *)(temp_v1 + 0xe9) = 0;
  }
  else {
    temp_v4 = 0;
  }
  return temp_v4;
}

} /* extern "C" */
