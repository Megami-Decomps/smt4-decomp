/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003800cc` (_code @ 0x3800cc, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_002ac5d8. */
/* Supplied declaration required: FUN_002b4ddc. */
/* Supplied declaration required: FUN_002b4e44. */
extern unsigned int FUN_002bb2f0(void);
extern int FUN_0037bfc4(unsigned int, unsigned int);
extern unsigned int FUN_003e741c(unsigned int);


void FUN_003800cc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0xc) + 0x134);
  if (temp_v1 != 0) {
    temp_v6 = *(int *)(temp_v1 + 8);
    temp_v1 = 0;
    temp_v0 = 0;
    if (0 < temp_v6) {
      do {
        temp_v4 = 0;
        do {
          puVar6 = (unsigned int *)(temp_v1 * 0x30 + temp_v4 * 0x18 + *(int *)(param_1 + 0xc));
          if (*(char *)((int)puVar6 + 0x11) != '\0' && *(char *)((int)puVar6 + 0x11) != '\x03') {
            temp_v5 = *puVar6;
            temp_v2 = FUN_003e741c(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x134));
            temp_v3 = FUN_0037bfc4(puVar6[1],temp_v2);
            if ((param_2 <= temp_v3 + temp_v5) && (*puVar6 <= param_3)) {
              temp_v0 = 1;
              break;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 2);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v6);
      if (temp_v0) {
        temp_v1 = *(int *)(param_1 + 0xc);
        if (*(romwright_code **)(temp_v1 + 300) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v1 + 300))(temp_v1,3,*(unsigned int *)(temp_v1 + 0x130));
          *(unsigned int *)(*(int *)(param_1 + 0xc) + 300) = 0;
        }
        temp_v1 = *(int *)(param_1 + 0xc);
        if (*(int *)(temp_v1 + 0x134) != 0) {
          FUN_002b4e44();
          FUN_002b4ddc(*(unsigned int *)(temp_v1 + 0x134));
          *(unsigned int *)(temp_v1 + 0x134) = 0;
          *(unsigned char *)(temp_v1 + 0xc5) = 0;
          *(unsigned char *)(temp_v1 + 0xc6) = 0;
          if (*(romwright_code **)(temp_v1 + 300) != (romwright_code *)0x0) {
            (**(romwright_code **)(temp_v1 + 300))(temp_v1,0,*(unsigned int *)(temp_v1 + 0x130));
          }
          if (*(char *)(temp_v1 + 199) != '\0') {
            *(unsigned char *)(temp_v1 + 199) = 0;
            temp_v2 = FUN_002bb2f0();
            FUN_002ac5d8(temp_v2,temp_v1);
            return;
          }
        }
      }
    }
  }
  return;
}
