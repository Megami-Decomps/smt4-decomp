#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_STORAGE_s____T_T_T_T_T_T_005c1d38_31_1_DEFINED
#define ROMWRIGHT_STORAGE_s____T_T_T_T_T_T_005c1d38_31_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1 {
    char whole[31];
    unsigned char u1[31];
    signed char s1[31];
};
typedef char romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1_size_check[(sizeof(union romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1) == 31) ? 1 : -1];
typedef char romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1_u1_width_check[(sizeof(((union romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1_s1_width_check[(sizeof(((union romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s____T_T_T_T_T_T_005c1d38_31_1 s____T_T_T_T_T_T_005c1d38; /* 0x5c1d38 */


unsigned int FUN_001b1ed8(void)

{
  (*(unsigned int *)&s____T_T_T_T_T_T_005c1d38.u1[0]) = (*(unsigned int *)&s____T_T_T_T_T_T_005c1d38.u1[0]) * 0x19660d + 0x3c6ef35f;
  return (unsigned int)(*(unsigned int *)&s____T_T_T_T_T_T_005c1d38.u1[0]) >> 0x10;
}

} /* extern "C" */
