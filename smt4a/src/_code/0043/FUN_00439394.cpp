#include "common.h"

extern "C" {

u32 FUN_00430f98(void);
u32 FUN_0043126c(void);

/* Maps the console region and the configured language to the entries of a language list. */
void FUN_00439394(u32 param_1, u8 *entries, s32 *count)
{
    *count = 1;
    switch (FUN_0043126c()) {
    case 0:
        if (FUN_00430f98() == 0) {
            entries[0] = 0;
            return;
        }
        break;
    case 1:
        switch (FUN_00430f98()) {
        case 1:
            entries[0] = 1;
            return;
        case 2:
            entries[0] = 2;
            entries[1] = 1;
            ++*count;
            return;
        case 5:
            entries[0] = 3;
            entries[1] = 1;
            ++*count;
            return;
        case 9:
            entries[0] = 14;
            entries[1] = 1;
            ++*count;
            return;
        }
        break;
    case 2:
        switch (FUN_00430f98()) {
        case 1:
            entries[0] = 4;
            return;
        case 2:
            entries[0] = 5;
            entries[1] = 4;
            ++*count;
            return;
        case 5:
            entries[0] = 8;
            entries[1] = 4;
            ++*count;
            return;
        case 3:
            entries[0] = 6;
            entries[1] = 4;
            ++*count;
            return;
        case 4:
            entries[0] = 7;
            entries[1] = 4;
            ++*count;
            return;
        case 9:
            entries[0] = 12;
            entries[1] = 4;
            ++*count;
            return;
        case 10:
            entries[0] = 13;
            entries[1] = 4;
            ++*count;
            return;
        case 8:
            entries[0] = 9;
            entries[1] = 4;
            ++*count;
            return;
        }
        break;
    case 4:
        if (FUN_00430f98() == 6) {
            entries[0] = 11;
            return;
        }
        break;
    case 5:
        if (FUN_00430f98() == 7) {
            entries[0] = 10;
            return;
        }
        break;
    case 6:
        switch (FUN_00430f98()) {
        case 1:
            entries[0] = 16;
            return;
        case 11:
            entries[0] = 15;
            return;
        }
        break;
    }
    *count = 0;
}

}
