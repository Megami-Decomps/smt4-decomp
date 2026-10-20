#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447600; /* 0x447600 */


void FUN_002d2aa0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = DAT_00447600;
  temp_v2 = 0;
  *(unsigned int *)(DAT_00447600 + 0x3044) = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 0x180 + 0x34;
    temp_v4 = *(char *)temp_v1 != '\0';
    temp_v3 = 0;
    if (temp_v4) {
      temp_v3 = *(int *)(temp_v1 + 0x174);
    }
    if (((temp_v4 && temp_v3 != 0) && (temp_v3 < 0xb)) && (*(char *)(temp_v1 + 0x7d) == '\0')) {
      temp_v3 = *(int *)(temp_v1 + 0x84);
      switch (temp_v3) {
      case 0:
      case 4:
      case 5:
        *(unsigned int *)(temp_v1 + 0x84) = 0x14;
        *(unsigned int *)(temp_v1 + 0x88) = 0;
        break;
      case 2:
        *(unsigned int *)(temp_v1 + 0x84) = 0x16;
        *(unsigned int *)(temp_v1 + 0x88) = 0;
        break;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x20) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
