/* NON_MATCHING: 44 lines with the token-registry module's --fpu=softvfp (wave 82); before it: register assignment: retail keeps the resource in r4, the index in r5 and one zero in r7 (also the not-found code), passing a found value straight to strncpy in r1; the build gives the code its own register (r7) and the zero r9. */
#include "gamedata/ItemCodeInfo.h"

extern "C" {
s32 libc_strncmp(const char *left, const char *right, u32 count);
char *strncpy(char *destination, const char *source, u32 count);

// Extract the resource id and its bounded sys.ItemCode property.
ItemCodeInfo FUN_003df244(ItemPropertyResource **resource)
{
    ItemPropertyResource *properties = *resource;
    ItemCodeInfo result = {};
    result.id = *properties->id;
    const char *code = NULL;
    u32 count = properties->propertyCount;
    for (u32 i = 0; i < count; ++i) {
        if (libc_strncmp(properties->properties[i].key, "sys.ItemCode", 64) == 0) {
            code = properties->properties[i].value;
            break;
        }
    }
    strncpy(result.code, code, sizeof(result.code));
    result.code[31] = '\0';
    return result;
}
}
