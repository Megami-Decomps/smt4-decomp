#include "common.h"

/* Copy a supported selector; unsupported selector values leave the output untouched. */
extern "C" void selectionCopySupportedValue(u32 selector, u32 *output)
{
    switch (selector) {
    case 0: *output = 0; return;
    case 1: *output = 1; return;
    case 2: *output = 2; return;
    case 3: *output = 3; return;
    case 4: *output = 4; return;
    case 5: *output = 5; return;
    case 6: *output = 6; return;
    case 7: *output = 7; return;
    case 11: *output = 11; return;
    case 12: *output = 12; return;
    case 13: *output = 13; return;
    case 14: *output = 14; return;
    case 15: *output = 15; return;
    case 16: *output = 16; return;
    case 9: *output = 9; return;
    case 17: *output = 17; return;
    }
}
