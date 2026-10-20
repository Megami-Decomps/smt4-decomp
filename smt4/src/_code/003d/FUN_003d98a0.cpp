#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
#define ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 {
    char whole[25];
    unsigned char u1[25];
    signed char s1[25];
};
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_size_check[(sizeof(union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1) == 25) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_u1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_s1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 s__B_B_B_B_B_B_00435d00; /* 0x435d00 */

extern int libc_strncmp(int, unsigned int, unsigned int);
extern unsigned int libc_strlen(unsigned int);


unsigned int FUN_003d98a0(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = libc_strlen((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]));
    temp_v1 = libc_strncmp(param_2,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
