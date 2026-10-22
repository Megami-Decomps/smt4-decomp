#include "common.h"

/* Map supported category numbers to their table identifiers. */
extern "C" u32 mapCategoryToTableId(u32 category)
{
    u32 id = 0;
    switch (category) {
    case 0: id = 1007; break;
    case 1: id = 1008; break;
    case 2: id = 1000; break;
    case 3: id = 1001; break;
    case 4: id = 1002; break;
    case 5: id = 1003; break;
    case 6: id = 1005; break;
    case 7: id = 1006; break;
    case 17: id = 1004; break;
    }
    return id;
}
