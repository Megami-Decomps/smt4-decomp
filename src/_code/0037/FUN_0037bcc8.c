/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bcc8` (_code @ 0x37bcc8, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00150e28. */
extern int FUN_0037b370(unsigned char);
/* Supplied declaration required: FUN_0037bec4. */
extern int FUN_003e6884(unsigned char *);
extern int FUN_003e68fc(unsigned char *);
extern unsigned int FUN_003e6934(void);
extern int FUN_003e70c8(unsigned char *, unsigned char *);
extern int FUN_003e70f8(unsigned int *, unsigned char *);


unsigned int FUN_0037bcc8(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [56];
  unsigned char temp_v6 [96];
  unsigned char temp_v7 [8];
  
  (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
  temp_v0 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,temp_v6,0x40);
  if (temp_v0 == 0x40) {
    FUN_00150e28(temp_v7);
    temp_v0 = FUN_003e70c8(temp_v7,temp_v6);
    if (temp_v0 != 0) {
      temp_v0 = FUN_003e68fc(temp_v6);
      temp_v1 = FUN_003e6884(temp_v6);
      temp_v4 = temp_v0 + temp_v1;
      if (temp_v4 <= param_3) {
        (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
        temp_v2 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_2,temp_v4);
        if (temp_v2 == temp_v4) {
          FUN_0037bec4(param_1 + 1,param_2);
          temp_v0 = FUN_003e70f8(param_1 + 1,temp_v5);
          if (temp_v0 != 0) {
            temp_v0 = FUN_0037b370(temp_v5[0]);
            if (temp_v0 == 3) {
              temp_v3 = 0;
              if (param_1[1] != 0) {
                temp_v3 = FUN_003e6934();
              }
              param_1[3] = temp_v3;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
