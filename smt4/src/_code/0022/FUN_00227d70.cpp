#include "common.h"

extern "C" {

int btlGetMainState(void);
extern int FUN_00227668(u32 a);
extern int FUN_00227ecc(u32 a, u32 b);
extern int FUN_00293230(void);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 value;
} Entry;

int FUN_00227d70(u32 a, u32 b)
{
    int result;
    Entry *entry;

    btlGetMainState();
    if (FUN_00293230() != 0) {
        result = 5;
    } else {
        entry = (Entry *)FUN_00227ecc(a, b);
        result = 0;
        if (entry != NULL) {
            result = entry->value;
        }
        if (entry == NULL || result == 0) {
            result = FUN_00227668(a);
            return result;
        }
    }
    return result;
}

} /* extern "C" */
