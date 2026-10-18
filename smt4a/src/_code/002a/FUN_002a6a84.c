/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6a84` (_code @ 0x2a6a84, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned short sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_002b2b24; /* 0x2b2b24 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
extern char *FUN_00261828(void);


char * FUN_002a6a84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar4;
  unsigned short temp_v2 [52];
  
  if (param_1 >= 0x6a) {
    pcVar1 = (char *)0x0;
  }
  else {
    if (param_1 == 0x3e) {
      pcVar1 = (char *)FUN_00261828();
      return pcVar1;
    }
    if (param_1 == 0x55 || param_1 == 0x56) {
      pcVar1 = "1/4         ";
    }
    else if (param_1 == 0x57) {
      pcVar1 = "1/6         ";
    }
    else if (param_1 == 0x58) {
      pcVar1 = "1/5         ";
    }
    else {
      if (param_1 != 0x5a) {
        if (param_1 != 0x5b) {
          if (param_1 != 0x5c) {
            if (param_1 == 0x5d) {
              return "3/4         ";
            }
            if (param_1 != 0x5e) {
              if (param_1 != 0x5f) {
                if (param_1 == 0x60) {
                  return "5/6         ";
                }
                if (param_1 == 0x61) {
                  return "2/6         ";
                }
                if (param_1 == 0x62) {
                  return "6/6         ";
                }
                if (param_1 == 99) {
                  return "3/6         ";
                }
                if (param_1 == 100) {
                  return "2/5         ";
                }
                if (param_1 == 0x65) {
                  return "3/5         ";
                }
                if (param_1 == 0x66) {
                  return "4/5         ";
                }
                if (param_1 != 0x67) {
                  if (param_1 != 0x68) {
                    temp_v0 = FUN_00187180(0x38,0);
                    temp_v1 = FUN_00192798();
                    temp_v0 = FUN_00192748(temp_v0);
                    puVar4 = temp_v2;
                    temp_v2[0] = (unsigned short)param_1;
                    FUN_00100854(puVar4,temp_v1,temp_v0,0x68,&LAB_002b2b24);
                    return (char *)(puVar4 + 1);
                  }
                  return "4/6         ";
                }
              }
              return "4/4         ";
            }
          }
          return "2/4         ";
        }
        return "3/4         ";
      }
      pcVar1 = "5/5         ";
    }
  }
  return pcVar1;
}
