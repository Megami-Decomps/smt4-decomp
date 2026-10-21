#include "common.h"

extern "C" u32 gameOptionResourceId(s32 category)
{
    u32 result = 0;
    switch (category) {
    case 0:  result = 1007; break;
    case 1:  result = 1008; break;
    case 2:  result = 1000; break;
    case 3:  result = 1001; break;
    case 4:  result = 1002; break;
    case 5:  result = 1003; break;
    case 6:  result = 1005; break;
    case 7:  result = 1006; break;
    case 20: result = 1004; break;
    default: break;
    }
    return result;
}
