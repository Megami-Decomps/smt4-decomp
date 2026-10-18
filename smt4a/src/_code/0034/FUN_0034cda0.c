/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cda0` (_code @ 0x34cda0, 0x21c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_00167f08(void);
/* Supplied declaration required: FUN_0023f900. */
/* Supplied declaration required: FUN_0023fc38. */
extern int FUN_002a7410(void);
/* Supplied declaration required: FUN_002c7e24. */
extern unsigned int FUN_002cab18(void);
extern unsigned int FUN_002cad18(void);


void FUN_0034cda0(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v2 = FUN_002a7410();
  temp_v1 = DAT_0057f268;
  if (temp_v2 == 0) {
    temp_v6 = 0;
    FUN_002c7e24();
    temp_v2 = FUN_00167f08();
    temp_v3 = FUN_002cad18();
    temp_v4 = FUN_002cab18();
    if (((temp_v2 == 0x1c) || (temp_v2 == 0x1e || temp_v2 == 0xba)) ||
       ((temp_v2 == 0xc1 || temp_v2 == 0xce) || temp_v2 == 0x28)) {
      temp_v5 = temp_v4;
      if (temp_v3 != 0) {
        temp_v5 = (unsigned int)*(unsigned char *)(temp_v1 + 0x42);
      }
      temp_v6 = temp_v3 == 0 || temp_v5 == 0;
    }
    if ((((temp_v2 == 0x1b || temp_v2 == 0x1d) || (temp_v2 == 0xb9 || temp_v2 == 0xc0)) ||
        (temp_v2 == 0xe5 || temp_v2 == 0x27)) && ((temp_v3 == 0 || (*(char *)(temp_v1 + 0x42) != '\0')))) {
      temp_v6 = 1;
    }
    if ((((temp_v2 == 0x22 || temp_v2 == 0x24) || (temp_v2 == 0xb8 || temp_v2 == 0xc3)) ||
        (temp_v2 == 0xce || temp_v2 == 0x28)) &&
       (((temp_v3 != 0 || ((int)temp_v4 < 0)) || (*(char *)(temp_v1 + 0x42) == '\0')))) {
      temp_v6 = 1;
    }
    if ((((temp_v2 == 0x21 || temp_v2 == 0x23) || (temp_v2 == 0xb7 || temp_v2 == 0xc2)) ||
        (temp_v2 == 0xe5 || temp_v2 == 0x27)) &&
       (((temp_v3 != 0 || ((int)temp_v4 < 0)) || (*(char *)(temp_v1 + 0x42) != '\0')))) {
      temp_v6 = 1;
    }
    if (((temp_v2 == 0x26 || temp_v2 == 4) || ((temp_v2 == 0xbd || temp_v2 == 0xc5) || temp_v2 == 0xce)) &&
       ((temp_v3 != 0 || ((-1 < (int)temp_v4 || (*(char *)(temp_v1 + 0x42) == '\0')))))) {
      temp_v6 = 1;
    }
    if ((((temp_v2 == 0x25 || temp_v2 == 3) || ((temp_v2 == 0xbc || temp_v2 == 0xc4) || temp_v2 == 0xe5)) &&
        ((temp_v3 != 0 || ((-1 < (int)temp_v4 || (*(char *)(temp_v1 + 0x42) != '\0')))))) || (temp_v6)) {
      FUN_0023fc38();
    }
    temp_v5 = (unsigned int)*(short *)(temp_v1 + 0x3a);
    temp_v6 = temp_v5 == temp_v4;
    if (temp_v6) {
      temp_v5 = (unsigned int)*(char *)(temp_v1 + 0x44);
    }
    if ((!temp_v6 || temp_v5 != temp_v3) &&
       ((((temp_v0 = *(char *)(temp_v1 + 0x9b4), temp_v0 == '\x03' || temp_v0 == '\x02' ||
          (temp_v0 == '\x04' || temp_v0 == '\x0f')) || (temp_v0 == '\x11' || temp_v0 == '\f')) ||
        ((temp_v0 == '\r' || temp_v0 == '\x0e' || (temp_v0 == '\x10' || temp_v0 == '\x13')))))) {
      FUN_0023f900();
      return;
    }
  }
  return;
}
