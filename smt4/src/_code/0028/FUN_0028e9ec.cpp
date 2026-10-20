/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028e9ec` (_code @ 0x28e9ec, 0x278 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00292960(char *, int);
int btlGetMainState(void);
int FUN_0029f848(int, int, int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0023dcb8(void);
extern int idOwnerHasActiveObject(int);
/* Supplied declaration required: FUN_00292960. */
extern int flagBitIsSet(void);
extern int FUN_00293988(void);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_0029f848. */
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
extern int gameFlagIsSet(void);


void FUN_0028e9ec(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    pcVar1 = (char *)(temp_v2 & 0xff);
    FUN_00292960(pcVar1,1);
    if (((((pcVar1 != (char *)0x0) && (pcVar1[1] == '\x01')) &&
         ((*(short *)(pcVar1 + 0x5c) == 0 || (temp_v0 = gameFlagIsSet(), temp_v0 != 0)))) &&
        ((*(short *)(pcVar1 + 0x5e) == 0 || (temp_v0 = flagBitIsSet(), temp_v0 != 0)))) &&
       ((pcVar1[0x5b] == '\0' ||
        (temp_v0 = btlGetMainState(), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0)))) {
      if (*pcVar1 == '\x02') {
        btlGetMainState();
        temp_v0 = FUN_00293988();
        if ((temp_v0 != 0) && (temp_v0 = btlGetMainState(), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0)) {
          if ((*pcVar1 == '\x06' || *pcVar1 == '\b') || (temp_v0 = FUN_0023dcb8(), temp_v0 == 0)) {
            temp_v3 = temp_v3 + 1;
          }
        }
      }
      else if ((*pcVar1 == '\x06' || *pcVar1 == '\b') || (temp_v0 = FUN_0023dcb8(), temp_v0 == 0)) {
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 9) {
      FUN_0029f848(param_1 + 0x3088,temp_v3,1,temp_v3,1,1);
      temp_v3 = 0;
      do {
        temp_v4 = 0;
        temp_v0 = gameGetSlotTable();
        if (-1 < *(char *)(temp_v0 + temp_v3 + 0x9108)) {
          temp_v0 = gameGetSlotTable();
          temp_v0 = gameGetUnitRecord((int)*(char *)(temp_v0 + temp_v3 + 0x9108));
          if (temp_v0 != 0) {
            temp_v2 = 0;
            do {
              pcVar1 = (char *)(temp_v2 & 0xff);
              FUN_00292960(pcVar1,0);
              if ((((pcVar1 != (char *)0x0) && (pcVar1[1] == '\x01')) &&
                  ((*(short *)(pcVar1 + 0x5c) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
                 (((*(short *)(pcVar1 + 0x5e) == 0 || (temp_v1 = flagBitIsSet(), temp_v1 != 0)) &&
                  ((pcVar1[0x5b] == '\0' ||
                   (temp_v1 = btlGetMainState(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) == 0)))))) {
                if (*pcVar1 != '\x05') {
                  if ((*pcVar1 != '\x03') || (temp_v1 = idOwnerHasActiveObject(temp_v0), temp_v1 != 0)) {
                    temp_v4 = temp_v4 + 1;
                  }
                }
                else if (*(char *)(param_1 + 0x38d1) == '\0') {
                  temp_v4 = temp_v4 + 1;
                }
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < 9);
          }
        }
        FUN_0029f848(param_1 + temp_v3 * 100 + 0x30ec,temp_v4,1,temp_v4,1,1);
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 3) {
          return;
        }
      } while( 1 );
    }
  } while( 1 );
}

} /* extern "C" */
