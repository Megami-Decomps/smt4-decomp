/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ec90` (_code @ 0x28ec90, 0x278 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0023de14(void);
extern int FUN_00292bb8(int);
/* Supplied declaration required: FUN_00292c04. */
extern int FUN_002931cc(void);
extern int FUN_00293c2c(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_0029fae8. */
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
extern int FUN_002c0ba8(void);


void FUN_0028ec90(int param_1)

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
    FUN_00292c04(pcVar1,1);
    if (((((pcVar1 != (char *)0x0) && (pcVar1[1] == '\x01')) &&
         ((*(short *)(pcVar1 + 0x5c) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)))) &&
        ((*(short *)(pcVar1 + 0x5e) == 0 || (temp_v0 = FUN_002931cc(), temp_v0 != 0)))) &&
       ((pcVar1[0x5b] == '\0' ||
        (temp_v0 = FUN_00293c98(), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0)))) {
      if (*pcVar1 == '\x02') {
        FUN_00293c98();
        temp_v0 = FUN_00293c2c();
        if ((temp_v0 != 0) && (temp_v0 = FUN_00293c98(), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0)) {
          if ((*pcVar1 == '\x06' || *pcVar1 == '\b') || (temp_v0 = FUN_0023de14(), temp_v0 == 0)) {
            temp_v3 = temp_v3 + 1;
          }
        }
      }
      else if ((*pcVar1 == '\x06' || *pcVar1 == '\b') || (temp_v0 = FUN_0023de14(), temp_v0 == 0)) {
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 9) {
      FUN_0029fae8(param_1 + 0x3088,temp_v3,1,temp_v3,1,1);
      temp_v3 = 0;
      do {
        temp_v4 = 0;
        temp_v0 = FUN_002a8a08();
        if (-1 < *(char *)(temp_v0 + temp_v3 + 0x9108)) {
          temp_v0 = FUN_002a8a08();
          temp_v0 = FUN_002a89e4((int)*(char *)(temp_v0 + temp_v3 + 0x9108));
          if (temp_v0 != 0) {
            temp_v2 = 0;
            do {
              pcVar1 = (char *)(temp_v2 & 0xff);
              FUN_00292c04(pcVar1,0);
              if ((((pcVar1 != (char *)0x0) && (pcVar1[1] == '\x01')) &&
                  ((*(short *)(pcVar1 + 0x5c) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
                 (((*(short *)(pcVar1 + 0x5e) == 0 || (temp_v1 = FUN_002931cc(), temp_v1 != 0)) &&
                  ((pcVar1[0x5b] == '\0' ||
                   (temp_v1 = FUN_00293c98(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) == 0)))))) {
                if (*pcVar1 != '\x05') {
                  if ((*pcVar1 != '\x03') || (temp_v1 = FUN_00292bb8(temp_v0), temp_v1 != 0)) {
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
        FUN_0029fae8(param_1 + temp_v3 * 100 + 0x30ec,temp_v4,1,temp_v4,1,1);
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 3) {
          return;
        }
      } while( 1 );
    }
  } while( 1 );
}
