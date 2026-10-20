/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deee4` (_code @ 0x3deee4, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

extern int FUN_0018719c(unsigned short);
extern unsigned char *FUN_001abac8(unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_002e26c4(unsigned int);


unsigned int FUN_003deee4(unsigned int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  unsigned short temp_v3;
  
  temp_v0 = 0;
  temp_v1 = FUN_002e26c4(0x1e);
  if ((temp_v1 != 0) && (temp_v1 = FUN_0018719c(*(unsigned short *)(temp_v1 + 0x56)), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  temp_v3 = 0;
  do {
    pbVar3 = (unsigned char *)FUN_001abac8(temp_v3);
    if ((*pbVar3 & 1) == 0) goto LAB_003defc4;
    do {
      if (((temp_v3 < 0x15e) || (temp_v2 = temp_v3, FUN_001ad9b4(), temp_v2 != 0)) &&
         (temp_v0 || param_1 != 0)) {
        temp_v2 = temp_v3;
        FUN_001ad9b4();
        if (temp_v2 != 0) {
          temp_v2 = *(unsigned char *)(temp_v2 + 7) & 1;
        }
        else {
          temp_v2 = 0;
        }
        if ((temp_v2 & ~param_1) == 0) {
          temp_v2 = temp_v3;
          FUN_001ad9b4();
          if (temp_v2 != 0) {
            temp_v2 = *(unsigned char *)(temp_v2 + 7) & 1;
          }
          else {
            temp_v2 = 0;
          }
          if (((param_1 & ~temp_v2) == 0) &&
             (pbVar3 = (unsigned char *)FUN_001abac8(temp_v3), (*pbVar3 & 0x20) != 0)) {
            return 1;
          }
        }
      }
LAB_003defc4:
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 400) {
        return 0;
      }
    } while (temp_v3 >= 0x15e);
  } while( 1 );
}

} /* extern "C" */
